#include <iostream>
#include "TemperatureHandler.cpp"

int main()
{
    int choice;
    do 
    {
        std::cout << "0. Quit Program\n" << std::endl;
        std::cout << "1. Temperature\n" << std::endl;

        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Closing program...\n" << std::endl;
            return 0;

        case 1:
            displayTemperatureMenu();
            break;
        }

    }
	while (choice != 0);
}
