#include <stdio.h>
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
    int i;
    for (i=1;i<=n*n;i++)
    {
        printf("%d  ",i);
        if (i%n==0) printf("\n");
    }
}
