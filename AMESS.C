#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dhosa=50,tea=50,vada=200;
   int aidly,adhosa,atea,avada;
   int bidly,bdhosa,btea,bvada;
   scanf("%d%d%d%d",&aidly,&adhosa,&atea,&avada);
   bidly=idly-aidly;
   printf("enter alagu idly%d\n",bidly);
   bdhosa=dhosa-adhosa;
   printf("enter alagu dhosa%d\n",bdhosa);
   btea=tea-atea;
   printf("enter alagu tea%d\n",btea);
   bvada=vada-avada;
   printf("enter alagu vada%d\n",bvada);
   getch();
}
