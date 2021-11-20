
#include<stdio.h>
#include<math.h>
#define f(x) x*x*x+3*x-5
int main()
{
float x, a, b, acr;
printf("Enter the desired accuracy:");
scanf("%f", &acr);
do
{
printf("Enter a & b:\n");
scanf("%f %f", &a, &b);
}
while (f(a)*f(b)> 0);
int k = 0;
do
{
x = (a+b)/2;
printf("a=%f,b=%f,f(a)=%f,f(b)=%f,x=%f,|b-a|=%f",a, b,
f(a), f(b), x ,b-a);
printf("\n");
if (f(x) < 0)
a = x;
else if (f(x)>0)
b = x;
else
break;
k = k + 1;
}
 while ((b-a) > acr);
printf("\n");
printf("The value of root=%f and no. of iterations performed= %d ",x,k) ;
return 0;
}
