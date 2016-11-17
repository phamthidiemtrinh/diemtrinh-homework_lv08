#include <stdio.h>
#include <stdlib.h>
void nhap(int *p,int n);
void xuat(int *p, int n);
void xoa(int *p,int n,int k);
//----------------------------------
void main()
{
    int n,k;
    int *p,*a,*b;
    int u,v;
    scanf("%d%d",&n,&k);
    p=(int*)malloc(n*sizeof(int));
    nhap(p,n);
    xuat(p,n);
    xoa(p,n,k);
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
void xoa(int *p,int n,int k)
{
    int i,*a,u;
    a=(int*)malloc(n*sizeof(int));
    u=0;
    for (i=0;i<n;i++)
        if (*(p+i)!=k)
    {
        *(a+u)=*(p+i);
        u++;
    }
    printf("\nxoa phan tu =%d\n",k);
    for (i=0;i<u;i++) printf("%d    ",*(a+i));
    free(a);
}
