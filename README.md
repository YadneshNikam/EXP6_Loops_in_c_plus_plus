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

# 1.Even Values:

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

# 2.Printing SIT five times:

1. Start
2. Initialize string variable a with "SIT".
3. For i = 0 to 4 (inclusive), do:
    a. Print the value of a followed by a newline.
4. End For loop.
5. End

#  3.Password:
1. Start
2. Initialize string a as the correct password "qwertz".
3. Declare string variable b to store user input.
4. Initialize integer variable trys to 5.
5. Prompt the user: "Enter a password:"
6. Read input into variable b.
7. While b is not equal to a, do:
    a. Decrement trys by 1.
    b. If trys equals 0:
        i. Print "You have exceeded the maximum number of attempts."
        ii. Print "The system will be locked for 1 minute."
        iii. Terminate the program.
    c. Else:
        i. Print "Incorrect password. Try again:"
        ii. Print "Hint: The password is the first five letters of your keyboard."
        iii. Prompt the user: "Enter a password:"
        iv. Read input into b.
8. If b equals a:
    a. Print "Password accepted!"
9. End


# 4.reverse of a string:

1. Start
2. Declare integer variables: prn, a, s.
3. Initialize s = 0.
4. Prompt the user: "Enter your PRN:"
5. Read input into prn.
6. While prn > 0, do:
    a. a = prn % 10  
    b. prn = prn / 10 
    c. s = s * 10 + a 
7. End While loop
8. Print "Reversed PRN: " followed by s.
9. End


# 5.Alphabet_Pattern:
  
1. Initialize `n` as the number of rows (e.g., 4).  
2. Initialize a character variable `ch` with 'A'.  
3. Loop `i` from 1 to `n` (rows):  
   - For each row, loop `j` from 1 to `i` (columns in the row):  
     - Print the current character `ch`.  
     - Increment `ch` to the next alphabet character.  
   - Move to the next line.  
4. End.

# 6.Floyd-s_Series:

1. Initialize `n` as the number of rows (e.g., 4).  
2. Initialize an integer `x` as 1 to start the series.  
3. Loop `i` from 1 to `n`:  
   - Loop `j` from 1 to `i`:  
     - Print `x`.  
     - Increment `x` by 1.  
     - Print a space if not at the end of the row.  
   - Move to the next line.  
4. End.

# 7.Hourglass_pattern:

1. Initialize `n` as the number of rows in the largest part of the hourglass (e.g., 5).  
2. For the upper part:  
   - Loop `i` from `n` down to 1:  
     - Print `(n - i)` spaces.  
     - Loop `k` from 1 to `i`:  
       - Print `*` followed by a space.  
     - Move to next line.  
3. For the lower part:  
   - Loop `i` from 2 to `n`:  
     - Print `(n - i)` spaces.  
     - Loop `k` from 1 to `i`:  
       - Print `*` followed by a space.  
     - Move to next line.  
4. End.

# 8.pattern_1:
 
1. Set `n` as the number of rows (e.g., 5).  
2. Loop `i` from 1 to `n`:  
   - For each row, loop `j` from 1 to `i`:  
     - Print `*`.  
   - Move to the next line.  
3. End.

# 9.pattern_2:

1. Initialize `n` as the number of rows (e.g., 5).  
2. Loop `i` from 1 to `n`:  
   - Loop `j` from `i` to `n`:  
     - Print `*`.  
   - Move to the next line.  
3. End.

# 10.Test: 
  
1. Loop `i` from 1 to 2 (outer loop):  
   - Print "Outer:" followed by the current value of `i`.  
   - Loop `j` from 1 to 2 (inner loop):  
     - Print "Inner:" followed by value of `j`.  
2. End.








