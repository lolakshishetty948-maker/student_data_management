#ifndef student_H 
#define student_H
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
int rollno;
char name[30];
float percentage;
struct student *next;
}SLL;

extern struct student *headpt;

#endif


void rollno(SLL*ptr);
void add(SLL**ptr);
void show(SLL*ptr);
void save(SLL*ptr);
void modify(SLL*ptr);
SLL *S_rollno(SLL*ptr, int num);
SLL *name(SLL*ptr, char *s);
SLL *percentage(SLL*ptr, float f);

void sort(SLL*ptr);
int count_node(SLL*ptr);
void S_name(SLL*ptr);
void f_percent(SLL*ptr);

void delete(SLL**ptr);
int D_rollno(SLL**ptr, int num);
void D_name(SLL**ptr, char *s);

void delete_all(SLL **ptr);
void reverse(SLL **ptr);
