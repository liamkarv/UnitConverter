inline double convertCtoF(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

inline double convertCtoK(double celsius)
{
    return celsius + 273.15;
}

inline double convertFtoC(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

inline double convertFtoK(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

inline double convertKtoC(double kelvin)
{
    return kelvin - 273.15;
}

inline double convertKtoF(double kelvin)
{
    return (kelvin - 273.15) * 9 / 5 + 32;
}