#include <iostream>
#include <map>
#include <functional>
#include "TemperatureFunctions.hpp"

inline double calculateConversion(char fromUnit, char toUnit, double convNumber)
{
    double result;
    std::map < std::pair<char, char>, std::function<double(double)>> myMap =
    {
        {{'C', 'F'}, convertCtoF},
        {{'C', 'K'}, convertCtoK},
        {{'F', 'C'}, convertFtoC},
        {{'F', 'K'}, convertFtoK},
        {{'K', 'C'}, convertKtoC},
        {{'K', 'F'}, convertKtoF},
    };

    std::cout << "Calculating..." << std::endl;
    
}


inline void displayTemperatureMenu()
{
    char fromUnit;
    char toUnit;
    double convNumber;
    std::cout << "Select unit to convert FROM " << std::endl;
    std::cin >> fromUnit;

    std::cout << "Select unit to convert TO " << std::endl;
    std::cin >> toUnit;

    std::cout << "Enter a number " << std::endl;
    std::cin >> convNumber;

    std::cout << calculateConversion(fromUnit, toUnit, convNumber) << std::endl;

    return;
}

