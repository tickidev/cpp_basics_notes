#include <iostream>
#include <string>

//  cout << (insertion operator)
//  cin  << (extraction operator)

int main()
{
    std::string nickname;
    int level;

    std::cout << "Welcome to the game" << std::endl;
    std::cout << "What is your nickname: ";
    std::cin >> nickname;

    std::cout << "What is your current level: ";
    std::cin >> level;

    std::cout << "\n\nWelcome " << nickname << " the game will start soon!" << std::endl;
    std::cout << "You're current level is: " << level << " level" << std::endl;

    // if we want somethikng like full name 
    std::string fullname;
    std::cout << "\n\nEnter your full name with space: ";
    std::getline(std::cin >> std::ws, fullname); // to use getline include string

    std::cout << "Welcome " << fullname << std::endl;

    return 0;
}