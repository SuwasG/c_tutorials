# include <stdio.h>
#include <math.h>


void printHello(); // declaration or prototype
void printGoodbye();
void printNamaste();
void printBonjour();

int sum(int a, int b);
void printTable(int x);

void calculatePrice(float p);

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);


int main(){

    // Function: a block of code that performs particular task.
    // Function can be used multiple times so increase code Reusability.
    // Functions take argument -> perform particular task -> Return Result.

    // process(steps)
    // 1. Function Prototype/ Function declaration: tell the compiler eg: void printHello(); void will not return anything at the end but it will perform the task.
    // 2. Function Defination: Do the work. eg: void printHello(){printf("Hello");}
    // 3. Function Call: Use the work. int main(){printHello(); return 0;}

    printHello(); // function call
    printGoodbye(); // function call
    printHello();

    printf("Enter your nationality: i for indian and f for french: ");
    char ch;
    scanf("%c", &ch);
    if (ch=='i'){
        printNamaste();
    }
    else{
        printBonjour();
    }


    // Properties of function: 
    // Execution always starts from main.
    // A function gets called directly or indirectly from main.
    // There can be mutliple functions in a program.

    // Types of functions
    // 1. Library functions - Special functions inbuilt in C. eg: scanf(), printf()
    // 2. User-defined functions -> declared and defined by programmer.


    // Passing arguments 
    // Functions can take value(parameter) and give some value(return value)
    int a, b;
    printf("Enter first number(a): ");
    scanf("%d", &a);
    printf("Enter second number(b): ");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("Sum of %d and %d is %d\n",a,b ,s);

    // printTable()
    int p;
    printf("Enter a number to print table: ");
    scanf("%d", &p);

    printTable(p); // argument or actual parameter

    float price=100.0;
    calculatePrice(price);
    printf("Price is: %f\n", price);

    int num=5;
    printf("%f\n", pow(num,2));


    // areas
    float length = 5.0;
    float breadth=10.0;
    printf("Area of rectangle is: %f\n", rectangleArea(length,breadth));

    float radius = 7;
    printf("Area of circle is : %f\n", circleArea(radius));

    float side = 6;
    printf("Area of square is: %f\n", squareArea(side));

    return 0;
}

// function defination
void printHello(){ 
    printf("Hello Sansar!\n");
    printf("Hello Nepal\n");
}
void printGoodbye(){
    printf("Good Bye \n");
}


// write a function that prints Namaste if user is Indian & Bonjour if the user is French.
void printBonjour(){
    printf("Bonjour \n");
}

void printNamaste(){
    printf("Namaste \n");
}

int sum(int a, int b){
    return a+b;
}

void printTable(int x){ // formal parameter or parameter. value for x comes from calling function. in our example it's p.
    printf("Table of %d is given below:\n", x);
    for (int i=1; i<=10; i++){
        printf("%d X %d = %d\n",x, i, i *x);
    }
}



// Argument vs parameter

// Argument are values that are passed in function call.
// Argument are used to send value.
// Argument are actual parameter.

// Parameters are values in function declarations and definition.
// Parameters are used to recieve value.
// Parameters are formal parameters.


// NOTE: 
// -> Function can only return one value at a time.
// -> Changes to parameters in function don't change the values in calling function. Because a copy of argument is passed to the functions.

void calculatePrice(float p){
    p=p+(0.13*p);
    printf("Final Price is: %f\n", p);
}


// Use library function to calculate the square of a number given by user.

// area of square
float squareArea(float side){
    return side * side;
}

// area of circle
float circleArea(float radius){
    return 3.14 * radius*radius;
}


// area of rectangle
float rectangleArea(float a, float b){
    return a*b;
}