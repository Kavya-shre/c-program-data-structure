#include <stdio.h>
int main() {
    int num,temp,digit,rev=0;
  printf("enter the number");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
    {
      digit=temp%10;
      rev=rev*10+digit;
      temp=temp/10;
    }
 if(rev==num)
   printf("the given number %d is palindrome",num);
  else
   printf("the given number is not a palindrome");
}