#include<stdio.h>
#include"student.h"

SLL* headpt=NULL;

int main()
{
char op; int count;
while(1)
{
printf("\n***** Student Data Management*****\n");
printf("\na/A: Add new record\n d/D: Delete a record\n s/S: Show the list\n m/M: Modify a record\n v/V: Save records\n e/E: Exit\n t/T: Sort the list\n l/L: Delete all the records\n r/R: Reverse the list\n");

printf("\nEnter your choice\n");
scanf(" %c",&op);


switch(op)
{
case 'A':
case 'a': add(&headpt);
break;

case 'd':
case 'D': delete(&headpt);
break;

case 'S':
case 's': show(headpt);
break;

case 'm':
case 'M': modify(headpt);
break;

case 'V':
case 'v': save(headpt);
break;

case 'e':
case 'E': 
{
char ch;
printf("enter your choice\n");
printf("s/S: save and exit\n");
printf("e/E: exit without saving\n");
scanf(" %c",&ch);

switch(ch)
{
case 's':
case 'S':
{
save(headpt);
return 0;
}
break;

case 'e':
case 'E':
{
printf("Exit without saving\n");
return 0;
}
break;
}
}


case 't':
case 'T': sort(headpt);
break;

case 'l':
case 'L': delete_all(&headpt);
break;

case 'r':
case 'R': reverse(&headpt);
break;
}
}
}
