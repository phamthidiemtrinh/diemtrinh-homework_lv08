#include <stdio.h>
#include <stdlib.h>
void nhap(int *p,int n);
void xuat(int *p, int n);
void xoa(int *p,int n);
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
    xoa(p,n);
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
void xoa(int *p,int n)
{
    int i,j,t,*a,u;
    a=(int*)malloc(n*sizeof(int));
    u=0;
    for (i=0;i<n;i++)
        if (*(p+i)>=0)
    {
        *(a+u)=*(p+i);
        u++;
    }
     for (i=0;i<u-1;i++)
        for (j=i+1;j<u;j++)
        if (*(a+i)<*(a+j))
    {
        t= *(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
    }
    printf("\nxoa phan tu am va sap xep\n");
    for (i=0;i<u;i++) printf("%d    ",*(a+i));
    free(a);
}
