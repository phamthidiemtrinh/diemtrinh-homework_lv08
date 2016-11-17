#include <stdio.h>
#include <stdlib.h>
int nguyento(int n);
//----------------------------------
void main()
{
    int n,k;
    scanf("%d",&n);
    printf("\n co %d so nguyen to tu  1 den  %d\n",nguyento(n),n);

}
//---------------------------------
int nguyento(int n)
{
    int i,j,t,dem;
    dem=0;
    if (n==2) dem=1;
    if (n>=3) dem=2;
    for (i=5;i<=n;i+=2)
    { t=0;

            for (j=2;j<=(int)(sqrt(i));j++)
                if (i%j==0) t=1;
            if (t==0) dem++;


    }
    return(dem);
}
