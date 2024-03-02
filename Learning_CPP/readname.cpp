#include <iostream>

int main()
{
    std::string name;
    std::cout
        << "Please Enter Your Name";
    std::cin >> name; // to take input of a single word
    // getline(std::cin >> name); // will take all the input till the user hits enter
    std::cout << "Hello Mr"
              << " " << name;
    return 0;
}