/**
 * @file 49_calculator.c
 * @author Mohasin Patel
 * @brief
 * @version 0.1
 * @date 2022-06-15
 *
 * @problem statement :- C Program to Make a Simple Calculator Using switch...case perfroming operationon two numbers
 *
 */

#include <stdio.h>

void calculateNum(char, float, float);

int main()
{
    char cChoice = '\0';
    float fNum1 = 0, fNum2 = 0;

    while (1)
    {

        printf("If you want to quite please enter 'q'.\n\n");
        printf("Please enter which operartion you want to perform :-\n '+'\n '-'\n '*'\n '/'\n");

        scanf("%c", &cChoice);

        if (cChoice == 'q' || cChoice == 'Q')
        {
            printf("Thanks for using this application.\n");
            break;
        }
        else
        {
            printf("Enter first number :-\n");
            scanf("%f", &fNum1);
            printf("Enter second number :-\n");
            scanf("%f", &fNum2);

            calculateNum(cChoice, fNum1, fNum2);

            printf("\n\t*****\n");
        }
        while (getchar() != '\n');
    }

    return 0;
}

void calculateNum(char C, float N1, float N2)
{
    float Result = 0;
    switch (C)
    {
    case '+':
        Result = N1 + N2;
        printf("\n%0.1f + %0.1f = %0.1f\n", N1, N2, Result);
        break;

    case '-':
        Result = N1 - N2;
        printf("\n%0.1f - %0.1f = %0.1f\n", N1, N2, Result);
        break;
    case '*':
        Result = N1 * N2;
        printf("\n%0.1f * %0.1f = %0.1f\n", N1, N2, Result);
        break;
    case '/':
        Result = N1 / N2;
        printf("\n%0.1f / %0.1f = %0.1f\n", N1, N2, Result);
        break;

    default:
        printf("Please enter valid operation to perform.\n");
        break;
    }
}
