// Chapter - 1(variables,datatypes,input+output)

// Write a program to calculate area of a square. (side is given)
// Practice no - 1
// -------------------------
/*
#include<stdio.h>
int main(){
    float side;
    printf("enter side : ");
    scanf("%f", &side);
    printf("Area is : %f", side*side);
   
    return 0;
}
*/

// Write a program to calculate area of a circle. (radius is given)
// Practice - 2
// ----------------------------------
/*
#include<stdio.h>
int main(){
    float pi = 3.1416;
    float radius;
    printf("Enter Radius : ");
    scanf("%f", &radius);
    printf("Area is : %f", pi*radius*radius);
    return 0;
}
*/

// Write a program to calculate perimeter of rectangle. (Take sides a & b from users)
// Practice - 3
// ----------------------------------
// #include<stdio.h>
// int main(){
//     float a,b;
//     printf("enter a : ");
//     scanf("%f", &a);
//     printf("enter b : ");
//     scanf("%f", &b);
//     printf("Perimeter is : %f", 2*(a+b));
//     return 0;
// }

//Take a number(n) from user & output its cube(n*n*n).
// Practice - 4
// ----------------------------------
// #include<stdio.h>
// int main(){
//     float n;
//     printf("enter lenth: ");
//     scanf("%f",&n);
//     printf("Cube area: %f", n*n*n);
//     return 0;
// }


// Chapter - 2(Instruction & operator)

// write a program to print the average of 3 numbers.

// Practice - 1
// ----------------------------------
// #include<stdio.h>
// int main(){
//     float a,b,c,average;
//     a=5;
//     b=6;
//     c=7;
//     average = (a+b+c)/3;
//     printf("3 numbers average: %f",average);
//     return 0;
// }

//write a program to check if given character is digit or not.

// Practice - 2
// ----------------------------------
// #include<stdio.h>
// int main() {
//     char c;

//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (c >= '0' && c <= '9') {
//         printf("This is a digit.\n", c);
//     } else {
//         printf("This is not a digit.\n", c);
//     }
//     return 0;
// }

//write a program to print the smallest number of two.

// Practice - 3
// ----------------------------------
// #include<stdio.h>
// int main() {
//     int a , b;
//     scanf("%d %d" , &a,&b);
//     if (a<b)
//     {
//         printf("Smallest number: %d",a);
//     }
//     else{
//         printf("Smallest number: %d",b);
//     }
//     return 0;
    
// }

// Chapter - 3(Conditional statement)

// Write a program to check if a given number is Armstrong number or not.

// Practice - 1
// ----------------------------------
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num,M,sum,N;
//     sum=0;
//     printf("Enter Number: ");
//     scanf("%d",&num);
//     N=num;
//     while (num>0){
//         M=num%10;
//         sum=sum+pow(M,3);
//         num=num/10;
//     }
//     if (N==sum){
//         printf("%d is a Armstrong Number",N);
//     }
//     else{
//         printf("%d is not a Armstrong Number",N);
//     }
//     return 0;   

// }

// Write a program to check if a given number is a natural number.(Natural numbers start from 1)

// Practice - 2
// ----------------------------------
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num;
//     printf("Enter Number: ");
//     scanf("%d",&num);
//     if(num>0){
//         printf("%d is a natural number",num);
//     }
//     else{
//         printf("%d is not a natural number",num);
//     }
//     return 0;
// }

// Chapter - 4 (loop control statement)

// Search on what a "nested loop" is & print this pattern using it.

// Practice - 1
// ----------------------------------
#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    int i,j;
    ch='*';
    for(i=1;i<=4;i++){
        for(j=1;j<=5;j++){
            printf("%c",ch);
        }
        printf("%c\n",ch);
    }
    return 0;
}

// Chapter - 5 (function & recursion)

// Write two function - one to print "Hello" & second to print "GoodBye"

// practice - 1
// -------------------------------------
// #include<stdio.h>

// void printHello();
// void printGoodBye();

// int main(){
//     printHello();
//     printHello();
//     printHello();
//     printHello();    
//     printGoodBye();
//     printGoodBye();
//     printGoodBye();
//     printGoodBye();
//     return 0;
// }

// void printHello(){
//     printf("Hello!!!\n");
// }
// void printGoodBye(){
//     printf("GoodBye!!!!\n");
// }


// write a function that prints Assalamu Alaikum if user is bangladeshi and bonjour if the user is french
// practice - 2

//#include<stdio.h>

// void bangladesh();
// void frenche();

// int main(){

//     printf("Enter Bangladesh(b) or French(f): ");
//     char ch;
//     scanf("%c" , &ch);
//     if(ch =='b'){
//         bangladesh();
//     }
//     else{

//         frenche();
//     }
//     return 0;

//     // bangladesh();
// }

// void bangladesh(){
//     printf("Assalamu Alaikum\n");
//     // frenche();
// }

// void frenche(){
//     printf("Bonjour");
// }