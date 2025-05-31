#include <stdio.h>
#include <signal.h>

#include "Calculator.h"


/*
    This is just a simple quick calculator.
*/

void waitForNewLine() {
    while (getchar() != "\n") {
        break;
    }
}

void handle_SIGINT(int sig) {
    printf("\nCTRL+C Pressed. Exiting...\n");
}


int main()
{
    signal(SIGINT, handle_SIGINT);

    // The input here is buggy if you input more than what is expected.

    while (1) {
        Calculator_t calc = CalculatorInit();

        double num_A;
        char in_Op;
        double num_B;

        printf("Enter Number A: ");
        scanf_s("%lf", &num_A);
        waitForNewLine();

        printf("Enter Operator + or -: ");
        scanf_s("%c", &in_Op);
        waitForNewLine();

        printf("Enter Number B: ");
        scanf_s("%lf", &num_B);
        waitForNewLine();


        printf("You entered %lf, %lf, %c.", num_A, num_B, in_Op);

        // Calculate
        double result = calc.calculate(num_A, num_B, in_Op);

        printf("\n");
        printf("Result is: %lf", result);
        printf("\n");
    }

    return 0;
}