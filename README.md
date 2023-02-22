# EAD

## Exercise 1 – Game Engine
### Implement your Game Engine Setup
- [x] Create a public github repository
- [] Create your engine
- [] name your engine
- [] engine should be a dll
- [] write an entry point for your game
- [] Create a game for testing – engi2e and game should be seperated
- [] name your game
- [] call your game engine
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
  
