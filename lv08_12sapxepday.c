#include <stdio.h>
#include <stdlib.h>
void nhap(int *a,int n);
void xuat(int *a, int n);
void xep(int *a,int n);
//----------------------------------
void main()
{
    int n,m;
    int *a,*b;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    nhap(a,n);
    xuat(a,n);
    xep(a,n);
    xuat(a,n);
    free(a);
}
//---------------------------------
void nhap(int *a,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
       printf ("nhap a[%d]=",i);
       scanf("%d",(a+i));

    }
}
//---------------------------------
void xuat(int *a,int n)
{  int i;
   printf("\n mang a:\n");
    for (i=0;i<n;i++)
        printf ("%d  ",*( a+i));
}
//-------------------------------
void xep(int *a,int n)
{
    int i,t,j;
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
        if (*(a+i)<*(a+j))
    {
        t= *(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
    }
}
