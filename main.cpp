/*
 * MAIN.CPP
 *  - DRIVER / TEST UNIT FOR SOLUTION.H
 *
    Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
    The order of the elements may be changed. Then return the number of elements in nums which are
    not equal to val.

    Consider the number of elements in nums which are not equal to val be k, to get accepted, you
    need to do the following things:

        Change the array nums such that the first k elements of nums contain the elements which are
        not equal to val. The remaining elements of nums are not important as well as the size of nums.
        Return k.

    TEST PARAMATERS :

        - nums = [3,2,2,3], val = 3

        - nums = [0,1,2,2,3,0,4,2], val = 2
 */



#include <iostream>
#include <vector>

#include "solution.h"

// PROTOTYPES
void printTest(const int testVal, std::vector<int> &testVect);
void printVector(std::vector<int> &printVector);


// TEST UNIT / DRIVER
int main(int argc, char **argv)
{
    std::vector<std::pair<int, std::vector<int>>> testUnit {{3, {3, 2, 2, 3}},
                                                           {2, {0, 1, 2, 2, 3, 0, 4, 2}}};


    for (auto &tuple : testUnit)
        printTest(tuple.first, tuple.second);


    return 0;
}

// HELPER FUNCTIONS
void printTest(const int testVal, std::vector<int> &testVect) {

    Solution *mySol = new Solution();

    std::cout << "-------------------------------------------------------\n"
              << " TEST UNIT: \n"
              << " Test Array : ";
    printVector(testVect);
    std::cout << " Test Value : " << testVal << "\n\n"
              << " TEST RESULTS: \n"
              << " Function Run: " << mySol->removeElement(testVect, testVal) << "\n"
              << " Final Array : ";
    printVector(testVect);
    std::cout << "-------------------------------------------------------" << std::endl;

}

void printVector(std::vector<int> &printVector) {

    for (std::vector<int>::iterator i = printVector.begin(); i != printVector.end();) {
        std::cout << " {" << *i << "}";
        ++i;
    }
    std::cout << "\n";
}
