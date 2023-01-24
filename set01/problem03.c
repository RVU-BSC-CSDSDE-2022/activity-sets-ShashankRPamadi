#include <stdio.h>

int input();
int add(int a ,int b);
void output(int a, int b, int sum);
int main(){
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}
int input(){
  int n;
  printf("Enter Number: \n");
  scanf("%d",&n);
    return n;
  }
int add(int a, int b, int sum){
  sum=a+b;
}
void output(int a, int b, int sum){
  printf("the sum is %d",sum)
}



