#include "student.h"

void stud_save(void)
{
    FILE *fp;

    STUDENT *temp = head;

    fp = fopen("student.dat","wb");

    if(fp == NULL)
    {
        printf("File Cannot Be Opened\n");
        return;
    }

    while(temp != NULL)
    {
        fwrite(temp,sizeof(STUDENT),1,fp);

        temp = temp->next;
    }

    fclose(fp);

    printf("Records Saved Successfully\n");
}


void stud_load(void)
{
    FILE *fp;

    STUDENT data;

    STUDENT *new;
    STUDENT *temp;

    fp = fopen("student.dat","rb");

    if(fp == NULL)
    {
        return;
    }

    while(fread(&data,sizeof(STUDENT),1,fp) == 1)
    {
        new = malloc(sizeof(STUDENT));

        if(new == NULL)
            break;

        *new = data;

        new->next = NULL;

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
    }

    fclose(fp);
}
