#include<stdio.h>
int diwali();
int laddu,ras,temp;

void main()
{
   clrscr();
	  printf("enter the laddu:");
	  scanf("%d",&laddu);
	  printf("enter the ras:");
	  scanf("%d",&ras);
	 temp=diwali(laddu,ras);
	 printf("no sweets: %d",temp);
   getch();
}
int diwali(int a,int b)
{
    return a+b;
}
