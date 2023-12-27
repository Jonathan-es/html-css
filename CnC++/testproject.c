#include <stdio.h>

int findMax(int num1, int num2)
{
    if(num1 > num2){
        return num1;
    }   else{
        return num2;
    }
}

int main()
{
    int num1, num2, max;
    
    printf("first number: ");
    scanf("%d", &num1);

    printf("second number: ");
    scanf("%d", &num2);

    max = findMax(num1, num2);
    printf("the max number between those two numbers is: %d", max);

    return 0;
}