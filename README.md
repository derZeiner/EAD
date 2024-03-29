# EAD

## Exercise 1 – Game Engine "Acorn"
### Implement your Game Engine Setup
- [x] Create a public github repository
- [x] Create your engine
- [x] name your engine (Acorn)
- [x] engine should be a dll
- [x] write an entry point for your game
- [x] Create a game for testing – engine and game should be seperated
- [x] name your game (Sandbox)
- [x] call your game engine
### Questions
1. What is the difference between git and github?
    - Git is a version control system that allows you to track changes in your code and collaborate with others. It is a command-line tool that can be used locally on your machine or hosted on a remote server. Git allows you to create branches, merge changes, and revert to previous versions of your code.
    - GitHub, on the other hand, is a web-based platform that provides hosting for Git repositories. It is a popular platform for hosting open-source projects and collaborating with other developers. GitHub provides a user-friendly interface for managing Git repositories, and it offers features like pull requests, issues, and wikis that make it easier to collaborate on projects.
2. Name 3 benefits of a version control system:
   - Collaboration: Version control systems make it easier for multiple people to work on the same project simultaneously. They allow users to merge changes made by different people and keep track of who made what changes.
   - Backup and Restore: A version control system keeps track of all changes made to a file or project, creating a history of changes. This feature helps to revert to an earlier version of the project or files in case of accidental deletion, corruption or a need to roll back to a prior state.
   - Experimentation and Experimentation Management: Version control systems allow users to create different branches of a project, enabling the implementation and testing of new ideas or features in a separate environment. This feature helps developers to experiment safely and make sure that the main branch of the project remains stable.
3. Name 3 alternatives to git:
   -  Apache Subversion
   -  Azure DevOps Server
   -  AWS CodeCommit
4. Name 2 differences between git and other version control systems:
   - Hosting: Git is an open-source distributed version control system that can be used on a local machine or hosted on a remote server. On the other hand, AWS CodeCommit is a managed version control service provided by Amazon Web Services (AWS) that is fully managed, scalable, and secure. CodeCommit is hosted entirely on AWS infrastructure and can be integrated with other AWS services such as AWS CodePipeline for continuous integration and deployment.
   - Pricing: Git is free and open-source, whereas AWS CodeCommit is a paid service with usage-based pricing. CodeCommit offers a free tier that includes up to 5 active users per month, 50 GB of storage, and 10,000 Git requests per month. Beyond that, users are charged based on the number of active users, storage used, and Git requests made. Git, on the other hand, can be used without any cost for the software itself, although users may incur hosting or storage costs if they choose to use a remote Git repository.
5. Name known issues related to game engines (Unreal, Unity) and version control systems:
   - Large binary files: Game engines often generate large binary files, such as textures, audio, and 3D models, which can be difficult to manage in a version control system. These files can quickly consume storage space and slow down version control operations, such as cloning or merging, especially in large projects.
   - Merge conflicts: When multiple developers are working on the same project, it's possible for conflicts to arise when merging changes made to the same file. This is especially common when working with complex game engine assets, such as scenes or prefabs, which can be difficult to merge automatically.
   - Versioning of project settings: Game engines often have many project-specific settings, such as lighting, physics, and input mapping, which can be critical to the game's behavior. These settings can change frequently and can cause conflicts between different versions of the project, especially when multiple developers are working on different parts of the project simultaneously.
   - File locking: Some version control systems support file locking, which can prevent multiple developers from editing the same file simultaneously. However, this can also cause bottlenecks and delays in development, especially when many files are locked at once.
   - Dependencies: Game engines often rely on external dependencies, such as plugins or third-party libraries, which can introduce versioning conflicts and make it difficult to manage the project's dependencies in a version control system.
  
## Exercise 2 – Game Engine "Acorn"
### Implement a Logging System
- [x] Implement a logging system or use an existing library with an abstraction layer in between
(facade pattern, adapter pattern, ...)
- [x] provide a build system for your project
- [x] push your results on github
### Questions
1. Describe a logging system with your own words:
   - is for logging events, and see if and what happens, recording system informations, shaders compiling, files opening, etc.
   - These events can include user interactions, errors, performance metrics, security-related events, and more.
   - Logging systems are typically designed to capture relevant data in a structured format, which can then be analyzed and used to troubleshoot issues, monitor system health, and gain insights into system usage patterns.
2. What is the difference between git submodules and git subtrees?
   - Git submodules: allow you to include a separate Git repository within your own repository as a subdirectory. When you clone your repository, the submodule repository is not included by default, but you can initialize and update it with separate Git commands. Changes made in the submodule repository can be tracked and committed separately from the main repository.
   - Git subtrees: allow you to merge an entire external repository into a subdirectory of your own repository. The history of the external repository is preserved in your repository's history, and changes made to the subtree are committed in your repository as normal.
   - The key difference between the two is that submodules allow you to maintain a separate history for the external repository, while subtrees merge the history of the external repository into your own repository's history
3. What is a build system in C++? Name 3 build systems:
   - A build system in C++ is a tool or set of tools that automate the process of compiling, linking, and packaging source code into a binary executable or library. Build systems typically provide a way to manage dependencies, optimize build times, and handle cross-platform issues.
   1. CMake: CMake is a popular cross-platform build system that generates native build files for a wide range of platforms, including Linux, macOS, Windows, and more. It supports a variety of compilers and toolchains, and is highly customizable through a scripting language called CMakeLists.txt.
   2. Make: Make is a classic build system that has been used in C++ development for decades. It uses a Makefile to specify build targets and dependencies, and automatically rebuilds only the parts of the project that have changed since the last build.
   3. Premake: Premake is a cross-platform build configuration tool that allows developers to define their build process in a single script, which can then generate project files for a variety of build systems, including Make, Visual Studio, Xcode, and more. Premake uses a simple and readable Lua scripting language to define project settings, dependencies, and build options, making it easy to automate complex build workflows.
4. What is a package manager in C++? Name 3 package managers:
   - A package manager in C++ is a tool that automates the process of installing, upgrading, and managing external libraries and dependencies that a C++ project may require. Package managers typically provide a central repository of pre-built libraries that can be easily downloaded and integrated into a project, along with tools for managing dependencies and resolving conflicts.
   1. Conan: Conan is an open-source package manager for C++ that supports multiple platforms and package types, including header-only libraries, binary packages, and source packages. It integrates with popular build systems like CMake and Bazel, and allows developers to easily share and distribute their own packages.
   2. vcpkg: vcpkg is a cross-platform package manager developed by Microsoft that provides pre-built binary packages for a wide range of C++ libraries and tools. It can be used with a variety of build systems, including Visual Studio, CMake, and Make, and is designed to be easy to use and integrate into existing projects.
   3. Hunter: Hunter is a CMake-based package manager that allows developers to manage their project's dependencies directly from their CMakeLists.txt file. It provides pre-built binary packages for a wide range of C++ libraries and tools, and can automatically download and configure packages as needed during the build process. Hunter also includes support for platform-specific dependencies and allows developers to customize the build process for each package.

## Exercise 3 – Game Engine "Acorn"
### Implement an Event System
- [x] implement an Event system or use an existing library with an abstraction layer in between
(facade pattern, adapter pattern, ...)
- [x] push your results on github
### Questions
1. What is the difference between a dynamic linked library and a static library?
   Dynamic Linked Libraries (DLLs) and Static Libraries are two different ways of sharing code between different software applications.
   - **dynamic linked library (dll)**
      A dynamic linked library, on the other hand, is a shared library that is **loaded into memory at runtime** when it is needed by the program. The program uses **functions or data from the DLL by referencing them** through their exported names. This means that the library code is **not duplicated in every program** that uses it, resulting in **smaller executable** files. Dynamic libraries are generally used when the **library code is expected to change frequently**, or when multiple programs need to share the same code.
      Overall, dynamic libraries are more flexible and efficient than static libraries, but they require more complex linking and runtime management. Static libraries, on the other hand, are simpler to use, but can result in larger executable files.
   - **static library (lib)**
      A static library is a **file containing compiled object code** that can be **linked with other object code** to form an executable program. When the program is compiled, the **entire code of the static library is included in the executable file**. This means that the library code is **duplicated in every program** that uses it, resulting in **larger executable files**. Static libraries are generally used when the library code is not expected to change frequently.

2. Describe a logging system with your own words:
   - A **logging system** is a mechanism for **capturing and storing information about the behavior of a software application or system**. It involves creating a record of events or actions that occur during the operation of the software, along with additional metadata such as timestamps, severity levels, and contextual information.
   - The purpose of a logging system is to **provide visibility into the behavior of the software**, which can help developers troubleshoot issues, diagnose errors, and understand how the system is being used by end-users. The logs generated by the system can be used to identify patterns, detect anomalies, and analyze performance metrics.
   - A typical logging system will have several components, including a logging framework or library that provides a set of APIs for developers to use when writing log messages, a logging configuration that specifies the output destination(s) for the log messages (such as a file or a remote log server), and a log viewer or analysis tool that allows developers to view and search through the log data.
   - Logging systems can also incorporate features such as log rotation (to prevent log files from becoming too large), log filtering (to exclude certain types of messages or events), and log aggregation (to collect log data from multiple sources into a single location).
   - Overall, a logging system is an essential tool for developers and operations teams who need to monitor and troubleshoot complex software systems, and can provide valuable insights into the behavior of the software and the needs of the end-users.
3. What is a Design Pattern?
   - A design pattern is a **general, reusable solution** to a commonly **occurring problem in software design**. It is a proven and tested approach that has been developed and refined over time by experienced software engineers, and is intended to help designers and developers solve problems in a structured and consistent way.
   - Design patterns can be thought of as **templates or blueprints for solving particular software design problems**, and typically consist of a set of rules, guidelines, and best practices for implementing a specific solution. They are typically language-agnostic, meaning that they can be applied to software written in any programming language, and can be adapted to a wide range of design challenges.
4. Name and describe 2 Design Patterns (except façade or adapter):
   - **Singleton Pattern** - This is a creational design pattern that ensures a **class has only one instance** and provides a global point of access to that instance.
   - **Observer Pattern** - This is a behavioral design pattern that defines a **one-to-many dependency between objects**, so that when one object changes state, all its dependents are notified and updated automatically.

## Exercise 3 - Game Engine "Acorn"
### Implement an Event System
- [x] implement a Window system or use an existing library with an abstraction layer in between
- [x] push your results on github
### Questions
1. What is a precompiled header? Name pros and cons:
   
   A precompiled header is a **feature in some programming languages**, such as C and C++, that allows the **compiler to process a portion of source code once and save the intermediate result as a binary file**. This binary file can then be included in multiple source files, reducing the need to repeatedly compile the same header files and speeding up the overall compilation process.

   - Pros:
      - **Faster compilation times**: Precompiled headers can significantly reduce compilation times, especially for large projects with many header files.
      - **Improved consistency:** Using a precompiled header ensures that all source files include the same set of header files, reducing the chance of inconsistencies.

   - Cons:
      - **Maintenance overhead:** Managing precompiled headers can add complexity to a project, as developers need to ensure the precompiled header is kept up-to-date and compatible with the source files.
      - **Limited portability:** Precompiled headers may not be portable across different compilers or platforms, which can lead to difficulties when sharing code or working in diverse environments.

2. Describe the layer of abstraction with your own words:
   
   The layer of abstraction refers to the **concept of simplifying complex systems by breaking them down into smaller**, more manageable components. In software design, a layer of abstraction **hides the intricate details of lower-level functionality** and **exposes only the essential operations or interfaces to the user**. By doing this, developers can work with high-level concepts without needing to understand every detail of the underlying system, making it easier to design, develop, and maintain software.
3. Name the SOLID principles and describe them briefly:

   The SOLID principles are a set of design guidelines for writing maintainable and scalable object-oriented software. They consist of:

   - S**ingle Responsibility Principle (SRP)**: A class should have only one reason to change, **meaning it should have only one responsibility**. This helps to minimize the impact of changes and makes it easier to maintain and understand the code.
   - **Open/Closed Principle (OCP)**: Software entities (classes, modules, functions, etc.) should be **open for extension but closed for modification**. This means that new functionality should be added by extending existing entities rather than modifying their code, promoting code reusability and reducing the risk of introducing bugs.
   - **Liskov Substitution Principle (LSP)**: Subtypes should be substitutable for their base types without affecting the correctness of the program. In other words, **objects of a derived class should be able to replace objects of the base class without altering** the desirable properties of the program.
   - **Interface Segregation Principle (ISP)**: Clients should not be **forced to depend on interfaces they do not use**. This principle encourages designing smaller, more focused interfaces so that classes implementing them only need to implement the methods that are relevant to their behavior.
   - **Dependency Inversion Principle (DIP)**: High-level modules should not depend on low-level modules; both should depend on abstractions. **This principle promotes decoupling and flexibility by encouraging the use of interfaces or abstract classes to define dependencies between modules**, making it easier to swap out implementations or refactor code.