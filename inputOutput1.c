#include <stdio.h>
//Point 1.5
//c = getchar(); The variable c will contain the next character of input
//putchar(c); Prints the content of the integer variable c

void program1() {
    //We need to use int because it is a type of data big enough to support EOF
    int c;
    char endOfSequence = '.';

    //EOF has the value -1 on the end of files
    printf("EOF value: %d \n",EOF);

    //Message for the user
    printf("Introduce a sequence of characters ended with a dot: \n");

    //The input of c is at the same time part of the condition instead of having
    //it separately in the while
    while ((c = getchar()) != endOfSequence) {
        putchar(c);
    }
}

//This next program it is meant to count characters
void program2() {
    char endOfSequence = '.';
    long nc;

    //Message for the user
    printf("Introduce a sequence of characters ended with a dot: \n");

    nc = 0;
    while (getchar() != endOfSequence) {
        //Using the prefix we increase by one the number of nc
        ++nc;
    }
    printf("Introduced characters: %ld \n",nc);

    //Another way would be using a for statement
    //for(nc = 0; getchar() != endOfSequence; ++nc) {; //null statement}
}

//This 3rd program counts input lines, this means it counts newline characters
void program3() {
    int c,nl = 0;
    char endOfSequence = '.';

    //Message for the user
    printf("Introduce a sequence of characters ended with a dot: \n");

    while ((c=getchar()) != endOfSequence) {
        if (c == '\n') {
            ++nl;
        }
    }

    printf("The number of newlines is %d \n",nl);
}

//Write a program to copy its input to its output, replacing each string of one
//or more blanks by a single blank
void program4() {
    int c;
    char endOfSequence = '.';

    //Message for the user
    printf("Introduce a sequence of characters ended with a dot: \n");

    //For this exercise we print the input right after getting it and then if the next
    //char it's a backspace then while we keep getting backspaces we don't print
    //anything
    while ((c = getchar()) != endOfSequence) {
        printf("%c",c);
        if (c == ' ') {
            c = getchar();
            while (c == ' ') {
                c = getchar();
            }
            printf("%c",c);
        }
    }
}

//5th Program
//Write a program that copy its input to its output, replacing each tab for \t
void program5() {
    int c;
    char endOfSequence = '.';

    //Message for the user
    printf("Introduce a sequence of characters ended with a dot: \n");

    //For this exercise when we get a tab or a backspace we will print \t or \b using
    //double inverted bar like this printf("\\t")
    while ((c = getchar()) != endOfSequence) {
        if (c == '\t') { printf("\\t"); }
        else {printf("%c",c);}

    }
}

//6th Program
//Write a program that counts words
void program6() {
    //We define OUT and IN to imitate a boolean value
    //Mainly because they make the code more readable
    #define OUT 0
    #define IN 1

    //We initialize all the counters to 0
    int c,nl = 0,nw = 0,nc = 0;
    char endOfSequence = '.';
    int state = OUT;

    //Message for the user
    printf("Introduce a sequence of characters ended with a dot: \n");

    while ((c = getchar()) != endOfSequence) {
        //For every character we increase the character counter by one
        nc++;

        //If we find a newline we count it
        if (c == '\n') {
            nl++;
        }

        //And now separately from the other if while we don't find a letter we keep reading
        //This condition is read left to right, now it is not important but in the future for more complex
        //problems and programs it is a useful tool, this also applies for &&
        if ((c == ' ')||(c == '\n')) {
            state = OUT;
        }
        //But when we find a letter and we were outside a word we count a new word
        else if (state == OUT) {
            state = IN;
            nw++;
        }
    }

    //Finally we print the results
    printf("Char count: %d \n",nc);
    printf("Line count: %d \n",nl+1); //We have to add one because it doesn't count the last line.
    printf("Word count: %d \n",nw);
}

int main() {
    //1st Program
    program1();
    printf("End of first program \n\n");

    //2nd Program
    program2();
    printf("End of second program \n\n");

    //3rd Program
    program3();
    printf("End of third program \n\n");

    //4th Program
    program4();
    printf("End of forth program \n\n");

    //5th Program
    program5();
    printf("End of fifth program \n\n");

    //6th Program
    program6();
    printf("End of last program \n\n");
    return 0;
}

