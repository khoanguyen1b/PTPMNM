#include "Toan.h"
#include<stdio.h>
int main()
{
  int a=1,b=2;
  int t=tong(a,b);
 
  int h=hieu(a,b);
int ti=tich(a,b);
float th=thuong(a,b);
printf("tong =%d \t hieu=%d \t tich=%d \t thuong=%f",t,h,ti,th); 
return 0;
}
