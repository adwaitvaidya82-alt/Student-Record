#include "student.h"

void stud_add(void)
{
    STUDENT *new;
    STUDENT *temp;

    int roll = 1;
    int found;

    new = malloc(sizeof(STUDENT));

    if(new == NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    /* Find smallest available roll number */

    while(1)
    {
        found = 0;
        temp = head;

        while(temp != NULL)
        {
            if(temp->roll == roll)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if(found == 0)
            break;

        roll++;
    }

    new->roll = roll;

    printf("Enter Student Name: ");
    scanf(" %[^\n]",new->name);

    printf("Enter Percentage: ");
    scanf("%f",&new->percentage);

    new->next = NULL;

    /* Add node at end */

    if(head == NULL)
    {
        head = new;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
            temp = temp->next;

        temp->next = new;
    }

    printf("\nRecord Added Successfully\n");
    printf("Roll Number = %d\n",new->roll);
}