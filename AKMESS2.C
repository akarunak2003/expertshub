#include<stdio.h>
#include<conio.h>
void main()
{
   int tpoori,rpoori,spoori,apoori,balpoori;
   int eatr,eats,eata,bal,bapoori,cpoori;
   clrscr();
   printf("enter no of poori\n");
   scanf("%d",&tpoori);
   printf("enter rama poori\n");
   scanf("%d",&rpoori);
   printf("enter saran poori\n");
   scanf("%d",&spoori);
   printf("balance poori\n");
   scanf("%d",&balpoori);
   printf("enter arun poori\n");
   scanf("%d",&apoori);
   printf("balance poori\n");
   eatr=tpoori*rpoori/100;
   eats=tpoori*spoori/100;
   bal=tpoori-(eats+eatr);
   eata=tpoori*apoori/100;
   //bapoori=bal-eata;
   bapoori=tpoori-eata;
   cpoori=bal-eata;
   printf("eaten poori:%d\n",eatr);
   printf("eaten poori:%d\n",eats);
   printf("balance poori:%d\n",bal);
   printf("eaten poori:%d\n",eata);
   //printf("last poori:%d\n",bapoori);
   printf("balance poori are:%d\n",bapoori);
   printf("last poori:%d\n",cpoori);
   getch();
}

