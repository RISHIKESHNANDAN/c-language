#include<stdio.h>

int main() {
  int age;
  printf("enter your age: ");
  scanf("%d", &age);
 
  if (age >= 18) {
    printf("you are eligible for license.\n");
  }  


  printf("your age is: %d",age);


  return 0;
}