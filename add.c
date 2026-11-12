#include"student.h"

void rollno(SLL*ptr)
{
int i=1;
while(ptr)
{
ptr->rollno=i;
i++;
ptr=ptr->next;
}
}

void add(SLL**ptr)
{
SLL*new;
new=malloc(sizeof(SLL));

printf("\nEnter name & percentage\n");
scanf("%s %f",new->name, &new->percentage);

new->next=*ptr;
*ptr=new;

rollno(*ptr);
}
