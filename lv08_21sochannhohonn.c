#include <stdio.h>
int sochan(int n);
//----------------------------------
void main()
{
    int n,k;
    scanf("%d",&n);
    printf("\n co %d so chan tu  1 den  %d\n",sochan(n),n);

}
//---------------------------------
int sochan(int n)
{ int k,i;
    k=0;
    for (i=1;i<=n;i++)
        if (i%2==0) k++;
    return(k);
}
