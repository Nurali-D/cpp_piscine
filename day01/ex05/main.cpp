#include "Karen.hpp"

int main()
{
    Karen karen;

    karen.complain("WARNING");
    karen.complain("INFO");
    karen.complain("DEBUG");
    karen.complain("ERROR");
    karen.complain("abc");
    return 0;
}