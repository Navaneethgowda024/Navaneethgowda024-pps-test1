#include <stdio.h>
int input()
{
  int a; 
  printf("Enter first number\n");
  scanf("%d",&a);
  return a;
}

int find_sum(int a, int b)
{
 int sum;
  sum = a+b;
  return sum;
}
void output(int a, int b, int sum)
{
  printf(" the Sum of %d + %d is %d\n",a,b,sum );
}

int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=find_sum(x,y);
  output(x,y,z);
  return 0;
}
