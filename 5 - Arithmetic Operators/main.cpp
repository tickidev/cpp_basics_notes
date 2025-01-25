#include <iostream>


//parenthesis
//multiplication & division
//addition & subtraction

typedef int math_t; // i declared my math_t the same keyword with int.
int main(){
    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    math_t students = 20;

    // students = students + 1;
    students += 1; // smaller version

    // we can do the same for all other operation.

    // so little example
    // lets think like all students  expect 4 of them 
    // theyre not is 100 but other 4 is 70, 60, 50, 30
    // so lets find average notes

    math_t howManyStudentFull = (students - 4);
    howManyStudentFull *= 100;

    math_t notFullNots = (70 + 60 + 50 + 30);

    howManyStudentFull += notFullNots;

    std::cout << "All notes sum: " << howManyStudentFull << std::endl;
    std::cout << "Students number: " << students << std::endl;

    math_t result = howManyStudentFull / students;

    std::cout << "Result: " << result << std::endl;

    // very bad but simple example
    // we have 21 students
    // 17 of them pass with 100
    // 4 of them with 70, 60, 50, 30
    // so we do 
    // 17 * 100
    // 70 + 60 + 50 + 30
    // then we add this numbers
    // and / students

    return 0;
}