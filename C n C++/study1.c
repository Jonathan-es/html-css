#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char array[100], arr1[100], arr2[100];
    int i, j;
    printf("Input a string: ");
    fgets(array, sizeof(array), stdin);

    for (i = 0; i < strlen(array); i++) {
        if (isalpha(array[i])) {
            if (islower(array[i])) {
                arr1[i] = toupper(array[i]);
            } else {
                arr1[i] = tolower(array[i]);
            }
        } else {
            arr1[i] = array[i];
        }
    }
    arr1[i] = '\0';

    printf("Reversed case: %s\n", arr1);
    for (i = strlen(array) - 1, j = 0; i >= 0; i--, j++) {
        arr2[j] = array[i];
    }
    arr2[j] = '\0';

    printf("Reversed string: %s\n", arr2);

    return 0;
}
