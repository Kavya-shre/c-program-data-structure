#include <stdio.h>
int main() {
  int n,i,flag=0;
  printf("enter a number");
  scanf("%d",&n);
  if(n<2){
    printf("not a prime number");
  }
    for(i=2;i<n;i++)
      {
        if(n%i==0)
          flag=1;
          break;
        }
  if(flag==0)
    printf("%d is a prime number",n);
  else
    printf("%d is not a prime number",n);
  return 0;
}