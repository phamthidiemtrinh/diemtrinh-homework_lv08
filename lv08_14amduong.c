#include <stdio.h>
#include <stdlib.h>
void nhap(int *p,int n);
void xuat(int *p, int n);
void tach(int *p,int n);
//----------------------------------
void main()
{
    int n;
    int *p,*a,*b;
    int u,v;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    nhap(p,n);
    xuat(p,n);
    tach(p,n);
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
void tach(int *p,int n)
{
    int i,*a,*b,u,v;
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));

    u=0;v=0;
    for (i=0;i<n;i++)
        if (*(p+i)>0)
    {
        *(a+u)=*(p+i);
        u++;
    }
    else if(*(p+i)<0)
    {
        *(b+v)=*(p+i);
        v++;
    }
    printf("\nday cac so am\n");
    for (i=0;i<v;i++) printf("%d  ",*(b+i));
    printf("\nday cac so duong\n");
    for (i=0;i<u;i++) printf("%d  ",*(a+i));
    free(a);
    free(b);

}
