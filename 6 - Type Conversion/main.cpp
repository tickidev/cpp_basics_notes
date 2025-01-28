#include <iostream>

// type conversion = conversion a value of one data type to another
//                 Implicit = automatic
//                 Explicit = Precede value with new data type (int)
int main()
{

    double x = (int)3.14;
    std::cout << x << std::endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%" << std::endl;

    return 0;
}