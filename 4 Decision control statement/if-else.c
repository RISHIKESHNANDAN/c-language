#include<stdio.h>
 int main () {
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    if (age >= 18) {
        printf("you are eligible.\n");
    }
    else {
        printf("you are not eligible,\n you are under age");
    }

    printf("your age is:%d",age);
    return 0;
 }
