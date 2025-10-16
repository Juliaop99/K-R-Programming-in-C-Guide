#include <stdio.h>
//Point 1.2
//Making a table that show the Fahrenheit to Celsius conversion from 0,20,...,300

int main() {
    float upper = 300,lower = 0,step = 20;
    float fahrenheit = lower,celsius;

    printf("Fahrenheit\tCelsius\n");
    while (fahrenheit <= upper) {
        celsius = (5.0/9.0) * (fahrenheit-32.0);
        printf("%3.0f\t\t   %6.1f\n",fahrenheit,celsius);
        fahrenheit = fahrenheit + step;
    }
}