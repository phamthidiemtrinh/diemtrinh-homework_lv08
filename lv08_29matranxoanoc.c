#include <stdio.h>
#include <stdlib.h>
void  xuat(int n);

//----------------------------------
void main()
 {

     int n;
     scanf("%d",&n);
    printf("\n ma tran\n");
    xuat(n);
}
//----------------------------------
void xuat(int n)
{
    int thuTu,tren,duoi,trai,phai,i,j,*p,pt;
    p=(int*)malloc(n*n*sizeof(int));
    tren=0;
    duoi=n-1;
    phai=n-1;
    trai=0;
    pt=n*n;
    thuTu=0;
 //==================================
 for (i=0;i<n;i++)
      for (j=0;j<n;j++) *(p+i*n+j)=0;
 while (thuTu < pt)
 {
     //----------------------------------
     for (i=trai;i<=phai;i++)
     {
         thuTu++;
        *(p+tren*n+i)=thuTu;
     }
     tren++;
     //-----------------------------------
     for (i=tren;i<= duoi;i++)
     {
         thuTu++;
         *(p+i*n+phai)=thuTu;
     }
     phai--;
     //------------------------------------
     for (i=phai;i>=trai;i--)
     {
         thuTu++;
        *(p+duoi*n+i)=thuTu;

     }
     duoi--;
     //-------------------------------------
     for (i=duoi;i>=tren;i--)
     {
         thuTu++;
         *(p+i*n+trai)=thuTu;

     }
     trai++;
 }

//====================================
printf("----------------\n");
    for (i=0;i<(n);i++)
    {
        for (j=0;j<(n);j++)

            printf("%d ",*(p+i*n+j));
        printf("\n");
    }
free(p);
}
