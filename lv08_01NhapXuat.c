#include <stdio.h>
#include <stdlib.h>
void nhap(int *p,int n);
void xuat(int *p, int n);
//----------------------------------
void main()
{
    int n;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    nhap(p,n);
    xuat(p,n);
    free(p);
}
//---------------------------------
void nhap(int *p,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
       printf ("nhap a[%d]=",i);
       scanf("%d",(p+i));

    }
}
//---------------------------------
void xuat(int *p,int n)
{  int i;

    for (i=0;i<n;i++)
        printf ("%d  ",*( p+i));
}
