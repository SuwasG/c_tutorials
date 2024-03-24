#include <stdio.h>
#include <string.h>

int main(){

    // loops-> to repeat some parts of the program.
    // for loop
    /* 
    for(initialisation; condition; updation){
        do something
    }
    */
   for (int i=1; i<=1000; i++){
    // i is iterater or counter. kunai pani kaam lai barambar garney. tracking counter jastai.
    printf("Hello C programming %d \n", i);
   }


   for (int i=1; i<=100; i++){
    printf("%d\n", i);
   }


   for (int i = 10 ; i>=1; i= i-1){
    printf("%d\n", i);
   }

    
    for (int i =0; i<=10; i++){
        printf("%d\n", i);
    }

    // increment operator 
    // ++i(pre-increment.) and i++ (post-increment)
    int i = 1;
    int j = 1;
    printf("i++: %d\n", i++); // first use the value of i and increase. 
    printf("i: %d \n", i);

    printf("j: %d \n", j); 
    printf("++j: %d\n", ++j); // first increase then use the value of i.
    printf("j: %d\n", j);


    // decrement operator.
    int p = 1;
    int q = 1;
    printf("p--: %d\n", p--); // first use the value of p and decrease. 
    printf("p: %d \n", p);

    printf("q: %d \n", q); 
    printf("--q: %d\n", --q); // first decrease then use the value of q.
    printf("q: %d\n", q);


    // Loop counter can be float or even character.
    for (float i = 1.0 ; i<=5.0; i++){
        printf("%f \n", i);
    }
    

    for (char ch='a'; ch<='z'; ch++){
        printf("%c \n", ch);
    }

    char vowels[]="aeiou";
    for (char ch='a'; ch<='z'; ch++){
        if(strchr(vowels, ch)){
            printf("%c \n", ch);
        }
    }

    // infinite loop
    // for (int i = 1; ; i++){
    //     printf("Hello Programming %d \n", i);
    // }


    // while loop
    /*
    while (condition){
        do something
    }
    */
   int b = 1; // declaration
   while(b<=5){ // termination/condition
    printf("Hello While Loop %d \n", b);

    b++; // updation
   }

    //  Print the numbers from 0 to n, if n is given by user
   int userInput ;
   printf("Enter the number: ");
   scanf("%d", &userInput);
   for (int i=0; i<=userInput; i++){
    printf("for-%d\n", i);
   }

   // using while loop
   int c=0;
   while(c<=userInput){
    printf("while-%d \n", c);
    c++;
   }


    // do while loop
    /*
    do{
        do something
    }
    while(condition)
    */

   int d = 1;
   do{
    printf("%d \n", d);
    d++;
   }
   while(d<=5);

   int e = 5;
   do{
    printf("%d \n", e);
    e--;
   }
   while(e>=1);

    //   print the sum of first n natural numbers. Also print them in reverse.
    
    int sum = 0;
    for (int i = 1; i<=userInput; i++){
        sum+=i;
    }
    printf("sum is: %d\n", sum);

    int sum2=0;
    int f=1;
    while (f<=userInput){
        sum2+=f;
        f++;
    }
    printf("sum2 is: %d\n", sum2);

    // reverse the userinput.
    for (int i=userInput; i>=1; i--){
        printf("%d \n", i);
    }

    int sum3=0;
    for (int i=1, j=userInput; i<=userInput && j>=1; i++, j--){
        sum3= sum3+j; // with this we can remove the i.
        printf("%d \n", j);
    }
 

    // Print the table of the number input by user.
    for (int i=1; i<=10; i++){
        printf("%d X %d = %d\n",userInput, i, i*userInput);
    }    

    // break statement. -> exit the loop
    for (int i=1; i<=5; i++){
        if (i==3){
            break;
        }
        printf("%d \n", i);
    }
    printf("end\n");


    // keep taking numbers as input from user until user enters an odd number.
    int usernum;

    do{
        printf("enter number: ");
        scanf("%d", &usernum);
        printf("%d\n", usernum);

        if (usernum%2!=0){
            break;
        }
    }while(1);
    printf("Thank You\n");

    // Keep taking numbers as input from user until user enters a number which is multiple of 7.
    int userseven;
    do{
        printf("enter a number: ");
        scanf("%d", &userseven);
        printf("%d\n", &userseven);
        if(userseven%7==0){
            break;
        }
    }while (1);
    printf("Thank you\n");


    // continue -> skip to next iteration.
    for (int i=1; i<=10; i++){
        if (i==6){
            continue;
        }
        printf("%d\n", i);
    }

    // print all the numbers from 5 to 50.
    for (int i=5; i<=50; i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n", i);
    }

    for (int i=5; i<=50; i++){
        if(i%2!=0){ // odd
            printf("%d\n", i);
        }

    }


    // print the factorial of a number n.
    int factNum;
    printf("Enter a number to find factorial: ");
    scanf("%d", &factNum);
    int fact=1;
    for (int i=1; i<=factNum; i++){
        fact*=i;
    }
  
    printf("Final factorial  upto %d is %d: \n", factNum, fact);


    // Print the reverse of the table for a number n.
    int reverseNum;
    printf("Enter a number to print reverse table: ");
    scanf("%d", &reverseNum);

    for (int i=10; i>=1; i--){
        printf("%d X %d =  %d\n",reverseNum, i, reverseNum*i);
    }

    // calculate the sum of all the numbers between 5 and 50 (including 5 and 50)
    int sum550=0;
    for(int s=5; s<=50; s++){
        sum550+=s;
    }
    printf("The sum of 5 to 50 is: %d\n", sum550);
    

    return 0;

}