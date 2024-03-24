#include <stdio.h>

void printHello(int count);
int sum(int n);
int fact(int num);
float convertTemp(float cel);
float calculatePercentage(float science, float math, float english);
int fib(int number);

int main(){
    // Recursion: When a function calls itself, it is called a Recursion.
    
    printHello(10);

    printf("sum of 1 to 10 is: %d\n", sum(10));

    printf("factorial of 5 is: %d\n", fact(5));

    float far = convertTemp(-40);
    printf("far : %f\n", far);

    // percentage
    float sc  = 98.0;
    float math= 95.0;
    float english= 99.0;

    printf("Percentage is : %f\n", calculatePercentage(sc, math, english));

    // fibonacci
    printf("fibonacci: %d\n", fib(6));

    return 0;

}

// print "Hello World" 5 times.
// jun kaam loop bata hunxa, tyo recursion baata pani hunxa and vice-versa depends on needs.
// recursive function
void printHello(int count){
    if (count ==0){
        return;
    }
    printf("Hello World %d\n", count);
    printHello(count-1);
}


// sum of first n natural numbers.
int sum(int n){
    if (n==1){ // base case
        return 1;
    }
    int sumNm1= sum(n-1) ;  // sum of 1 to n.
    int sumN = sumNm1 + n;
    return sumN;
}

// factorial of n
int fact(int num){
    if(num==0){
        return 1;
    }
    int factNm1=fact(num-1);
    int factN= factNm1*num;
    return factN;
}


// Properties of recursion:
// Anything that can be done with Iteration, can be done with recursion and vice-versa.
// Recursion can sometimes give the most simple solution.
// Base cas is the condition which stops the recursion.
// Iteration has infinite loop and Recursion has stack overflow.


// function to convert celcius to fahrenheit.
float convertTemp(float cel){
    float far = cel * (9.0/5.0) + 32;
    return far;
}

// physics all formula can be write using function.

// Write a function to calculate Percentage of a student from Marks in Scienc, Math, English.
float calculatePercentage(float science, float math, float english){
    return (science+math+english)/3.00;
}

// Function to print n terms of the fibonacci sequence.
int fib(int number){
    if (number==0 || number==1){
        if (number==0){
            return 0;
        }
        if(number==1){
            return 1;
        }
    }
    int fibNm1=fib(number-1);
    int fibNm2=fib(number-2);
    int fibN=fibNm1+fibNm2;
    // printf("fibonacci of %d is: %d\n", number, fibN);
    return fibN;
}