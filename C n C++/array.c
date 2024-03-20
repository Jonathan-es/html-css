#include <stdio.h>
#include <stdlib.h>

//12 54 83

int main()
{
    int n, a, i, j, max, sum;
    float avg;
    printf("input a number: ");
    scanf("%d", &n);
    int temp[100]={0};

    for(int i=0;i<n;i++){
        scanf("%d", &temp[i]);
    }
    for(i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(temp[j]>temp[i]){
                a=temp[j];
                temp[j]=temp[i];
                temp[i]=a;
            }
        }
    }
    for(i=0;i<n;i++){
        sum=sum+temp[i];
    }

    max=temp[0];
    avg=(float)sum/n;
    printf("max: %d\n", max);
    printf("sum: %d\n", sum);
    printf("avg: %.2f\n", avg);
    return 0;
}