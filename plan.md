# Your 30-day C++ and DSA plan

**Time available: 2 hours a day × 30 days = 60 hours.**

I’ll assume you have **no previous programming experience**. These 30 days will be the first stage of your journey from beginner to advanced: we’ll build a strong foundation, practise core data structures and algorithms, and introduce selected advanced topics.

**The goal is understanding and independent problem-solving—not merely finishing the syllabus.** Advanced C++ mastery will remain a longer-term goal beyond this first month.

We’ll use **C++17 for the core examples** and introduce newer features separately when useful. We’ll use standard-library tools early, consistent with the C++ Core Guidelines’ recommendation to know and use the standard library appropriately. [ISO C++](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

## 1. How we’ll use your two hours

| Activity | Time | What we’ll do |
|---|---:|---|
| Review | 10 minutes | Recall the previous lesson and revisit mistakes. |
| New lesson | 35 minutes | Learn one main topic through explanations and small examples. |
| Guided practice | 20 minutes | Work through a problem together and trace the code step by step. |
| Your assignment | 45 minutes | Complete a short understanding check and a main coding task. |
| Wrap-up | 10 minutes | Test your work, summarise the lesson, and identify remaining doubts. |
| **Total** | **120 minutes** | **No additional mandatory homework.** |

On revision and project days, we’ll shift more of the time toward coding and feedback.

Each lesson will follow this pattern:

**Intuition → example → code → step-by-step trace → common mistakes → practice.**

For DSA—**data structures and algorithms**—we’ll also discuss why an approach works and how its time and memory requirements grow. Performance analysis is a core part of introductory algorithms study, alongside learning the algorithms themselves. [MIT OpenCourseWare](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/)

## 2. The daily roadmap

The assignments below show the intended practice. During each lesson, I’ll provide the full problem statement, input/output examples, constraints, and test cases.

### Days 1–7: Programming foundations

**Goal:** Write small programs using input, decisions, loops, functions, and collections of values.

| Day | Topics we’ll cover | Main practice assignment |
|---|---|---|
| **1** | **Getting started:** What a program is; compiler and editor setup; the structure of a C++ program; `main`, `cout`, and basic `cin`. | Run your first program, print a short introduction, and read and display a number. |
| **2** | **Variables and calculations:** `int`, `double`, `char`, `bool`; initialisation; arithmetic; integer division; basic conversions. | Build a temperature converter and predict the results of several arithmetic expressions. |
| **3** | **Decisions:** Comparisons, logical operators, `if`, `else if`, `else`, and an introduction to `switch`. | Build a grade classifier that also rejects marks outside the permitted range. |
| **4** | **Loops:** `for`, `while`, `do-while`, counters, accumulators, `break`, and `continue`. | Calculate the sum of a sequence and build a multiplication-table program. |
| **5** | **Functions:** Parameters, return values, local scope, and breaking a problem into smaller parts. | Rewrite a calculator using separate functions for its operations. |
| **6** | **Arrays and vectors:** Indexing, traversal, fixed-size collections, `std::vector`, and boundary mistakes. | Find the minimum, maximum, and average of a collection of numbers. |
| **7** | **Checkpoint 1:** Review Days 1–6; distinguish compilation errors from incorrect program logic; practise tracing code. | Build a small menu-driven number toolkit and complete a short quiz. |

**Checkpoint target:** You can write a small program from a description and explain what each loop and function does.

### Days 8–14: Core C++ and organising programs

**Goal:** Work with text, understand how functions access data, and organise related information into classes.

We’ll introduce memory management carefully. The C++ Core Guidelines recommend automatic resource management and scoped objects rather than unnecessary manual allocation. [ISO C++](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

| Day | Topics we’ll cover | Main practice assignment |
|---|---|---|
| **8** | **Strings:** `std::string`, `getline`, characters, indexing, and basic text processing. | Count vowels and check whether a word reads the same forwards and backwards. |
| **9** | **Searching and efficiency:** Linear search, binary search on sorted data, and an introduction to Big-O notation. | Implement both searches and compare the number of checks they make. |
| **10** | **References and pointers:** Pass-by-value versus pass-by-reference; `const`; addresses; dereferencing; `nullptr`. | Write a reference-based swap function and trace a few small pointer examples. |
| **11** | **Structs and classes:** Objects, member variables, member functions, constructors, and public/private access. | Create a `Student` class containing an ID, name, and mark, with a method to display its details. |
| **12** | **Object lifetime and ownership — introduction:** Destructors, automatic cleanup, RAII, and `std::unique_ptr`. | Predict when objects are destroyed and use a supplied example to practise safe ownership. |
| **13** | **Standard-library tools:** `auto`, range-based loops, basic iterators, `std::sort`, `std::find`, and `std::count`. | Sort and search a vector, first using earlier code and then using library algorithms. |
| **14** | **Checkpoint 2 and mini-project:** Combine functions, strings, vectors, and classes. | Build a basic gradebook that adds students, lists them, and calculates the average mark. |

**Checkpoint target:** You can organise a small program into functions and classes, use vectors and strings, and explain the difference between a value, reference, and pointer.

For ownership, we’ll begin with `unique_ptr`; shared ownership will come later. This follows the Core Guidelines’ preference for `unique_ptr` unless ownership genuinely needs to be shared. [ISO C++](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

### Days 15–21: Core data structures and problem-solving

**Goal:** Start choosing an approach because it fits the problem—not simply because it is the last technique you learned.

| Day | Topics we’ll cover | Main practice assignment |
|---|---|---|
| **15** | **Hashing and associative containers:** Frequency counting, `std::unordered_map`, `std::unordered_set`, and a comparison with ordered maps and sets. | Count the frequency of numbers and identify duplicates. |
| **16** | **Recursion:** Base cases, recursive calls, the call stack, and tracing small examples. | Write a recursive sum function and explain how its calls return. |
| **17** | **Sorting algorithms:** Insertion sort; divide-and-conquer thinking; a guided introduction to merge sort. | Implement insertion sort independently and complete the missing parts of a merge-sort example. |
| **18** | **Linked lists — introduction:** Nodes, links, traversal, and diagrams of insertion and deletion. | Using a supplied node setup, traverse a singly linked list and search for a value. |
| **19** | **Stacks and queues:** Their operation order, common uses, `std::stack`, and `std::queue`. | Check balanced brackets using a stack; trace a simple queue-based simulation. |
| **20** | **Array problem-solving patterns:** Two pointers and fixed-size sliding windows. | Find a pair with a target sum in sorted data and complete a guided fixed-window sum problem. |
| **21** | **Checkpoint 3:** Mixed problems; selecting a data structure; explaining time and space complexity. | Solve two short problems drawn from searching, hashing, stacks, and array patterns, then explain your choices. |

**Checkpoint target:** You can recognise several common problem patterns, solve straightforward examples, and explain the cost of your solution.

For more complex structures, I’ll supply setup code when necessary so that the lesson stays focused on the algorithm rather than boilerplate.

### Days 22–28: Broader DSA and advanced C++ introductions

**Goal:** Understand the central ideas and complete small guided implementations. These are **introductory lessons, not claims of mastery after one day**.

| Day | Topics we’ll cover | Main practice assignment |
|---|---|---|
| **22** | **Trees:** Binary trees, binary search trees, traversal diagrams, and searching. | Given a tree scaffold, implement an inorder traversal and trace a search. |
| **23** | **Heaps and priority queues:** Priority-based processing and `std::priority_queue`. | Use a priority queue to retrieve the largest `k` values from a collection. |
| **24** | **Graphs:** Vertices, edges, adjacency lists, breadth-first search, and depth-first search. | Complete a guided breadth-first search and trace depth-first search on the same small graph. |
| **25** | **Dynamic programming — introduction:** Repeated subproblems, memoisation, and bottom-up computation. | Solve a small staircase-counting problem from a supplied recurrence and compare approaches. |
| **26** | **Object-oriented design:** Composition, inheritance, virtual functions, `override`, and runtime polymorphism. | Extend a supplied shape example with two classes that calculate their areas differently. |
| **27** | **Generic programming:** Basic function templates, lambdas, and custom sorting rules. | Write a generic comparison function and sort student records by mark using a lambda. |
| **28** | **Files and error handling:** Reading and writing text files, checking stream failures, and an overview of exceptions. | Save and load gradebook records; handle a missing or unreadable file sensibly. |

**Checkpoint target:** You can explain what these techniques are for, trace a small example, and modify a guided implementation.

### Days 29–30: Final project and assessment

| Day | Topics we’ll cover | Main practice assignment |
|---|---|---|
| **29** | **Complete the gradebook project:** Combine earlier work rather than start a large new application. | Add searching by ID, sorting by mark, and input validation; integrate the file handling from Day 28. |
| **30** | **Final review:** Project testing, corrections, a cumulative quiz, and an unfamiliar problem. | Demonstrate the gradebook, fix issues found during review, and solve one appropriately sized DSA task. |

The final project stays deliberately small: a **console-based gradebook**, with no graphical interface, database, or networking.

## 3. How assignments and evaluation will work

### What you’ll receive after each lesson

You’ll get a short concept check and a main coding assignment. Some days will include an **optional challenge**, but it will not be required to complete the course.

I’ll normally give hints before a full solution so you have room to practise. When you ask for a complete answer, I’ll explain the approach, code, and relevant mistakes—not just paste the solution.

### What to submit

Send your code in a code block, along with a brief explanation of your approach and the test cases you tried. For a program that is not working, include the compiler message or the expected and actual output. **An unfinished attempt is still useful for review.**

### How I’ll review it

| Area | What I’ll check |
|---|---|
| **Correctness** | Does the program solve the stated problem? |
| **Understanding** | Can you explain why your approach works? |
| **Testing** | Have you considered boundaries and unusual inputs? |
| **Clarity** | Are names, functions, and program structure understandable? |
| **Efficiency** | Is the time and memory usage appropriate, once we have covered those ideas? |

My feedback will identify what you did well, show specific issues with examples, explain the correction, and give you a targeted retry when needed. I’ll distinguish actual compilation/test results from observations made through code review.

**We won’t rush past a weak foundation.** When a checkpoint reveals a gap, we’ll use review time—and, when necessary, replace a later introductory topic—to strengthen it while keeping the two-hour limit.

## 4. What comes after these 30 days?

The next stage will deepen the topics introduced here rather than immediately add dozens of new ones.

**Advanced C++** will include copy and move semantics, the Rule of Zero/Five, deeper templates, exception safety, multi-file projects and build tools, modern language features, and eventually concurrency.

**Further DSA** will include backtracking, greedy algorithms, prefix sums, more substantial tree and graph problems, shortest paths, disjoint sets, and broader dynamic-programming practice.

For optional reading alongside our lessons, **LearnCpp** provides free material covering writing, compiling, and debugging C++ without assuming previous programming experience. It will be a reference, not a second syllabus you must finish. [Learn C++](https://www.learncpp.com/)