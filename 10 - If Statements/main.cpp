#include <iostream>

int main()
{
    // if statements = do something if a condition is true.
    //                 if not, then don't do it.

    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age > 18){
        std::cout << "You have pass";
    } else if (age <= 0){
        std::cout << "UgU";
    } 
    else {
        std::cout << "You have not pass";
    }

    return 0;
}