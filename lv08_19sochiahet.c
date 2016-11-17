#include <stdio.h>
#include <stdlib.h>
void chiahet(int n,int k);
//----------------------------------
void main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("\n so chia het cho %d tu 1 den %d\n",k,n);
    chiahet(n,k);

}
//---------------------------------
void chiahet(int n,int k)
{
    int i;
    for (i=1;i<=n;i++)
        if (i%k==0)
        printf("%d   ",i);
    printf("\n");
}
