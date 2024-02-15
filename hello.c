# include <stdio.h> // preprocessor directive

// single line comment

/*
 multiple line 
comment 
is written inside 
the slash and 
asteriks.
*/

int main(){
    printf("Hello World of C programming Language.\n");
    printf("Hello World of C programming Language.\n");
    int number = 25;
    float pi= 3.14;
    char star ='*';

    int a= 20;
    int A= 40;

    char _ans = 'A';
    float final_price = 299.99;


    // integer constants -> 1, -1, 2, -2, 0

    //  real constants -> 1.0, -1.0, 2.0, -2.0, 3.14, -2.4

    // character constants ->are always written inside the single quote:  'a', 'A', '#', '*'


    printf("number is %d\n", number); // integers
    printf("final_price is %f\n", final_price); // reals
    printf("_ans is %c\n", _ans); // characters

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("your age is: %d\n", age);


    int x,y;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);

    printf("The sum of x and y is : %d \n", x+y);

    float side;
    printf("Side length: ");
    scanf("%f", &side);
    printf("The area of this side is : %f\n", side*side);

    float radius;
    printf("Radius of circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is : %f\n", 3.14*radius*radius);

    return 0;
}