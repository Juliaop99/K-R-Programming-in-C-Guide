#include <stdio.h>
//Point 1.6

/* count digits, white space, others */
void program1() {
    //We initialize the counters and declare the array with 10 spaces
    int c, i, nwhite = 0, nother = 0;
    int ndigit[10];
    char endOfSequence = '.';

    //We initialize the array
    for (i=0; i<10; i++) {
        ndigit[i] = 0;
    }

    //We process the sequence
    printf("Introduce a sequence of characters ending with '.': ");
    while ((c=getchar()) != endOfSequence) {
        if ((c >= '0') && (c <= '9')) {
            //Using c-'0' gives us the numeric value of the digiti introduced
            ++ndigit[c-'0'];
        } else if ((c == ' ') || (c == '\n')) {
            nwhite++;
        } else {
            nother++;
        }
    }

    //We print all the final counters and information
    printf("Digits: ");
    for (i=0; i<10; i++) {
        printf(" %d",ndigit[i]);
    } printf("\n");
    printf("Number of white spaces: %d \n", nwhite);
    printf("Number of other characters: %d \n", nother);
}

//Write a program to print a histogram of the frequencies of different characters
//in its input.
void program2() {
    int c;
    int nFreq[26];
    char endOfSequence = '.';

    //We initialize the array
    for (int i = 0; i<26; i++) {
        nFreq[i] = 0;
    }

    while ((c = getchar()) != endOfSequence) {
        //In case we encounter a capital character, we transform it into lowercase to apply
        //the same formula for every character
        if ((c >= 'A') && (c <= 'Z')) {
            c = c + 32;
        }
        ++nFreq[c-97];
    }

    //We print all the final counters and information
    printf("Frequency: ");
    for (int i=0; i<26; i++) {
        printf(" %d",nFreq[i]);
    } printf("\n");
}

int main() {
    program1();
    printf("End of first program. \n");

    program2();
    printf("End of second program \n");
    return 0;
}