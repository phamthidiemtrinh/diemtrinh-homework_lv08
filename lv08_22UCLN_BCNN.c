#include <stdio.h>
int UCLN(int n,int m);
//----------------------------------
void main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("\n UCLN(%d,%d)=%d\n",m,n,UCLN(m,n));
    printf("\n BCNN(%d,%d)=%d\n",m,n,(int)(m*n)/UCLN(m,n));

}
//---------------------------------
int UCLN(int a, int b)
{    int c;
     c=1;
     while (c!=0)
    {
        c=a%b;
        a=b;
        b=c;

     }
 return(a);
}
