#include "student.h"

void stud_del(void)
{
    char choice;
    int roll;
    char name[50];

    STUDENT *temp;
    STUDENT *prev;

    printf("\nR/r : Delete using Roll Number\n");
    printf("N/n : Delete using Name\n");

    printf("Enter Your Choice: ");
    scanf(" %c",&choice);

    if(choice == 'R' || choice == 'r')
    {
        printf("Enter Roll Number: ");
        scanf("%d",&roll);
    }

    else if(choice == 'N' || choice == 'n')
    {
        printf("Enter Name: ");
        scanf(" %[^\n]",name);

        temp = head;

        printf("\nMatching Records:\n");

        while(temp != NULL)
        {
            if(strcmp(temp->name,name) == 0)
            {
                printf("Roll: %d  Name: %s  Percentage: %.2f\n",
                       temp->roll,
                       temp->name,
                       temp->percentage);
            }

            temp = temp->next;
        }

        printf("Enter Roll Number to Delete: ");
        scanf("%d",&roll);
    }

    else
    {
        printf("Invalid Choice\n");
        return;
    }

    temp = head;
    prev = NULL;

    while(temp != NULL)
    {
        if(temp->roll == roll)
        {
            if(prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            free(temp);

            printf("Record Deleted Successfully\n");

            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Record Not Found\n");
}