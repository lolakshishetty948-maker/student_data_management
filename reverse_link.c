#include"student.h"

void reverse(SLL **ptr)
{
if(*ptr==NULL)
{
printf("No record found\n");
return;
}
int i;
int c=count_node(*ptr);
if(c>1)
{
SLL *t=*ptr;
SLL **a=malloc(sizeof(SLL*)*c);
for(i=0;i<c;i++)
{
a[i]=t;
t=t->next;
}

for(i=c-1;i>0;i--)
a[i]->next=a[i-1];

a[0]->next=0;
*ptr=a[c-1];
free(a);
}
printf("Record reversed\n");
}
