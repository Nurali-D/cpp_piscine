#include <iostream>
#include <string>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *strPtr;
    std::string &strRef = str;

    strPtr = &str;
    std::cout << "string adress:    " << &str << std::endl;
    std::cout << "string pointer:   " << strPtr << std::endl;
    std::cout << "string reference: " << &strRef << std::endl;
    std::cout << "str =     " << str << std::endl;
    std::cout << "*strPtr = " << *strPtr << std::endl;
    std::cout << "strRef =  " << strRef << std::endl;
    return 0;
}