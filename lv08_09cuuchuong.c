#include <stdio.h>
void cuuchuong();
void main()
{

    printf("bang cuu chuong\n");
    cuuchuong();
}
void cuuchuong()
{
   int i,j;
   for (i=1;i<=9;i++)
   {
       for (j=2;j<=9;j++)
        if (i*j>9) printf("%dx%d=%d   ",j,i,i*j);
         else printf("%dx%d=%d    ",j,i,i*j);
       printf("\n");


   }
   for (i=2;i<=9;i++) printf("%dx10=%d  ",i,i*10);

}
