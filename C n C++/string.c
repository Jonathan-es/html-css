#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//AbCdE

int main()
{
    char array[100], arr[100], arr2[100];
    int i, j;
    printf("input a string: ");
    scanf("%s", &array);

    for(i=0; i<strlen(array); i++){
        if((int)array[i]>=97){
            arr[i]=(char)(int)array[i]-32;
        }
        else{
            arr[i]=(char)(int)array[i]+32;
        }
    }

    array[i]='\0';
    printf("%s\n", arr);

    for(i=(strlen(array)-1), j=0; i>=0; i--, j++){
        arr2[j]=array[i];
    }
    arr2[j]='\0';
    printf("%s\n", arr2);

    return 0;
}