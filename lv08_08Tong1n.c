#include <stdio.h>
float tong(int n);
//----------------------------------
void main()
{
    int n;
    scanf("%d",&n);
    printf("tong 1/n so = %f",tong(n));
}
//---------------------------------
float tong(int n)
{
    int i;
    float s;
    s=0;
    for (i=1;i<=n;i++) s+=(float)1/i;
    return(s);
}
