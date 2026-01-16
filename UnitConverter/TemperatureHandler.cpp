#include <iostream>;
#include <unordered_map>;
#include "TemperatureFunctions.h";

using namespace std;

inline double calculateConversion(char fromUnit, char toUnit, double convNumber)
{

    unordered_map<std::pair<char,char>, std::function>;
    double result;
    std::cout << "Calculating..." << std::endl;
    //switch (fromUnit )
    //{
    //    case ('C'):
    //        switch()
    //        case ('F'):
    //            result = convertCtoF(convNumber);
    //            break;

    //    case ('C' && 'K'):
    //        result = convertCtoK(convNumber);
    //        break;

    //    default:
    //        0;
    //}
    //return result;
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

