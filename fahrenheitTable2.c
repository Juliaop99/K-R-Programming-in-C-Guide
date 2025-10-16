#include <stdio.h>
//Points 1.3 and 1.4
//Making a table that show the Fahrenheit to Celsius conversion from 0,20,...,300
//This time using the for statement and see how we eliminate most of the variables
//we had on the previous program

int main() {
    printf("Fahrenheit\tCelsius\n");

    //Even tho we have less constants declared this does not mean it's better
    //in fact this kind of numbers, like 300 and 20, are called "magic numbers"
    //because they bring no information to someone that might read the program later
    //For this we can use a define line instead of a full declaration like the
    //following ones usually in capital letters:

    #define LOWER 0 //Lower limit of table
    #define UPPER 300 //Upper limit of table
    #define STEP 20 //Step size between rows

    //It is important to say that this definitions are not variable
    //This way any occurrence of name will be replaced by the corresponding text
    //for (int fahrenheit = 0; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP) {

    for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20) {
        float celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%3d\t\t   %6.1f\n",fahrenheit,celsius);
    }
}