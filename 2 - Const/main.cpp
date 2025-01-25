#include <iostream>

int main(){
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read - only)

    // WE DONT WANT TO CHANGE PI VALUE
    const double PI = 3.14159;
    // THATS WHY WE USED CONST ON PI
    double radius = 10;
    double circumference = 2 * PI * radius;

    // ITS NOT MODIFYING BECAUSE WE DECLARED AS A CONST.
    // pi = 13;

    std::cout << circumference << " cm";

    // examples
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;


    return 0;
}