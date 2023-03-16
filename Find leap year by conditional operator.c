

#include <stdio.h>

int main()
{
 int a,b,c;
 scanf("%d",&a);
  (a%400==0) || (a%4==0) && (a%100!=0) ? printf("Leap Year"): printf("Non Leap Year");

    return 0;
}
