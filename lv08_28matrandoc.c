#include <stdio.h>
#include <stdlib.h>
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
    int *p;
    int i,j,dem;
    p=(int*)malloc(n*n*sizeof(n));

  dem=0;
   for (i=0;i<n;i++)
    for (j=0;j<n;j++)
   {
       dem++;
       *(p+j*n+i)=dem;
   }

   for (i=0;i<n;i++)
   {
       for (j=0;j<n;j++)
         printf("%d  ",*(p+i*n+j));
       printf("\n");
   }
free(n);
}
