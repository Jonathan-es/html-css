#include <stdio.h>

int main()
{
    char username[20];
    char password[20];
    int num;

    printf("Login Page\n");
    
    printf("enter your username: ");
    scanf("%s", &username);
    printf("\n");

    printf("enter your password: ");
    scanf("%s", &password);

    printf("forgot password?\n");
    printf("1. yes, i want to reset password.\n");
    printf("2. no, the password is correct.\n");
    scanf("%d", &num);
    if(num == 1){
        printf("enter your new password: ");
        scanf("%s", &password);
        printf("this is your username: %s\nthis is your password: %s\n", username, password);
    } else{
        printf("this is your username: %s\nthis is your password: %s\n", username, password);
    }
    return 0;
}