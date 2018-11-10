#include<stdio.h>
int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
  int a,b;
  do{
    printf("a:");
    scanf("%d",&a);
  }while(a<0);
  do{
    printf("b:");
    scanf("%d",&b);
  }while(b<0);
  printf("aとbの最大公約数：%d\n",gcd(a,b));
  printf("aとbの最小公倍数：%d\n",lcm(a,b));
  return 0;
}

int gcd(int a, int b)
{
  int gcd,cp,remainder;
  if(a<b){
    cp=a;
    a=b;
    b=cp;
  }
  remainder=a%b;
  while(remainder!=0){
    a=b;
    b=remainder;
    remainder=a%b; 
  }
gcd=b;
return gcd;
}

int lcm(int a, int b)
{
  int lcm;
  lcm=(a*b)/gcd(a,b);
  return lcm;
}
