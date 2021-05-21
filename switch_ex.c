#include<stdio.h>
int main()
{
int choice;
printf("Enter your choice: 1-yes, 2-no\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("YESSSSSS");
break;
case 2: printf("NOOOOOO");
break;
default: printf("DEFAULT CASE");
} printf("The choice is %d",choice);
return 0;
}
