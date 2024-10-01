//
// Created by SUBRATA on 01/10/2024.
//for and while loop
#include <stdio.h>
int main() {
    int num,i,sum=0;
    printf("Enter a  integer number:");
    scanf("%d",&num);

    if(num>0) {
        printf("This number is positive integer:\n");
    }
    else {
        printf("This number is negative integer:\n");
    }
    for(i=1;i<=num;i++) {
        sum=sum+i;
    }
    printf("The sum of the given number is %d",sum);
    i=0;
    while(i<=num) {

        printf("%d\n",i);
        ++i;
    }
    return 0;
}
