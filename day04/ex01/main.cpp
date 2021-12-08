#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
    std::cout << "---------------------------------" << std::endl;
    {
        int n = 10;
        Animal *array[n];

        for (int i = 0; i < n; i++)
        {
            if (i < 5)
            {
                std::cout << "dog #" << (i + 1) << ":" << std::endl;
                array[i] = new Dog();
            }
            else
            {
                std::cout << "cat #" << (i + 1) << ":" << std::endl;
                array[i] = new Cat();
            }
        }
        for (int j = 0; j < n; j++)
        {
            std::cout << "animal #" << (j + 1) << ":" << std::endl;
            delete array[j];
        }
    }

    return (0);
}