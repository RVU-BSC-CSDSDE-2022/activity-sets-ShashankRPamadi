#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main(){
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum;
  sum=sum_n_array(n,a);
  output(n,a,sum);
  return 0;
}

int input_array_size(){
  int n;
  printf("Enter size of array:\n");
  scanf("%d",&n);
  return n;
  
}
void input_array(int n, int a[n]){
  for(int i=0; i<n; i++){
    printf("Enter array element\n");
    scanf("%d",&a[i]);
  }
}

int sum_n_array(int n, int a[n]){
  int sum=0;
  for(i=1;i<=n;i++){
    sum+=a[i];
  }
  return sum;
}
void output(int n, int a[n], int sum){
  printf("the sum of");
 
    printf("%d and %d ",a[i]);
  }
  printf("%d= %d",a[i],sum);
} 
