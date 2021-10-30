#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dhosa=50;
   int aidly,adhosa;
   int moidly,modhosa;
   printf(" alagu tiffen");
   scanf("%d%d",&aidly,&adhosa);
   idly=idly-aidly;
   dhosa=dhosa-adhosa;
   printf("%d%d moni tiffen");
   scanf("%d%d",&moidly,&modhosa);
   idly=idly-moidly;
   dhosa=dhosa-modhosa;
   printf("%d\n%d\n",idly,dhosa);
   getch();

}
