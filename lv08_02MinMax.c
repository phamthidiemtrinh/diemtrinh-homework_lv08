#include <stdio.h>
#include <stdlib.h>
void nhap(int *p,int n);
void xuat(int *p, int n);
void minmax(int *p,int n);
//----------------------------------
void main()
{
    int n;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    nhap(p,n);
    printf("\nday so vua nhap\n");
    xuat(p,n);
    minmax(p,n);

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
//----------------------------------
void minmax(int*p,int n)
{
    int i,min,max;
    min=*p;
    max=*p;
    for (i=0;i<n;i++)
    {
     if (*(p+i)>max) max=*(p+i);
     if (*(p+i)<min) min=*(p+i);
    }
        printf("\nMax= %d   \n",max);
        printf("\nMin= %d   \n",min);
}
