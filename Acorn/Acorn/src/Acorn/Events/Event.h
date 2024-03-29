#pragma once
#include "acpch.h"
#include "./Acorn/Core.h"


namespace Acorn
{

	// Events in Acorn are currently blocking, meaning when an event occurs it
	// immediately gets dispatched and must be dealt with right then and there.
	// For the future, a better strategy might be to buffer events in an event
	// bus and process them during the "event" part of the update stage.

	// event types
	enum class EventType
	{
		None = 0,
		WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
		AppTick, AppUpdate, AppRender,
		KeyPressed, KeyReleased,
		MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
	};

	// event categories
	enum EventCategory
	{
		None = 0,
		EventCategoryApplication = BIT(0),
		EventCategoryInput = BIT(1),
		EventCategoryKeyboard = BIT(2),
		EventCategoryMouse = BIT(3),
		EventCategoryMouseButton = BIT(4)
	};

	// event macros
#define EVENT_CLASS_TYPE(type) static EventType GetStaticType() { return EventType::##type; }\
									virtual EventType GetEventType() const override { return GetStaticType(); }\
									virtual const char* GetName() const override { return #type; }

#define EVENT_CLASS_CATEGORY(category) virtual int GetCategoryFlags() const override { return category; }

	// base class for all events
	class ACORN_API Event
	{
		friend class EventDispatcher;
		public:
			virtual EventType GetEventType() const = 0;
			virtual const char* GetName() const = 0;
			virtual int GetCategoryFlags() const = 0;
			virtual std::string ToString() const { return GetName(); }

			// is the event in the given category?
			inline bool IsInCategory(EventCategory category)
			{
				return GetCategoryFlags() & category;
			}
		protected:
			// if an event is handled, it will not be propagated to other layers
			bool m_Handled = false;
	};

	// event dispatcher
	class EventDispatcher
	{
		template<typename T>
		using EventFn = std::function<bool(T&)>;
		public:
			EventDispatcher(Event& event)
				: m_Event(event)
			{
			}

			// F will be deduced by the compiler
			template<typename T>
			bool Dispatch(EventFn<T> func)
			{
				if (m_Event.GetEventType() == T::GetStaticType())
				{
					m_Event.m_Handled = func(*(T*)&m_Event);
					return true;
				}
				return false;
			}
		private:
			Event& m_Event;
	};

	inline std::ostream& operator<<(std::ostream& os, const Event& e)
	{
		return os << e.ToString();
	}
}