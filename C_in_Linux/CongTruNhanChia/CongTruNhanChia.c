#include <stdio.h>
#include <math.h>
int a,b;
void nhap()
    {     
      printf("a=");
      scanf("%d",&a);
      printf("b=");
      scanf("%d",&b);  
    }
int tong()
   {
     int c=a+b;
     return c; 
   }
int hieu()
 {
     int c=a-b;
     return c; 
   }
int tich()
 {
     int c=a*b;
     return c; 
   }
float thuong()
 {
     float c=(float)a/b;
     return c; 
   }
int main()
{
nhap(a,b);
printf("%d+%d=%d",a,b,tong());
printf("%d+%d=%d",a,b,hieu());
printf("%d+%d=%d",a,b,tich());
printf("%d+%d=%f",a,b,thuong());
return 0;
}
