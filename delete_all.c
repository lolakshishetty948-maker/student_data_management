#include"student.h"

void delete_all(SLL **ptr)
{
if(*ptr==0)
{
printf("No record found\n");
return;
}

SLL *del=*ptr;
int c=1;
while(del)
{
*ptr=del->next;
printf("Node position:%d deleted\n",c++);

free(del);
del=*ptr;
}
printf("All records deleted\n");
}
