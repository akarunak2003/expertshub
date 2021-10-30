#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dhosa=50,tea=50,vada=200;
   int aidly,adhosa,atea,avada,midly,mdhosa,mtea,mvada;
   int bidly,bdhosa,btea,bvada;
   int moidly,modhosa,motea,movada;
   int baidly,badhosa,batea,bavada;
   int aridly,ardhosa,artea,arvada;
   int b1idly,b1dhosa,b1tea,b1vada;
   int sridly,srdhosa,srtea,srvada;
   int b2idly,b2dhosa,b2tea,b2vada;
   scanf("%d%d%d%d",&aidly,&adhosa,&atea,&avada);
   bidly=idly-aidly;
   printf("enter alagu idly%d\n",bidly);
   bdhosa=dhosa-adhosa;
   printf("enter alagu dhosa%d\n",bdhosa);
   btea=tea-atea;
   printf("enter alagu tea%d\n",btea);
   bvada=vada-avada;
   printf("enter alagu vada%d\n",bvada);
   scanf("%d%d%d%d",&moidly,&modhosa,&motea,&movada);
   baidly=bidly-moidly;
   printf("enter moni idly%d\n",baidly);
   badhosa=bdhosa-modhosa;
   printf("enter moni dhosa%d\n",badhosa);
   batea=btea-motea;
   printf("enter moni tea%d\n",batea);
   bavada=bvada-movada;
   printf("enter moni vada%d\n",bavada);
   scanf("%d%d%d%d",&aridly,&ardhosa,&artea,&arvada);
   b1idly=baidly-aridly;
   printf("enter arun idly%d\n",b1idly);
   b1dhosa=badhosa-ardhosa;
   printf("enter arun dhosa%d\n",b1dhosa);
   b1tea=batea-artea;
   printf("enter arun tea%d\n",b1tea);
   b1vada=bavada-arvada;
   printf("enter arun vada%d\n",b1vada);
   scanf("%d%d%d%d",&sridly,&srdhosa,&srtea,&srvada);
   b2idly=b1idly-sridly;
   printf("enter sri idly%d\n",b2idly);
   b2dhosa=b1dhosa-srdhosa;
   printf("enter sri dhosa%d\n",b2dhosa);
   b2tea=b1tea-srtea;
   printf("enter sri tea %d\n",b2tea);
   b2vada=b1vada-srvada;
   scanf("%d%d%d%d",&idly,&dhosa,&tea,&vada);
   idly=idly-bidly-baidly-b1idly-b2idly;
   dhosa=dhosa-badhosa-b1tea-b2vada;
   tea=tea-btea-batea-b1tea-b2tea;
   vada=vada-bvada-bavada-b1vada-b2vada;
   printf("balance\nidly\t%d\ndhosa\t%d\ntea\t%d\nvada\t%d",idly,dhosa,tea,vada);
   getch();
}
