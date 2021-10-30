#include<stdio.h>
#include<conio.h>
void main()
{
   int poori,rpoori,spoori,apoori,balpoori;
   int eatr,eats,eata,bal,bapoori;
   clrscr();
   printf("enter no of poori\n");
   scanf("%d",&poori);
   printf("enter rama poori\n");
   scanf("%d",&rpoori);
   printf("enter saran poori\n");
   scanf("%d",&spoori);
   printf("balance poori\n");
   scanf("%d",&balpoori);
   printf("enter arun poori\n");
   scanf("%d",&apoori);
   printf("balance poori\n");
   eatr=poori*rpoori/100;
   eats=poori*spoori/100;
   bal=poori-(eats+eatr);
   eata=poori*apoori/100;
   bapoori=bal-eata;
   printf("eaten poori:%d\n",eatr);
   printf("eaten poori:%d\n",eats);
   printf("balance poori:%d\n",bal);
   printf("eaten poori:%d\n",eata);
   printf("last poori:%d\n",bapoori);
   getch();
}

