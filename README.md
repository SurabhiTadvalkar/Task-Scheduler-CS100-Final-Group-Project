# Task Scheduler:
 
 > Authors: \<[Jesus Martinez Vega](https://github.com/jesus-mv)\>, \<[Surabhi Tadvalkar](https://github.com/SurabhiTadvalkar)\>, \<[Calvin Truong](https://github.com/ctruo)\>
 
## Project Description
Being college students, time management is essental to our success. Since its important to keep all assignments, and class schedules in order - we decided on a task scheduler seeing as we all need to be organized to succeed. In this task scheduler, the user will be able to create (or delete) tasks with a title, description, priority, and due date. The user will also be able to create tasks within tasks and be able to edit and undo any operations. Input and output will be all be done in the terminal. 
  
In this project we will be using the composite design pattern and the state design pattern. The composite design pattern will be used for its ability to treat groups of objects as if they are a single object. This will help streamline the implementation of the "tasks within tasks" feature. This will allow us to make task objects within task objects. 
 
The state design pattern will be used to be able choose which behavior to execute for a single task object. This will help us implement the undo feature. In addition, this  will allow us to make changes to task properties that the user wishes to make. 
 
 tools and languages: 
 * \<[c++](https://www.cplusplus.com/info/description/)\>     - main programming language
 * \<[valgrind](https://valgrind.org/info/about.html)\>       - to track memory
 * \<[cmake](https://cmake.org/overview/)\>                   - compilation and testing
 * <[draw.io](https://drawio-app.com/uml-diagrams/)\>         - to draw UML diagrams
 * <[github](https://github.com/)\>                           - host of remote repository
 * <[googletest](https://github.com/google/googletest.git)\>  - for unit testing
 
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
