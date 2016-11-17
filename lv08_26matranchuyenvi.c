#include <stdio.h>
#include <stdlib.h>
void nhap(int *p);
void  xuat(int *p);
void  xuat1(int *p);
//----------------------------------
void main()
 {

     int *p;
     p= (int*)malloc(16*sizeof(int));
    nhap(p);
    printf("\n ma tran ban dau: \n");
    xuat(p);
    printf("\n ma tran chuyen vi: \n");
    xuat1(p);
    free(p);
}
//----------------------------------
void nhap(int *p)
{  int i,j,t;
   for (i=0;i<4;i++)
      for (j=0;j<4;j++)
   {
         printf("nhap a[%d,%d]=",i,j);
         scanf("%d",&t);
         *(p +i*4+j)=t;
   }
}
//-------------------
void xuat(int *p)
{  int i,j;
   for (i=0;i<4;i++)
      {
          for (j=0;j<4;j++)
         printf("%d   ",*(p+i*4+j));
         printf("\n");
   }
}
//-------------------------
void xuat1(int *p)
{  int i,j;
   for (i=0;i<4;i++)
      {
          for (j=0;j<4;j++)
         printf("%d   ",*(p+j*4+i));
         printf("\n");
   }
}


