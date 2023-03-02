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
- [] Implement a logging system or use an existing library with an abstraction layer in between
(facade pattern, adapter pattern, ...)
- [] provide a build system for your project
- [] push your results on github
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
