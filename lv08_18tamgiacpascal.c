#include <stdio.h>
#include <stdlib.h>
void pascal(int n);
//----------------------------------
void main()
{
    int n;
    scanf("%d",&n);
    pascal(n);

}
//---------------------------------
void pascal(int n)
{
    int i,j,d;
    int *p;
    p=(int*)malloc(n*n*sizeof(int));
   for (i=0;i<=n;i++)
   {
       *(p+i+0)=1;
       *(p+i+i)=1;
    }

//-------------------------
    for (i=2;i<=n;i++)
      for (j=1;j<i;j++)
         *(p+i+j)=*(p+(i-1)+(j-1))+*(p+(i-1)+(j));

//---------------------------
  d=0;
    for (i=0;i<=n;i++)

        {
            for(j=0;j<=d;j++) printf("%d  ",*(p+i+j));
            d++;
            printf("\n");

        }
  free(p);
}
