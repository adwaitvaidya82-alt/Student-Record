#include "student.h"

void sort_name(void)
{
    STUDENT *i;
    STUDENT *j;

    int temp_roll;
    char temp_name[50];
    float temp_percentage;

    if(head == NULL)
        return;

    for(i = head; i != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(strcmp(i->name,j->name) > 0)
            {
                temp_roll = i->roll;
                i->roll = j->roll;
                j->roll = temp_roll;

                strcpy(temp_name,i->name);
                strcpy(i->name,j->name);
                strcpy(j->name,temp_name);

                temp_percentage = i->percentage;
                i->percentage = j->percentage;
                j->percentage = temp_percentage;
            }
        }
    }

    printf("Records Sorted By Name\n");
}


void sort_percentage(void)
{
    STUDENT *i;
    STUDENT *j;

    int temp_roll;
    char temp_name[50];
    float temp_percentage;

    if(head == NULL)
        return;

    for(i = head; i != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(i->percentage > j->percentage)
            {
                temp_roll = i->roll;
                i->roll = j->roll;
                j->roll = temp_roll;

                strcpy(temp_name,i->name);
                strcpy(i->name,j->name);
                strcpy(j->name,temp_name);

                temp_percentage = i->percentage;
                i->percentage = j->percentage;
                j->percentage = temp_percentage;
            }
        }
    }

    printf("Records Sorted By Percentage\n");
}