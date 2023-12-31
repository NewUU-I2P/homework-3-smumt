#include <iostream>
using namespace std;
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"



int main() {
    cout << "Problem 1\n";
    problemSolution1(55);
    cout << "Problem 2\n";
    problemSolution2(34.9, 34.5, 34.2);
    cout << "Problem 3\n";
    problemSolution3(15, 'M');
    cout << "Problem 4\n";
    problemSolution4("FF:FF:FF:FF:FF:FF");
    cout << "Problem 5\n";
    problemSolution5(24, 15, '-');
    return 0;
}
