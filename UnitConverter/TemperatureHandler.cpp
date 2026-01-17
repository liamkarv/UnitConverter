#include <iostream>
#include <map>
#include <functional>
#include "TemperatureFunctions.hpp"

enum TempUnit {C, F, K};

inline TempUnit convertInput(char input)
{
    switch(std::toupper(input))
    { 
        case 'C':
            return TempUnit::C;
        case 'F':
            return TempUnit::F;
        case 'K':
            return TempUnit::K;
        default:
            throw std::invalid_argument("Invalid temperature unit, select either C, F or K");
    }
}

inline double calculateConversion(TempUnit fromUnit, TempUnit toUnit, double convNumber)
{
    const static std::map<std::pair<TempUnit, TempUnit>, std::function<double(double) >> tempFuncs =
    {
        {{TempUnit::C, TempUnit::F}, convertCtoF},
        {{TempUnit::C, TempUnit::K}, convertCtoK},
        {{TempUnit::F, TempUnit::C}, convertFtoC},
        {{TempUnit::F, TempUnit::K}, convertFtoK},
        {{TempUnit::K, TempUnit::C}, convertKtoC},
        {{TempUnit::K, TempUnit::F}, convertKtoF},
    };

    std::cout << "Calculating..." << std::endl;
    return tempFuncs.find({fromUnit, toUnit})->second(convNumber); // Something to do with this find() function is causing errors
}

inline void displayTemperatureMenu()
{
    char fromUnit;
    char toUnit;
    double convNumber;
    std::cout << "Valid temperature units are C, F, K" << std::endl;
    std::cout << "Select unit to convert FROM: ";
    std::cin >> fromUnit;

    std::cout << "Select unit to convert TO: ";
    std::cin >> toUnit;

    std::cout << "Enter a number: ";
    std::cin >> convNumber;

    std::cout << calculateConversion(convertInput(fromUnit), convertInput(toUnit), convNumber) << (char)std::toupper(toUnit) << std::endl << "\n";

    return;
}