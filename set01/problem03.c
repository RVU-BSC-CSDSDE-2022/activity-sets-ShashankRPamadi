#include <stdio.h>

int input();
int add(int a ,int b);
void output(int a, int b, int sum);


int input(){
  int n;
  printf("Enter Number: \n");
  scanf("%d",&n);
    return n;
  }
int add(int a, int b, int sum){
  printf("The sum of %d and %d is %d",a,b,sum);
}
int main(){
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output()
  return 0;
}
 
{
  printf("Wrong Input");
  
}