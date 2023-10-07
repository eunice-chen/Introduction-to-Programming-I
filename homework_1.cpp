#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Please enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit=(celsius*9/5) + 32;

    cout << "\nTemperature in Fahrenheit: " << fahrenheit;
    cout << " \370F";

    return 0;
}
