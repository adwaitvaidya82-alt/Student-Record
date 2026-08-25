#include "student.h"

void stud_mod(void)
{
    char choice;
    char field;

    int roll;
    char name[50];
    float percentage;

    STUDENT *temp = head;
    STUDENT *found = NULL;

    printf("\nSearch Record Using:\n");

    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");

    printf("Enter Your Choice: ");
    scanf(" %c",&choice);

    if(choice == 'R' || choice == 'r')
    {
        printf("Enter Roll Number: ");
        scanf("%d",&roll);

        while(temp != NULL)
        {
            if(temp->roll == roll)
            {
                found = temp;
                break;
            }

            temp = temp->next;
        }
    }

    else if(choice == 'N' || choice == 'n')
    {
        printf("Enter Name: ");
        scanf(" %[^\n]",name);

        printf("\nMatching Records:\n");

        while(temp != NULL)
        {
            if(strcmp(temp->name,name) == 0)
            {
                printf("Roll: %d Name: %s Percentage: %.2f\n",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp = temp->next;
        }

        printf("Enter Roll Number: ");
        scanf("%d",&roll);

        temp = head;

        while(temp != NULL)
        {
            if(temp->roll == roll)
            {
                found = temp;
                break;
            }

            temp = temp->next;
        }
    }

    else if(choice == 'P' || choice == 'p')
    {
        printf("Enter Percentage: ");
        scanf("%f",&percentage);

        printf("\nMatching Records:\n");

        while(temp != NULL)
        {
            if(temp->percentage == percentage)
            {
                printf("Roll: %d Name: %s Percentage: %.2f\n",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp = temp->next;
        }

        printf("Enter Roll Number: ");
        scanf("%d",&roll);

        temp = head;

        while(temp != NULL)
        {
            if(temp->roll == roll)
            {
                found = temp;
                break;
            }

            temp = temp->next;
        }
    }

    else
    {
        printf("Invalid Choice\n");
        return;
    }

    if(found == NULL)
    {
        printf("Record Not Found\n");
        return;
    }

    printf("\nModify:\n");

    printf("N/n : Name\n");
    printf("P/p : Percentage\n");

    printf("Enter Your Choice: ");
    scanf(" %c",&field);

    if(field == 'N' || field == 'n')
    {
        printf("Enter New Name: ");
        scanf(" %[^\n]",found->name);
    }

    else if(field == 'P' || field == 'p')
    {
        printf("Enter New Percentage: ");
        scanf("%f",&found->percentage);
    }

    else
    {
        printf("Invalid Choice\n");
        return;
    }

    printf("Record Modified Successfully\n");
}