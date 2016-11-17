#include <stdio.h>
#include <stdlib.h>
void fibonaci(int n);
//----------------------------------
void main()
{
    int n;
    scanf("%d",&n);
    printf("\nDay so fibonaci \n");
    fibonaci(n);
}
//----------------------------------
void fibonaci(int n)
{  int i;
   int *p;
   p= (int*)malloc(n*sizeof(int));
    *p=1;
    *(p+1)=1;
   for (i=2;i<n;i++)
      *(p+i)=*(p+i-1)+*(p+i-2);
for (i=0;i<n;i++)
    printf("%d   ",*(p+i));
  free(p);
}
