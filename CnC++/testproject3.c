#include <stdio.h>

int main()
{
    double a, b, result;
    char op;

    printf("first number: ");
    scanf("%lf", &a);

    printf("second number: ");
    scanf("%lf", &b);

    printf("operation: ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case'*':
            result = a*b;
            break;
        case'/':
            if(b != 0){
                result = a/b;
            }   else{
                printf("cant divide witih 0");
                return 1;
            }
            break;
        default:
            printf("numbers not valid");
            return 1;
    }
    printf("result: %0.2lf", result);
    
    return 0;
}