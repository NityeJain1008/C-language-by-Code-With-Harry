#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char systemChoice[10];
    char userChoice[10];
    int system_choice;
    int user_choice;

    srand(time(0));

    system_choice = (rand() % 3) + 1;

    if (system_choice == 1)
        strcpy(systemChoice, "Snake");
    else if (system_choice == 2)
        strcpy(systemChoice, "Water");
    else
        strcpy(systemChoice, "Gun");

    printf("Enter 1 for Snake, 2 for Water, 3 for Gun: ");
    scanf("%d", &user_choice);

    if (user_choice == 1)
        strcpy(userChoice, "Snake");
    else if (user_choice == 2)
        strcpy(userChoice, "Water");
    else
        strcpy(userChoice, "Gun");

    printf("I choose %s\n", systemChoice);
    printf("And you choose %s\n", userChoice);

    if (user_choice == system_choice)
        printf("Draw! No one wins.\n");

    else if ((user_choice == 1 && system_choice == 2) ||
             (user_choice == 2 && system_choice == 3) ||
             (user_choice == 3 && system_choice == 1))
        printf("Congrats! You win 🎉\n");

    else
        printf("You lose 😢\n");

    return 0;
}
