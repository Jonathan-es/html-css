#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int funcMenu(char name[])
{
    int i = 0;

    while(1){
    printf("welcome to Jo's Text Based RPG!\n");
    printf("Are you ready to take onto this thrilling journey?\n");
    printf("1. Play\n");
    printf("2. Exit\n");
    printf("Pick your choice: ");

    if(scanf("%d", &i) == 0)
    {
        printf("\nInvalid input! Please enter a number from the menu.\n");
        scanf("%*[^\n]");
        getchar();
        continue;
    }
    getchar();

    if(i == 1){
        printf("What is your name, adventurer?\n");
        fgets(name, 100, stdin);
        name[strlen(name) - 1] = '\0';
        return 0;
    }
    else if(i == 2)
    {
        return 1;
    }
    else {
        printf("\nInvalid input! Please enter a number from the menu.\n");
        }
    }
}

void funcClass(char class[])
{
    int i;
    do{
    printf("Select your class: \n1. Fighter\n2. Ranger\n3. Mage\n4. Tanker\n5. Assassin\n");
    scanf("%d", &i);
    getchar();
    switch(i){
        case 1: 
            strcpy(class, "Fighter"); 
            break;
        case 2: 
            strcpy(class, "Ranger");   
            break;
        case 3: 
            strcpy(class, "Mage"); 
            break;
        case 4: 
            strcpy(class, "Tanker"); 
            break;
        case 5: 
            strcpy(class, "Assassin"); 
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 5.\n");
            break;
        }
    }   while (i<1 || i>5);
}

void funcGender(char gender[], char **ps, char **po, char **pp)
{
    int i = 0;

    do{
    printf("Choose a gender for your character: \n");
    printf("1. Male\n");
    printf("2. Female\n");
    scanf("%d", &i);
    getchar();

    if(i == 1)
    {
        strcpy(gender, "male");
    }
    else if(i == 2)
    {
        strcpy(gender, "female");
    }
    else
    {
        printf("Invalid input! Only 2 valid genders.\n");
    }
    }   while(i < 1 || i > 2);

    if(strcmp(gender, "male") == 0)
    {
        *ps = "he";
        *po = "him";
        *pp = "his";
    }
    else if(strcmp(gender, "female") == 0)
    {
        *ps = "she";
        *po = "her";
        *pp = "hers";
    }
}

void funcSide(char side[])
{
    int i = 0;
    do{
        printf("Choose which side are you on, adventurer?\n");
    printf("1. Republic\n2. Empire\n");
    scanf("%d", &i);
    getchar();
    
    switch(i){
        case 1:
            strcpy(side, "Republic");
            break;
        case 2:
            strcpy(side, "Empire");
            break;
        default:
            printf("\nInvalid input! Please enter either 1 or 2 for the Republic/Empire side.\n");
            break;
        }
    } while(i!=1 && i!=2);
}

void funcLoading(int totalTime, int sleepDuration)
{
    int progress = 0;

    printf("Loading...\n");
    while(progress<=100){
        printf("%d%%\n", progress);
        fflush(stdout);
        sleep(sleepDuration);

        progress += 10;
    }
    printf("Loading complete!\n");
}

void openingText(char name[], char class[], char gender[], char side[], char *ps, char *po, char *pp)
{
    printf("In the mid noon of June, an ambitious warrior who wants to be a %s in The %s is grinding alone in the forest, people know %s as %s.\n", class, side, po, name);
    printf("as he trains, the sun comes out and he just realized it. On the way home, he encounters a riot nearby")
}

int main()
{
    char name[100];
    char class[20];
    char side[20];
    char gender[10];
    char* ps;
    char* po;
    char* pp;
    
    if(funcMenu(name) == 1)
    {
        printf("See you later, adventurer!");
        return 0;
    }

    funcGender(gender, &ps, &po, &pp);
    funcClass(class);
    funcSide(side);

    printf("Hello %s, you are a %s and your class is %s!\n", name, gender, class);
    printf("you will be on the %s side.\n", side);
    printf("Preparing your journey..\t");

    const int totalTime =  10;
    const int sleepDuration = 1;
    funcLoading(totalTime, sleepDuration);

    openingText(name, class, gender, side, ps, po, pp);
    
    return 0;
}