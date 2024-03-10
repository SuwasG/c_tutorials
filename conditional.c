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
        

    return 0;
}