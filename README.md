# LeetCode_Challenge_27_Remove_Element

READ ME:
This is a TEST project to learn GIT and GITHUB.  This is my first commit using a LeetCode problem as sample code to push and commit.  

-> LeetCode 27 Remove Element is a challenge written in C++.  LeetCode uses a class 'Solution' to contain the solution to the challenge.
-> 'main.cpp' is the driver / test unit testing the solution in 'solution.h'.

'main.cpp':
 - Three functions to test the solution: 'main()' as the driver, 'printTest()' to print the test results, and 'printVecto()' to print
   the vector containing integers.

 - The vector 'testUnit' utilizes 'std::pair<int, std::vector<int>>' to contain both the 'val' integer that is passed to solution and
   the vector of integers that will also be passed to solutions.  This contains all the test cases and uses a simple 'for' loop to iterate
   through each test case and passes to solution for testing.

 - Function 'printTest()' takes in integer 'testVal' and vector 'testVect' and displays the test results from solution by passing these as
   parameters to function 'removeElement()'.  Function 'removeElement()' will return an integer to show how many elements in the vector have
   been removed that matched the 'testVal' value.
