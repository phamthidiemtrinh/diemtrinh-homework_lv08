#include <stdio.h>
#include <stdlib.h>
void nhap(int *p,int n);
void xuat(int *p, int n);
void chan (int *p,int n);
void le(int *p,int n);
//----------------------------------
void main()
{
    int n;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    nhap(p,n);
    printf ("\nDay vua nhap\n");
    xuat(p,n);
    chan(p,n);
    le(p,n);
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
void chan(int *p,int n);
{
    int i;
    printf("\n cac pha tu chan\n");
    for (i=0;i<n;i++)
        if (*(p+i)%2==0) printf("%d  ",*(p+i));
}
void le(int *p,int n);
{
    int i;
    printf("\n cac pha tu le\n");
    for (i=0;i<n;i++)
        if (*(p+i)%2!=0) printf("%d  ",*(p+i));
}
