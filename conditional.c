#include <stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    // scanf("%d ", &age); this is mistake due to space 

    if(age>=18){
        printf("Adult \n");
        printf("They can vote \n");
        printf("They can drive. \n");
    }
    else if(age>13 && age<18){
        printf("Teenager \n");
    }
    // we can directly write any single statement withou using curly braces but prefer to use curly braces to maintain the consistency.
    else 
        printf("Child \n");
    printf("Thank you \n");

    // Ternary Operators
    // Condition ? doSomething if TRUE: doSomething if FALSE;
    age>=18?printf("Adult \n"): printf("Not Adult \n");


    // switch
    int day;
    printf("Enter day(1-7): ");
    scanf("%d", &day);
    switch (day){
        case 1:
            printf("Monday \n");
            break;
        case 2:
            printf("Tuesday \n");
            break;
        case 3:
            printf("Wednesday \n");
            break;
        case 4:
            printf("Thursday \n");
            break;
        case 5:
            printf("Friday \n");
            break;
        case 6:
            printf("Saturday \n");
            break;
        case 7:
            printf("Sunday \n");
            break;
        default:
            printf("Not a valid day. \n");
    }

    char days;
    printf("Enter day(M,T, W, t,F, S, s ): ");
    scanf("%s", &days);
    switch (days){
        case 'M':
            printf("Monday \n");
            break;
        case 'T':
            printf("Tuesday \n");
            break;
        case 'W':
            printf("Wednesday \n");
            break;
        case 't':
            printf("Thursday \n");
            break;
        case 'F':
            printf("Friday \n");
            break;
        case 'S':
            printf("Saturday \n");
            break;
        case 's':
            printf("Sunday \n");
            break;
        default:
            printf("Not a valid day. \n");
    }

    // switch properties
    // a. Cases can be in any order
    // b. Nested switch (switch inside switch) are allowed.

    int data;
    printf("Enter a number: ");
    scanf("%d", &data);
    if(data>=0){
        printf("Positive number\n");
        if (data%2==0){
            printf("Even Number.\n");
        }
        else{
            printf("Odd Number\n");
        }
    }
    else{
        printf("Negative number\n");
    }

    // write a program to give grades to a student
    int marks;
    printf("Enter your mark: ");
    scanf("%d", &marks);

    if(marks<30){
        printf("C grade\n");
    }
    else if(marks>=30 && marks<70){
        printf("B grade\n");
    }
    else if(marks >=70 && marks<90){
        printf("A grade\n");
    }
    else if(marks >=90 && marks<=100){
        printf("A+ grade\n");
    }
    else{
        printf("Wrong value for marks.\n");
    }
    
    int e =2;
    if(e=1){ // try to put e=0 and see the result.
        printf("e is equal to 1.\n");
    }
    else{
        printf("e is not equal to 1.\n");
    }


    int k=2;
    if(k==1){
        printf("k is equal to 1.\n");
    }
    else{
        printf("k is not equal to 1.\n");
    }

    // Write a program to find if a character entered by user is upper case or not
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);

    while (getchar() != '\n');

    if(ch>='A' && ch <='Z' ){
        printf("Uppercase \n");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase.\n");
    }
    else{
        printf("Not english letter.\n");
    }

    return 0;
}