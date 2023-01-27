#include <stdio.h>
#include <math.h>

void main(){
    //Program takes RPN expression, does calculation, and ouputs answer
    double valOne;
    double valTwo;
    char enteredSign;
    double finalAnswer;
    //Code to accept RPN expression
    printf("Enter an RPN expression:\n");
    //ex. 5 6 +
    scanf("%lf %lf %c", &valOne, &valTwo, &enteredSign);
    //Code to do calculations on given expression
    switch(enteredSign){
        case '+':
            finalAnswer = valOne + valTwo;
            printf("%.3lf %c %.3lf = %.3lf\n", valOne, enteredSign, valTwo, finalAnswer);
            break;

        case '-':
            finalAnswer = valOne - valTwo;
            printf("%.3lf %c %.3lf = %.3lf\n", valOne, enteredSign, valTwo, finalAnswer);
            break;

        case '*':
            finalAnswer = valOne * valTwo;
            printf("%.3lf %c %.3lf = %.3lf\n", valOne, enteredSign, valTwo, finalAnswer);
            break;

        case '/':
            if(valTwo == 0){
                printf("Divide by zero error\n");

            }else{
                finalAnswer = valOne / valTwo;
                printf("%.3lf %c %.3lf = %.3lf\n", valOne, enteredSign, valTwo, finalAnswer);
            }
            break;

        case '^':
            if(valOne == 0 && valTwo == 0){
                 printf("0 ^ 0 is indeterminate\n");
            }else{
                finalAnswer = pow(valOne, valTwo);
                printf("%.4lf %c %.4lf = %.4lf\n", valOne, enteredSign, valTwo, finalAnswer);
            }
            break;

        default:
            printf("'%c' is an invalid operand\n", enteredSign);
            break;
    }
    
}