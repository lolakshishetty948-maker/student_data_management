#include"student.h"
#include<string.h>

SLL *S_rollno(SLL*ptr, int num);
SLL *name(SLL*ptr, char *s);
SLL *percentage(SLL*ptr, float f);

void modify(SLL*ptr)
{
char ch;
SLL *p=NULL;
int num;
float  f,percent;
char s[30];


if(ptr==0)
{
printf("No record found\n");
return;
}

printf("\nenter order to modify\n");
printf("r/R:  Search by rollno\n");
printf("n/N: Search by name\n");
printf("p/P: Search by percentage");
printf("Enter your choice\n");
scanf(" %c",&ch);

switch(ch)
{
case 'r':
case 'R':
printf("Enter rollno\n");
scanf("%d",&num);

p=S_rollno(ptr,num);
break;

case 'n':
case 'N':
printf("Enter name\n");
scanf(" %[^\n]",s);

p=name(ptr,s);
break;


case 'p':
case 'P':
printf("Enter percentage\n");
scanf("%f",&f);

p=percentage(ptr,f);
break;


default: printf("Enter valid char\n");
return;
}

if(p==NULL)
{
return;
}

printf("Enter new name\n");
scanf(" %[^\n]",p->name);

printf("Enter new percent\n");
scanf("%f",&p->percentage);

printf("Record Modified\n");
}

SLL *S_rollno(SLL *ptr, int num)
{
while(ptr)
{
if(num==ptr->rollno)
return ptr;

ptr=ptr->next;
}
return NULL;
}

SLL *name(SLL *ptr, char *s)
{
SLL *head=ptr;
SLL *p=NULL;
int c=0,num;

while(ptr)
{
if(strcmp(ptr->name,s)==0)
{
printf("%d %s %f\n",ptr->rollno, ptr->name, ptr->percentage);
c++;
p=ptr;
}
ptr=ptr->next;
}

if(c==0)
{
printf("Name not found\n");
return NULL;
}

if(c==1)
return p;


printf("Enter rollno\n");
scanf("%d",&num);

ptr=head;

if(c>1)
{
while(ptr)
{
if(ptr->rollno==num && strcmp(ptr->name,s)==0)
{
return ptr;
}
ptr=ptr->next;
}
printf("Invalid rollno\n");
return NULL;
}
}



SLL *percentage(SLL*ptr, float f)
{
SLL *head=ptr;
SLL *p=NULL;
int c=0,num;

while(ptr)
{
if(f==ptr->percentage)
{
printf("%d %s %f\n",ptr->rollno, ptr->name, ptr->percentage);
c++;
p=ptr;
}
ptr=ptr->next;
}

if(c==0)
{
printf("Perentage not found\n");
return NULL;
}

if(c==1)
return p;


printf("Enter rollno\n");
scanf("%d",&num);

ptr=head;

if(c>1)
{
while(ptr)
{
if(ptr->rollno==num && f==ptr->percentage)
return ptr;

ptr=ptr->next;
}
printf("Invalid rollno\n");
return NULL;
}
}






