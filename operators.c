#include <stdio.h>

int main(){

    // 1. Arithmetic Operators (+, -, *, /, %)
    // 2. Relational Operators 
    // 3. Logical Operators
    // 4. Bitwise Operators
    // 5. Assignment Operators
    // 6. Ternary Operator

    // Relational Operators
    // == , >, >=, <, <=, !=

    int a = 4;
    int b = 4;

    printf("%d\n", a==b);
    printf("%d\n", -1==1);
    printf("%d\n", 4==3);

    printf("%d \n", 4<4);
    printf("%d \n", 4<=4);

    printf("%d \n", 4>5);
    printf("%d \n", 5>=5);

    printf("%d \n", 5!=5);
    printf("%d \n", 6!=5);


    // Logical Operators
    // && -> AND, || -> OR, ! -> NOT
    printf("%d \n", 4>2 && 3>1);
    printf("%d \n", 4>2 && 3>5);
    printf("%d \n", 4>2 || 3>5);
    printf("%d \n", !(4>2));


    // Operator Precedence
    // 1. ! 
    // 2. *, /, %,
    // 3.  +, -
    // 4. <, <=, >, >= Relational
    // 5. ==, !=
    // 6. && Logical
    // 7. ||
    // 8. =


    // Assignment Operators
    printf("Assignment Operators \n");
    int m = 5;
    int n = 3;
    m-=n; // m = m -n
    printf("%d \n", m);

    m+=5; // m = m+5
    printf("%d \n", m);

    n*=2;
    printf("%d \n", n);

    n/=3;
    printf("%d \n", n);

    n-=m;
    printf("%d \n", n);

    // write a program to check if number divisible by 2 or not.
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d \n", num%2==0);

    printf("%d \n", 7^7);

  
    return 0;
}