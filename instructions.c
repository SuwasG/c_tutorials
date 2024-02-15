#include<stdio.h>
#include<math.h>

int main(){
    printf("Hello My Instructions\n");
    // instructions: these are the statements in a program.
    // there are mainly 3 types of instructions: 
    /*
    1. Type declaration Instructions.
    2. Arithmetic Instructions.
    3. Control Instructions.
    */

   // type declaration instructions  -> declare variable before using it.
   int x = 22; 
   float y = 22.22;
   int z = x+2;
   printf("Hello\n");
   
   int p,q,r;
   p=q=r=5;

   int oldAge = 25;
   int years = 2 ;
   int newAge = oldAge + years;
   printf("%d\n", newAge);


   // arithmetic instructions
   // a+ b here a and b are called operands and + is operator.
   int a, b;
   a = 8;
   b = 5;

   // NOTE: single variable on the LHS
   //   b+c =a; this is wrong or invalid as on LHS there are more 1 operands.
   // a= bc is invalid 
   // a = b^c is also invalid.
   int sum = a+b;
   int mul = a*b;
   int sub = a-b;
   float div = a/b;
   int mod = a%b;
    printf("sum: %d\n", sum);
    printf("mul: %d\n", mul);
    printf("sub: %d\n", sub);
    printf("div: %f\n", div);
    printf("mod: %d\n", mod);
    int exp = pow(5,3);
    printf("%d\n", exp);


    // Modular operator % (Modulo)
    // returns the remainder for int.
    // does not work for float values.
    printf("%d\n", -3%2);
    printf("%d\n", 16%2);
    printf("%d\n", 16%3);


   return 0;


}
