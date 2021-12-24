#include "Array.hpp"
#include <ctime>
#include <cstdlib>
#define MAX_VAL 750

int main(int, char**)
{
    Array<float> fl;
    
    std::cout << fl.size() << std::endl;

    Array<int> numbers(MAX_VAL);

    std::cout << numbers.size() << std::endl;
    int* mirror = new int[MAX_VAL];
    srand(time(0));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// int main()
// {
// 	Array<int> *a = new Array<int>(5);
	
// 	std::cout << "a: " << std::endl;
// 	for (unsigned int i = 0; i < a->size(); i++)
// 		(*a)[i] = 5 * i;
// 	Array<int> copy = *a;
// 	for (unsigned int i = 0; i < copy.size(); i++)
// 		std::cout << copy[i] << " ";
// 	std::cout << "\n";
// 	Array<int> *b = a;
// 	copy = *b;
// 	(*a)[0] = 22;
// 	std::cout << "b: " << std::endl;
// 	for (unsigned int i = 0; i < copy.size(); i++)
// 		std::cout << copy[i] << " ";
// 	std::cout << "\n";
// 	std::cout << "a: " << std::endl;
// 	for (unsigned int i = 0; i < (*a).size(); i++)
// 		std::cout << (*a)[i] << " ";
// 	std::cout << "\n";

// 	Array<double> *d = new Array<double>(4);
// 	for (unsigned int i = 0; i < d->size(); i++)
// 		(*d)[i] = 0.5 * i;
// 	Array<double> *e = new Array<double>(*d);
// 	std::cout << "d: " << std::endl;
// 	for (unsigned int i = 0; i < (*d).size(); i++)
// 		std::cout << (*d)[i] << " ";
// 	std::cout << "\n";
// 	(*d)[0] = 5.55;
// 	std::cout << "e: " << std::endl;
// 	for (unsigned int i = 0; i < (*e).size(); i++)
// 		std::cout << (*e)[i] << " ";
// 	std::cout << "\n";
// 	std::cout << "d: " << std::endl;
// 	for (unsigned int i = 0; i < (*d).size(); i++)
// 		std::cout << (*d)[i] << " ";
// 	std::cout << "\n";
// 	*e = *d;
// 	std::cout << "e: " << std::endl;
// 	for (unsigned int i = 0; i < (*e).size(); i++)
// 		std::cout << (*e)[i] << " ";
// 	std::cout << "\n";
// 	return (0);
// }