#include<stdio.h>
int main() {
    char name[20];// Declare a character array to store the name

    printf("enter your name:");
    scanf(" %19s", name);// Read the name from user input
    printf("welcome %s to c coding.",name);// Print a welcome message
    return 0;
}