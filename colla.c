#include<stdio.h>
 
int main() {
    char name[100];
    printf("hello,what's your name:");
    scanf("%s",&name);

    printf("welcome,%s\n",name);
    return 0;
}
