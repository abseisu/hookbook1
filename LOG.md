```markdown
# Author
Adnan Bseisu 
dab262

# Estimate of time to complete assignment
15 hours

# Actual time to complete assignment
| Date | Time Started | Time Spent | Work completed |
| :--: | -----------: | ---------: | :------------- |
| 03/01 |      9:00pm |       2:00 | read assignment and drafted an outline of how each of the functions in pirate_list.c should work. |
| 03/01 |      11:00pm |       0:30 | drafted a high level outline for how I wanted to organize my files and eventually link them. I also started thinking about what extra helper functions and files would be helpful for the implementaiton. |
| 03/08 |      3:00pm |       2:00 | wrote code for the main function of hookbook.c. I also started working on the read_names function, though didn't complete it as I was having trouble with scanning the names properly|
| 03/08 |      8:00pm |       1:00 | Finished read_names and print functions for hookbook.c, meaning that the hookbook.c file was now complete|
| 03/09 |      5:00pm |       3:00 | Began working on the implementations of the pirate_list.c functions, but I notably skipped over list_sort, list_insert and list_remove |
| 03/09 |      10:00pm |       2:30 | Coded list_insert and list_remove (as well as their helpers). I was struggling with a segmentation fault at this point, but used valgrind to help me catch a pointer that was being freed without being allocated. Once I figured insert out, remove came pretty quickly after that. |
| 03/10 |      1:00pm |       2:00 |  Outlined the merge sort algorithm I wanted to implement on a whiteboard, rewatching the lecture on merge sort from class and drawing from online resources to help me adapt it to pirate list |
| 03/10 |      3:00pm |       1:00 |  Implemented merge sort algorithm, following my outline|
| 03/10 |      5:00pm |       5:00 |  Lots of debugging––segmentation faults, a wonky sorting function, and failed public test cases. I wasn't able to pass V004 for a long time, but when I tweaked my sorting algorithm, it passed. |
|      |              |       19:00 | total time spent |

# Collaboration
I discussed my solution with no one.

# Discussion
This was a very challenging PSET. Not only did it require a strong technical knowledge of C to avoid memory leaks, segmentation faults, and other fatal errors, but it also was organizationally challenging. There were lots of files and functions, and without having the foresight to spend a lot of time outlining my work, I don't think I would have succeeded. This PSET also required a lot of patience during the debugging phase. I'm very fortunate to have been able to draw from Ed posts from people with similar problems to me, but even still I encountered novel problems that often required me to rework entire implementations of functions. Overall, this was a very difficult but rewarding PSET. In the future, I'd like to make a more detailed outline/plan, as I found that when I did, the implementation was much smoother and less prone to errors. 

```
