#include <stdio.h>

int main()
{
    int arr[3] = {12, 58, 36};

    int temp = arr[1];
    arr[1] = arr[2];
    arr[2] = temp;

    for(int i = 0; i<3; i++){
    printf("%d\t", arr[i]);
    }

    printf("\n");
    
    for(int i = 2; i>=0; i--){
        printf("%d\t", arr[i]);
    }

    return 0;
}