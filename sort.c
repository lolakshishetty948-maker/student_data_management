#include"student.h"
#include<string.h>

int count_node(SLL*ptr)
{
int c=0;
while(ptr)
{
c++;
ptr=ptr->next;
}
return c;
}

void S_name(SLL*ptr);
void f_percent(SLL*ptr);


void sort(SLL*ptr)
{
char ch;
printf("Select sorting order\n");
printf("n/N sort with name\n");
printf("p/P sort with percentage\n");
scanf(" %c",&ch);

switch(ch)
{
case 'n':
case 'N':S_name(ptr);
break;

case 'p':
case 'P':f_percent(ptr);
break;
}
printf("\nStudent details sorted successfully\n");
}

void S_name(SLL *ptr)
{
SLL *p1, *p2, t;
int i,j, count=count_node(ptr);

for(i=0;i<count-1;i++)
{
p1=ptr;
p2=p1->next;
for(j=0;j<count-1-i;j++)
{
if(strcmp(p1->name, p2->name)>0)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;

p1->rollno=p2->rollno;
strcpy(p1->name, p2->name);
p1->percentage=p2->percentage;

p2->rollno=t.rollno;
strcpy(p2->name, t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
p1=p1->next;
}
}
}

void f_percent(SLL *ptr)
{
SLL *p1=ptr, *p2, t;
int i,j, count=count_node(ptr);

for(i=0;i<count-1;i++)
{
p2=p1->next;
for(j=0;j<count-1-i;j++)
{
if(p1->percentage < p2->percentage)
{
t.rollno=p1->rollno;
strcpy(t.name,p1->name);
t.percentage=p1->percentage;

p1->rollno=p2->rollno;
strcpy(p1->name, p2->name);
p1->percentage=p2->percentage;

p2->rollno=t.rollno;
strcpy(p2->name, t.name);
p2->percentage=t.percentage;
}
p2=p2->next;
}
p1=p1->next;
}
}


