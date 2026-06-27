Corner Grocer Item Tracker

Project Summary:
The Corner Grocer Item Tracker is a C++ program that helps a grocery store keep track of how often each item is purchased throughout the day. The program reads item names from an input file, counts how many times each item appears, and stores the results in a map. From there, the user can search for a specific item, display the frequency of every item, or view a histogram that provides a simple visual of the purchase data. The program also creates a backup file containing all of the item frequencies.
This project pulled together a lot of what I learned throughout the course. Instead of practicing one concept at a time, I had to use several of them together to build a program that actually solved a problem.

Design Decisions:
One thing I focused on was keeping the program organized instead of putting all of the logic inside main(). Breaking the program into smaller functions made it easier to test each feature, track down bugs, and make changes without affecting the rest of the program.
I also wanted the menu to be simple to follow. Each option has a specific purpose, whether it's searching for a single item, displaying all item frequencies, or printing the histogram. Using a map to store the grocery items and their frequencies made searching and displaying the data much more efficient than reading through the file every time.

Future Improvements:
If I came back to this project, I would spend more time improving the input validation and error handling. The program works with the expected input, but it could do a better job handling invalid menu choices or situations where the input file can't be opened.
I would also make the item search case insensitive so users wouldn't have to type an item's name exactly as it appears in the data file. Small improvements like these would make the program easier to use and more reliable.

Challenges:
The part I spent the most time figuring out was how to use a map effectively. Once I understood that each grocery item could be used as the key and its purchase count could be stored as the value, the rest of the program became much easier to build.
To work through that, I went back through ZyBooks, reviewed my notes, used Visual Studio's debugger, and tested the program frequently while I was writing it. That process also taught me not to write too much code before testing it. Fixing smaller problems as I went was much easier than trying to debug everything at the end.

Key Takeaways:
Looking back, this project feels like the point where everything from the course started coming together. Earlier assignments introduced individual topics, but this project required me to use several of them at the same time to build a complete application.
Although this program focuses on grocery inventory, the programming concepts are the same ones I'll continue using in future courses and personal projects. Reading from files, organizing code into smaller functions, working with data structures, and debugging problems are all skills I'll continue building as I work toward a career in game development.

Code Organization:
I wanted the code to be easy to read if I came back to it later, so I used descriptive variable and function names, separated different tasks into their own functions, and added comments where they helped explain the code.
Keeping everything organized also makes the program easier to build on in the future. If I wanted to add another menu option or a different report later, I could do that without having to rewrite the entire program.
