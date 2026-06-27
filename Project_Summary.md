Corner Grocer Item Tracker

Project Summary:
The Corner Grocer Item Tracker is a C++ program that helps a grocery store review how often each item was purchased throughout the day. The program reads item names from an input file, counts how many times each item appears, and stores the results in a map. From there, the user can search for one item, view the full frequency list, or display a histogram that makes the data easier to read. The program also creates a backup file with the item frequencies.
This project brought together several concepts from the course into one complete program. Instead of practicing file input and output, maps, functions, and classes separately, I used them together to build a program that solves a realistic problem.

What I Did Well:
From the beginning, I wanted the program to stay organized instead of putting all of the logic inside main(). Breaking the program into smaller functions made it easier to test individual features and fix problems without affecting the rest of the code.
I also think the menu turned out well because the options are clear and easy to follow. Since the user can search for one item, print all item frequencies, or view a histogram, the program gives them a few different ways to understand the grocery data.

Where I Could Improve:
If I continued working on this project, I would spend more time improving the input validation and error handling. The program works with the expected input, but it could handle invalid menu choices or missing files more smoothly.
I would also make the item search case insensitive. Right now, the user has to type the item name the same way it appears in the file. Making the search more flexible would make the program easier to use.

Challenges I Faced:
The biggest hurdle for me was learning when and how to use a map effectively. Once I understood that each grocery item could be used as a key while its purchase count became the value, the rest of the program became much easier to design.
I worked through this by going back through ZyBooks, using the course materials, testing different inputs, and using Visual Studio's debugger to find problems. This helped me slow down and debug the program in smaller sections instead of writing too much code at once and feeling overwhelmed later.

Skills I Can Use Later:
Looking back, this project feels like the point where a lot of the course material started fitting together. Earlier assignments focused on smaller concepts, but this project required me to combine file input and output, functions, classes, maps, and debugging into one application.
Although this project focuses on grocery inventory instead of games, the same programming concepts apply to larger software projects. Organizing code into smaller sections, working with data, reading from files, and debugging problems are all skills I will continue building as I work toward a career in software development.

Maintainability, Readability, and Adaptability:
I wanted the code to be easy to come back to later, so I used descriptive variable and function names, separated tasks into their own functions, and added comments where they helped explain specific sections of the code.
Keeping the project organized this way makes it easier to maintain and update. If I wanted to add another menu option or another type of report later, I would not have to completely rewrite the program because the main parts are already separated.
