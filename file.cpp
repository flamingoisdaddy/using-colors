#include <iostream> 

    const std::string reset = "\033[0m";
    const std::string red = "\033[31m";
    const std::string green = "\033[32m";
    const std::string yellow = "\033[33m";
    const std::string blue = "\033[34m";
    const std::string magenta = "\033[35m";
    const std::string cyan = "\033[36m";
    const std::string white = "\033[37m";

int main() {
    std::cout << red << "this is red" << reset << std::endl;
    std::cout << green << "this is green" << reset << std::endl;
    std::cout << yellow << "this is yellow" << reset << std::endl;
    std::cout << blue << "this is blue" << reset << std::endl;
    std::cout << magenta << "this is magenta" << reset << std::endl;
    std::cout << cyan << "this is cyan" << reset << std::endl;
    std::cout << white << "this is white" << reset << std::endl; 

    return 0;
} // you can see the strings making "Reset" "red" "green" etc define themselves as ansi escape codes for colors, you can make the colors go to use when you use cout, before what you're trying to type put the color, eg. std::cout << red << "sss" << std::endl;
