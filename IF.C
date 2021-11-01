#include<stdio.h>
#include<conio.h>
int rahul=1;
void main()
{  while(rahul)
   {
   clrscr();
	   printf("rahul status");
	   scanf("%d",&rahul);
	   if(rahul==0)
	   {
	     printf("rahul sitting");
	   }
	  else if(rahul==1)
	   {
	     printf("rahul standing");
	   }
	   else
	   {
	     printf("invalid input");
	   }
   getch();
   }
}