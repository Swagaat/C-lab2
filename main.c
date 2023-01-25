//#include<stdio.h>  
//int main()    
//{    
//int d, e;      
//printf("Enter the value for d and e: ",d,e);
 // scanf("%d %d", &d,&e);
 //  d=d+e;  
 //  e=d-e;  
// d=d-e;   
//printf("\n The Value after swap d=%d e=%d",d,e);    
//return 0;  
//}   


//#include <stdio.h>

//int main() {

 // int n, rev = 0, rem;

// printf("Enter a number to reverse: ");
//  scanf("%d", &n);

//  while (n != 0) {
//    rem = n % 10;
//    rev = rev * 10 + rem;
//    n /= 10;
//  }

//  printf("Reversed number = %d", rev);

 // return 0;
//}

//#include <stdio.h>
 
//int main()
//{
 //   int A, B, C;
 
//    printf("Enter the numbers A, B and C: ");
//    scanf("%d %d %d", &A, &B, &C);
 
//    if (A >= B && A >= C)
//        printf("%d is the largest number.", A);
 
//    if (B >= A && B >= C)
//        printf("%d is the largest number.", B);
 
//    if (C >= A && C >= B)
//        printf("%d is the largest number.", C);
 
//    return 0;
//}

//#include <stdio.h>

//int main()
//{
 //   int yr;
//    printf ("Enter a year");
//    scanf ("%d", &yr);

//    if (yr%4 == 0 && yr%100 == 0 && yr%400 == 0)
//        printf("It is LEAP YEAR.");

//    else if (yr%4==0 && yr%100!=0)
//        printf("It is LEAP YEAR.");
//    else
//        printf ("It is NOT LEAP YEAR.");

//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//int a, b;
//printf("Read the integer from keyboard-");
//scanf("%d",&a);
//printf("\nInteger value = %d ",a);
//a<<=3;
//b=a;
//printf("\nThe left shifted data is = %d ",b);
//return 0;
//}

//#include <stdio.h> 
   
//int main() {  
//    char day;
//    printf("Enter day (m for Monday, t for Tuesday, w for Wednesday, h for Thursday, f for Friday, s for Saturday, u for Sunday): ");  
//    scanf(" %c", &day);  
//    switch(day){
//        case 'u' : 
//        printf("Sunday\n");
//            break;
//        case 'm' : 
//        printf("Monday\n");
//            break;
//        case 't' :
//        printf("Tuesday\n");
 //           break;
//        case 'w' :
 //       printf("Wednesday\n");
//            break;
//        case 'h' :
//        printf("Thursday\n");
//            break;
//        case 'f' :
 //       printf("Friday\n");
//            break;
//        case 's' :
//        printf("Saturday\n");
//            break;
//        default: printf("Invalid Input !!!!\n");          
//    }
  
//    return 0;  
//}

//#include <stdio.h>

//int main() {

//  char op;
//  double first, second;
//  printf("Enter an operator (+, -, *, /): ");
//  scanf("%c", &op);
//  printf("Enter two operands: ");
//  scanf("%lf %lf", &first, &second);

//  switch (op) {
//     case '+':
//      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
 //     break;
//    case '-':
//       printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
//      break;
//    case '*':
//      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
//      break;
//    case '/':
//      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
//      break;
    // operator doesn't match any case constant
//    default:
//      printf("Error! operator is not correct");
//  }

//  return 0;
//}

//#include <stdio.h>
//int main() {
//    int n, i, sum = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    i = 1;

//    while (i <= n) {
//        sum += i;
//        ++i;
//    }

//    printf("Sum = %d", sum);
//    return 0;
//}

#include <stdio.h>

int main() {

    int i = 1, j, k, n = 3;

    // upper half of the diamond
    while (i <= n) {

        // loop to print space
        k = n;
        while (k > i) {
            printf(" ");
            k--;
        }

        // loop to print star
        j = 1;
        while (j <= (2*i - 1)) {
            printf("*");
            j++;
        }

        // move to the next line
        printf("\n");
        i++;
    }

    // lower half of the diamond
    i = n-1;
    while (i >= 1) {

        // loop to print space
        k = n;
        while (k > i) {
            printf(" ");
            k--;
        }

        // loop to print star
        j = 1;
        while (j <= (2*i - 1)) {
            printf("*");
            j++;
        }

        // move to the next line
        printf("\n");
        i--;
    }

    return 0;
}