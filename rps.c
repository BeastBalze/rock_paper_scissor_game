#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    int a, b = 0, c = 0, d;
    char name[34];
    printf("Enter your Name");
    gets(name);
    // getchar();
    printf("Enter the number of matches you want in the tornament: ");
    scanf("%d",&d);
    getchar();
    srand(time(NULL));
    char user[8], comp[8];
    for (int i = 0; i < d; i++)
    {
        printf("Entre your input:");
        gets(user);
        a = rand() % 3;
        switch (a)
        {
        case 0:
            strcpy(comp, "rock");
            break;
        case 1:
            strcpy(comp, "paper");
            break;
        case 2:
            strcpy(comp, "scissor");
        }
        printf("%s:%s || comp:%s\n",name, user, comp);
        if (strcmp(user, "rock") == 0)
        {
            if (strcmp(comp, "paper") == 0)
            {
                c = c + 1;
            }
            if (strcmp(comp, "scissor") == 0)
            {
                b = b + 1;
            }
            else
            {
                continue;
            }
        }
        if (strcmp(user, "paper") == 0)
        {
            if (strcmp(comp, "scissor") == 0)
            {
                c = c + 1;
            }
            if (strcmp(comp, "rock") == 0)
            {
                b = b + 1;
            }
            else
            {
                continue;
            }  
        }
        if (strcmp(user, "scissor") == 0)
        {
            if (strcmp(comp, "rock") == 0)
            {
                c = c + 1;
            }
            if (strcmp(comp, "paper") == 0)
            {
                b = b + 1;
            }
            else
            {
                continue;
            }  
        }
    }
    printf("The scores are:\n%s:%d and Comp:%d\n",name, b, c);
    if (b > c)
    {
        printf("%s Wins\nCONGURALATIONS!!",name);
    }
    else if (b == c)
    {
        printf("It a TIE");
    }
    else
    {
        printf("%s Lost", name);
    }
    return 0;
}