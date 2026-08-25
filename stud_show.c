#include "student.h"

void stud_show(void)
{
    STUDENT *temp = head;

    if(head == NULL)
    {
        printf("\nNo Records Found\n");
        return;
    }

    printf("\n---------------------------------------------\n");
    printf("Roll No\tName\t\tPercentage\n");
    printf("---------------------------------------------\n");

    while(temp != NULL)
    {
        printf("%d\t%-15s %.2f\n",
               temp->roll,
               temp->name,
               temp->percentage);

        temp = temp->next;
    }

    printf("---------------------------------------------\n");
}