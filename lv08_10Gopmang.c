#include <stdio.h>
#include <stdlib.h>
void nhap(int *a,int *b,int n,int m);
void xuat(int *a,int *b, int n,int m);
void gop(int *a,int *b,int n,int m);
//----------------------------------
void main()
{
    int n,m;
    int *a,*b;
    scanf("%d%d",&n,&m);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    nhap(a,b,n,m);
    xuat(a,b,n,m);
    gop(a,b,n,m);
    free(a);
    free(b);
}
//---------------------------------
void nhap(int *a,int*b,int n,int m)
{
    int i;
    for (i=0;i<n;i++)
    {
       printf ("nhap a[%d]=",i);
       scanf("%d",(a+i));

    }
    for (i=0;i<m;i++)
    {
       printf ("nhap b[%d]=",i);
       scanf("%d",(b+i));

    }
}
//---------------------------------
void xuat(int *a,int *b,int n,int m)
{  int i;
   printf("\n mang a:\n");
    for (i=0;i<n;i++)
        printf ("%d  ",*( a+i));
    printf("\n mang b:\n");
    for (i=0;i<m;i++)
        printf ("%d  ",*( b+i));
}
//-------------------------------
void gop(int *a,int *b,int n,int m)
{ int i,j;
printf("\n mang gop \n");
     i=0;j=0;
     while (i!=n&&j!=m)
     {
         if (*(a+i)<*(b+j))
         {
             printf("%d  ",*(a+i));
             i++;
         }
         else if (*(a+i)>*(b+j))
         {
             printf("%d  ",*(b+j));
             j++;
         }
         else
         {
             printf("%d   %d   ",*(a+i),*(a+i));
             i++;j++;
         }

     }
     if  (i!=n)
         for (i=i;i<n;i++) printf("%d  ",*(a+i));
     if (j!=m)
        for (j=j;j<m;j++)  printf("%d  ",*(b+j));
}
