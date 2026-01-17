#include <iostream>
#include <map>
#include <functional>
#include "TemperatureFunctions.hpp"

enum TemperatureUnit {C, F, K};

inline TemperatureUnit convertInput(char input)
{
    switch(std::toupper(input))
    { 
        case 'C':
            return TemperatureUnit::C;
        case 'F':
            return TemperatureUnit::F;
        case 'K':
            return TemperatureUnit::K;
        default:
            throw std::invalid_argument("Invalid temperature unit, select either C, F or K");
    }
}

inline double calculateConversion(TemperatureUnit fromUnit, TemperatureUnit toUnit, double convNumber)
{
    const static std::map<std::pair<TemperatureUnit, TemperatureUnit>, std::function<double(double) >> tempFuncs =
    {
        {{TemperatureUnit::C, TemperatureUnit::F}, convertCtoF},
        {{TemperatureUnit::C, TemperatureUnit::K}, convertCtoK},
        {{TemperatureUnit::F, TemperatureUnit::C}, convertFtoC},
        {{TemperatureUnit::F, TemperatureUnit::K}, convertFtoK},
        {{TemperatureUnit::K, TemperatureUnit::C}, convertKtoC},
        {{TemperatureUnit::K, TemperatureUnit::F}, convertKtoF},
    };

    std::cout << "Calculating..." << std::endl;
    return tempFuncs.find({fromUnit, toUnit})->second(convNumber); // Something to do with this find() function
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

    std::cout << calculateConversion(convertInput(fromUnit), convertInput(toUnit), convNumber) << std::endl; // I know that I am calling convertInput twice on toUnit...

    return;
}

