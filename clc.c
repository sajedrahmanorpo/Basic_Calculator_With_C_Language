#include <stdio.h>
int main(){

    int operator;
    double num1, num2, answer;

    do
    {
    printf("\n\n1.Addition (+):\n ");
    printf("2.Subtraction (-):\n ");
    printf("3.Multiplication (*):\n ");
    printf("4.Division (/):\n ");
    printf("5.Exit (X):\n ");
    printf("Enter your choice (1-5): ");
    scanf("%d", &operator);

    if(operator >= 1 & operator <= 4){
        printf("Enter the numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (operator)
    {
    case 1 :
        answer = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, answer);
        break;

    case 2 :
        answer = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf", num1, num2, answer);
        break;

    case 3 :
        answer = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf", num1, num2, answer);
        break;
    
    case 4 :
        if (num2 != 0)
        {
            answer = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf", num1, num2, answer);
        }else{
            printf("The answer will not found");
        }
        
        break;
    }
    }
    else if (operator == 5)
    {
        printf("\nExiting your calculation\n\n");
    }
    else{
        printf("\nInvalide choice\n\n");
    }

    } while (operator != 5);
    
    return 0;
}
