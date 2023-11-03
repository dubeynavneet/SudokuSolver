# SudokuSolver
Here is the code to check the valid as well as solve the sudoko
Implemeted BackTracking in cpp language
Implemeted Recursion

# What is backtracking?

  Backtracking is a general algorithmic technique that is used for finding all (or some) solutions to problems, especially in situations where a brute-force approach would be too inefficient. It involves     
  exploring all possible solutions by incrementally building a solution and then undoing it when it's found to be invalid. Backtracking is often used in combinatorial problems, constraint satisfaction problems,    and optimization problems.
  Here are the key steps in a typical backtracking algorithm:

1. Choose: Make a choice to move forward, such as selecting a possible candidate for a solution.

2. Explore: Explore the chosen option and try to move closer to a valid solution. This often involves further choices or decisions.

3. Test: Check if the current choice and exploration lead to a valid solution or if it's a dead end.

4. If valid: If the current choice and exploration lead to a valid solution, continue with the next steps to either complete the solution or search for more solutions.

5. If not valid: If the current choice and exploration do not lead to a valid solution, backtrack to the previous choice and explore different options. This involves undoing the changes made during the exploration.

6. Repeat: Continue these steps recursively until all possible solutions have been found or the search space has been exhausted.
  Backtracking is commonly used in various problem-solving scenarios, such as solving puzzles (e.g., Sudoku, N-Queens), finding paths in mazes, generating permutations or combinations, and more. It's particularly     useful when there are constraints and dependencies that make it impractical to consider all possibilities directly.

  The key advantage of backtracking is its efficiency in searching for solutions by intelligently pruning the search space, avoiding unnecessary exploration of unpromising paths. It allows you to find solutions in a systematic and organized manner.

# What is Recursion?

  Recursion is a programming and problem-solving technique in which a function calls itself as a subroutine to solve a smaller instance of the same problem. It's a common approach in computer science and  
  mathematics, particularly for problems that exhibit a recursive structure. Recursion is based on the principle of divide and conquer, where a complex problem is broken down into simpler, more manageable 
  subproblems.

In a recursive function, there are typically two main components:

Base Case: This is the simplest scenario for which the function returns a result directly without making a recursive call. Base cases are essential to ensure that the recursion eventually terminates. Without a base case, the function would continue calling itself indefinitely, resulting in a stack overflow.

Recursive Case: In the recursive case, the function calls itself with a modified or smaller input, aiming to reduce the problem's complexity. The function may combine the result from the recursive call with additional operations to solve the original problem
Recursion is a powerful and elegant way to solve problems that naturally exhibit self-similar or recursive structures. Common examples of problems that can be solved using recursion include computing factorials, generating Fibonacci numbers, traversing tree-like data structures (e.g., binary trees), and solving puzzles (e.g., Tower of Hanoi, recursive descent parsing). Recursive solutions are often more intuitive and easier to understand for problems that can be expressed recursively.

However, it's important to use recursion judiciously, as it can lead to performance issues and excessive memory consumption for deep recursive calls. In some cases, problems can be solved more efficiently using iterative approaches or dynamic programming techniques.

