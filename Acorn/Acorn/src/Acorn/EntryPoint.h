#pragma once

#ifdef AC_PLATFORM_WINDOWS

extern Acorn::Application* Acorn::CreateApplication();

int main(int argc, char** argv) 
{
	Acorn::Log::Init();
	AC_CORE_WARN("Initialized Log!");
	int a = 5;
	AC_INFO("Hello! Var={0}", a);


	auto app = Acorn::CreateApplication();
	app->Run();
	delete app;
}

#endif
