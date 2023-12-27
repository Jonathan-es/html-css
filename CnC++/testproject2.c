#include <stdio.h>

int main()
{
    int number;

    printf("enter a number to be multiplied : ");
    scanf("%d", &number);

    printf("multiplication table for %d: ", number);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}