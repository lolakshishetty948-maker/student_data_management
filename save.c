#include"student.h"

void save(SLL*ptr)

{
if(ptr==0)
{
printf("No record found\n");
return;
}

FILE*fp=fopen("student.txt","w");

if(fp==0)
{
printf("file not present\n");
return;
}

while(ptr)
{
fprintf(fp,"%d %s %.2f\n", ptr->rollno, ptr->name, ptr->percentage);
ptr=ptr->next;
}
printf("Data saved\n");
fclose(fp);
}
