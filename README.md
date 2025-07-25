# Loops_in_c_plus_plus
# Experiment 6: C++ Decision Making Statements (Loops)

# Aim:
To study and understand the use of decision making statements and loops in C++ programming.

# Theory:

# Loops in C++
Loops are fundamental constructs in C++ programming that allow a block of code to be executed repeatedly based on a condition. They help reduce redundancy, make code concise, and automate repetitive tasks. There are three primary types of loops in C++: for, while, and do-while loops. Let's explore each in detail.

# 1. For Loop
Overview
The for loop is generally used when the number of iterations is known in advance. It is an entry-controlled loop, meaning the condition is checked before each iteration. Its structure combines initialization, condition, and update expressions in one line.

_Syntax_

-for (initialization; condition; update) {
    // Loop body
}

Initialization: Sets up a loop control variable.

Condition: Evaluated before each loop iteration. If false, the loop exits.

# 2. While Loop
Overview
The while loop is also an entry-controlled loop but is preferred when the number of iterations is not known beforehand. The condition is checked before each iteration; if it's false initially, the loop may never execute.

 _Syntax_

-while (condition) {
    // Loop body
}

Condition: Checked before the loop body executes. If true, the loop runs; otherwise, it exits.

Loop Body: Executed as long as the condition is true.

# Importance
Loops are essential in automating repetitive tasks, iterating over data structures, processing input, and building efficient, readable programs in C++. Mastery of loops enables a programmer to solve complex computational problems concisely and efficiently.

# Conclusion:
This experiment demonstrates the use of decision making control structures (if, if-else, switch-case, loops) in C++. Mastery of these constructs is fundamental for developing complex, interactive, and logical programs.

# algorithms:

# Even Values:

1. Start
2. Declare an integer variable `a`.  
3. Prompt the user with the message: "Enter an integer:".  
4. Read the input value from the user and store it in variable `a`.  
5. Initialize a `for` loop control variable `i` with value 0.  
6. Repeat the following steps while `i` is less than or equal to `a`:  
   - Check if `i` is even (i.e., `i % 2 == 0`).  
     - If true, print the value of `i` followed by a space.  
   - Increment `i` by 1.  
7. End the loop when `i` becomes greater than `a`.  
8. End  

# Printing SIT five times:




