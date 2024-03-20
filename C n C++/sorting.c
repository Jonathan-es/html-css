#include <stdio.h>
#include <stdlib.h>

//12 58 36

int main()
{
    int n, a, i, j;
    printf("input a number: ");
    scanf("%d", &n);
    int temp[100] = {0};

    for(int i=0; i<n; i++){
        scanf("%d", &temp[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(temp[j]>temp[i]){
                a = temp[j];
                temp[j] = temp[i];
                temp[i] = a;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", temp[i]);
    }

    printf("\n");

    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(temp[i]<temp[j]){
                a=temp[j];
                temp[j]=temp[i];
                temp[i]=a;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ", temp[i]);
    }

    return 0;
}