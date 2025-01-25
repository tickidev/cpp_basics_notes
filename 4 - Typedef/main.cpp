#include <iostream>
#include <vector>


// i really dont know what is this variable but its long so we can use typedef
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// easier example
typedef std::string NAME_T;

// Same
using text_t = std::string;
using age_t = int;

int main(){

    // typedef = reserved keyword used to create an additioanl name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readibilty and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)


    // otherwise its something like this 
    // std::vector<std::pair<std::string, int>> pairlist;
    // i can write this with typedef
    pairlist_t pairlist;

    NAME_T firstName = "Ticki";
    age_t myAge = 19;

    std::cout << myAge;

    return 0;
}