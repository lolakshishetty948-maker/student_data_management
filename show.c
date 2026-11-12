#include"student.h"

void show(SLL*ptr)
{
printf("\n----------------------\n"); //20
printf("Rollno Name Percentage\n");
printf("----------------------\n"); //20
if(ptr==0)
{
printf("\nNo records found\n");
return;
}

while(ptr)
{
printf("%d %s %.2f\n", ptr->rollno, ptr->name,ptr->percentage);
ptr=ptr->next;
}
}
