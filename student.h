#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int roll;
    char name[50];
    float percentage;

    struct student *next;

}STUDENT;

extern STUDENT *head;

/* Function declarations */

void stud_add(void);
void stud_del(void);
void stud_show(void);
void stud_mod(void);
void stud_save(void);
void stud_load(void);

void sort_name(void);
void sort_percentage(void);

#endif