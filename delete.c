#include"student.h"
#include<string.h>

int D_rollno(SLL**ptr,int num);
void D_name(SLL**ptr, char *s);

void delete(SLL**ptr)
{
char ch;
int num;
char s[20];
printf("Enter deleting order\n");
printf("r/R: delete by rollno\n");
printf("n/N: delete by name\n");
scanf(" %c",&ch);

switch(ch)
{
case 'r':
case 'R':
{
int num;
printf("Enter num to delete\n");
scanf("%d", &num);
if(D_rollno(ptr,num))
{
printf("Record deleted successfully\n");
}
else
printf("Record not found\n");
break;
}

case 'n':
case 'N':
{
printf("Enter name to delete\n");
scanf(" %[^\n]",s);
D_name(ptr,s);
//printf("Record deleted\n");
break;
}
}
}

int D_rollno(SLL**ptr,int num)
{
SLL *del=*ptr, *prev=NULL;

while(del)
{
if(num==del->rollno)
{
if(*ptr==del)
*ptr=del->next;
else
prev->next=del->next;

free(del);
rollno(*ptr);
return 1;
}
prev=del;
del=del->next;
}
printf("Rollno not found\n");
}

void D_name(SLL**ptr, char *s)
{
SLL *t; 
int c=0,num;

t=*ptr;

while(t)
{
if(strcmp(t->name,s)==0)
c++;

t=t->next;
}
if(c==0)
{
printf("Name not found\n");
return;
}

if(c==1)
{
t=*ptr;
while(t)
{
if(strcmp(t->name,s)==0)
{
num=t->rollno;
break;
}
t=t->next;
}
}
else
{
t=*ptr;

while(t)
{
if(strcmp(t->name,s)==0)
printf("%d %s %f\n", t->rollno, t->name, t->percentage);
t=t->next;
}

printf("Enter rollno\n");
scanf("%d",&num);

t=*ptr;

while(t)
{
if(t->rollno==num &&  strcmp(t->name,s)==0)
break;
t=t->next;
}

if(t==NULL)
{
printf("invalid rollno\n");
return;
}
}
D_rollno(ptr,num);
}
