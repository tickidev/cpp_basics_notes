#include <iostream>

// Template function for logging
template <typename T>
void LOG(T x){ std::cout << x << std::endl;} // thats a template i just added for this code
                                             // ill add about this in next days

int main(){

    //integer (whole number)
    int x;      // decloration
    x = 19;     // assignment
    int age = 19;
    int year = 2024;

    //double (number including decimal)
    double price = 9.99;
    double gpa = 2.5;

    //char (single character)
    char grade = 'A';
    char initial = 'B';
    char currenct = '$';

    //boolean (true or false, 1 or 0)
    bool iam = true;
    bool isRunning = false;

    //string (objects that represents a sequence of text)
    std::string name = "Ticki";

    LOG(name);

    return 0;
}
