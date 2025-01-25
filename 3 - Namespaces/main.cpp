#include <iostream>

namespace first{
    int x = 10;
}

namespace second{
    int x = 20;
}

int main(){

    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allaws for identically named entities
    //             as long as the namespaces are different.

    // Example we cant  declare a different variable with same name 
    // this will give us an error.
    // int x = 0;
    // int x = 10;

    using namespace first;

    std::cout << x << std::endl;
    // std::cout << first::x << std::endl;
    // std::cout << second::x << std::endl;


    return 0;
}

/*
when i write using namespace first in my function so if 
i didnt declare any x so that x will be my first namespace
x value. 

Its mean i ise x inside that namespace
so thats why people use 
- using namespace std;
but its adding whole bunch of unneceasry namings to my code 
so we can use only

using std::cout;
using std::cin; 

if we dont want to write std::cout and std::cin, 

we can do the same for other namespaces like std::string...

*/