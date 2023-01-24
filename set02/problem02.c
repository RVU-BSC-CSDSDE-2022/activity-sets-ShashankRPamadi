#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
  int a=input_side();
  int b=input_side();
  int c=input_side();
  int isscalene;
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
int input_side(){
  int n;
  printf("enter the sides of a triangle");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a, int b, int c){
  if(a==b||b==c||c==a){
    return 1;
  }
}
  void output(int a, int b, int c, int isscalene){
    if(isscalene==1){
        printf("It is not a scalene triangle");
    }
    else{
         printf("It is a scalene triangle");
      }
}