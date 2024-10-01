//
// Created by SUBRATA on 01/10/2024.
//
#include <stdio.h>
int main() {
//Arithmetic Operators
    int a=5, b=6;

    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n", a-b );
    printf("a*b=%d\n", a*b );
    printf("a%b=%d\n", a%b );
//Increment and Decrement Operators
    printf("Increment and Decrement Operators\n");
    int c=10, d=20;
    float e=3.14, f=42.0;
    printf("++c=%d\n", ++c);
    printf("--d=%d\n", --d );
    printf("++e=%.2f\n", ++e );
    printf("--f=%.2f\n", --f );


    //Assignment Operators
    printf("Assignment Operators\n");
    int g=5, h;
    h=g; //here h 5
    printf("h=%d\n", h);
    h+=g;//here h is 10 ,h=h+g
    printf("h=%d\n", h );
    h-=g;//here h is 5 ,h=h-g
    printf("h=%d\n", h );
    h*=g;//here h is 25 ,h=h*g
    printf("h=%d\n", h );
    h/=g; //here h is 5, h=h/g
    printf("h=%d\n", h );
    h%=g; // here h is 0
    printf("h=%d\n", h );
//Relational Operators
    printf("Relational Operators\n");
 int x=10, y=20,z=10;
    printf("%d == %d is %d \n", x,y,x==y);
    printf("%d != %d is %d \n", x,y,x!=y);
    printf("%d > %d is %d \n", x,y,x>y);
    printf("%d < %d is %d \n", x,y,x<y);
    printf("%d >= %d is %d \n", x,y,x>=y);
    printf("%d <= %d is %d \n", x,y,x<=y);
    printf("%d == %d = %d \n", x,z,x==z);
    printf("%d != %d is %d \n", z,y,z!=y);

//Logical Operators
    int result;
    printf("Logical Operators\n");
    result=(x==z)&&(y==z);
    printf("(x==z)&&(y==z) is %d \n", result);
    result=(x>y)&&(z>y);
    printf("(x>y)&&(z>y) is %d \n", result);
    result=(x==z)||(y==z);
    printf("(x==z)||(y==z) is %d\n",result);
    result = (x != y) || (z < y);
    printf("(x != y) || (z < y) is %d \n", result);
    result = !(x != y);
    printf("!(x != y) is %d \n", result);
return 0;
}