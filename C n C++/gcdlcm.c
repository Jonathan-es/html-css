#include <stdio.h>
#include <stdlib.h>

//35 and 25

int main()
{
    int num1, num2, rec, i;
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    if(num1>num2){
        for(i=1;i<=num2;i++){
            if(num1%i==0&&num2%i==0){
                rec=i;
            }
        }
    }
    else{
        for(i=1;i<=num1;i++){
            if(num1%i==0&&num2%i==0){
                rec=1;
            }
        }
    }
    printf("GCD of %d and %d is %d\n", num1, num2, rec);
    printf("LCM of %d and %d is %d\n", num1, num2, (num1*num2)/rec);

    return 0;
}