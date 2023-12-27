#include <stdio.h>

void calculateGrade(int marks)
{
    char grade;

    if(marks>=0 && marks<=100){
        if(marks>=90 && marks<=100){
            grade = 'A';
        }
        else if(marks>=80 && marks<90){
            grade = 'B';
        }
        else if(marks>=70 && marks<80){
            grade = 'C';
        }
        else if(marks>=60 && marks<70){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        printf("your grade is %c", grade);
    }
    else{
        printf("invalid marks, only 0 - 100");
    }
}


    int main()
    {
        int userMarks;

        printf("enter your marks : ");
        scanf("%d", &userMarks);

        calculateGrade(userMarks);

    return 0;
    }