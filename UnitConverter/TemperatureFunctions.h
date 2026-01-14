double convertCtoF(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

double convertCtoK(double celsius)
{
    return celsius + 273.15;
}

double convertFtoC(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

double convertFtoK(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

double convertKtoC(double kelvin)
{
    return kelvin - 273.15;
}

double convertKtoF(double kelvin)
{
    return (kelvin - 273.15) * 9 / 5 + 32;
}