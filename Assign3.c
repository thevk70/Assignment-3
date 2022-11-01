                    /* Assignment-3 */
//1. Write a program to check whether a given number is positive or non positive
//   #include <stdio.h>
//   int main()
//   {
//     int num;
//     printf("Enter a Number :: ");
//     scanf("%d",&num);
//     if (num > 0)
//     {
//         printf("%d is a positive number.",num);
//     }
//     else
//     {
//         printf("%d is a negative number.",num);
//     }
//     return 0;
//   }

//2. Write a program to check whether a given number is divisible by 5 or not
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     if (num%5==0)
//     {
//         printf("%d is divisible by 5.",num);
//     }
//     else
//     {
//        printf("%d is not divisible by 5.",num);
//     }

//     return 0;
// }

//3. Write a program to check whether a given number is an even number or an odd number.
//   #include <stdio.h>
//   int main()
//   {
//       int num;
//       printf("Enter a number:: ");
//       scanf("%d",&num);
//       if (num%2)
//       {
//           printf("%d is odd.",num);
//       }
//       else
//       {
//       printf("%d is even.",num);
//       }
//   return 0;
//   }

//4. Write a program to check whether a given number is an even number or an odd number without using % operator.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     if (num&1)
//     {
//         printf("%d is odd.",num);
//     }
//     else
//     {
//         printf("%d is even.",num);
//     }
//     return 0;
// }

//5. Write a program to check whether a given number is a three digit number or not.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     if (num>99 && num<1000)
//     {
//         printf("%d is three digit number.",num);
//     }
//     else
//     {
//         printf("%d is not three digit number.",num);
//     }

//     return 0;
// }

//6. Write a program to print greater between two numbers. Print one number if both are the same.
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two numbers:: ");
//     scanf("%d %d",&a,&b);
//     if (a>b)
//     {
//         printf("%d is greater",a);
//     }
//     else if (a==b)
//     {
//         printf("%d",a);
//     }
//     else
//     {
//         printf("%d is greater.",b);
//     }

//     return 0;
// }

//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots


// 8. Write a program to check whether a given year is a leap year or not.
// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year:: ");
//     scanf("%d",&year);
//     if ((year%4==0) && (year%400==0) || (year%100!=0))
//     {
//         printf("%d is a Leap year.",year);
//     }
//     else
//     {
//         printf("%d is not a Leap year.",year);
//     }
    
//     return 0;
// }

// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter three numbers:: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a>b && a>c)
//     {
//         printf("%d is greater among %d,%d and %d",a,a,b,c);
//     }
//     else if (b>a && b>c)
//     {
//         printf("%d is greater among %d,%d and %d",b,a,b,c);
//     }
//     else if (c>a && c>b)
//     {
//         printf("%d is greater among %d,%d and %d",c,a,b,c);
//     }
//     else if (a==b==c)
//     {
//         printf("%d",a);
//     }
    

//     return 0;
// }

// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
// #include <stdio.h>
// int main()
// {
//     float cp,sp,prof,loss;
//     printf("Enter cost price:: ");
//     scanf("%f",&cp);
//     printf("Enter selling price:: ");
//     scanf("%f",&sp);
//     if (sp>cp)
//     {
//         prof = sp-cp;
//         printf("Profit percent = %.2f",(prof/cp)*100);
//     }
//     else
//     {
//         loss = cp-sp;
//         printf("Loss percent = %.2f",(loss/cp)*100);
//     }
//     return 0;
// }

// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
// #include <stdio.h>
// int main()
// {
//     int hindi,sans,maths,eng,sci;
//     printf("Enter the marks of hindi,sanskrit,maths,english and science:: ");
//     scanf("%d %d %d %d %d",&hindi,&sans,&maths,&eng,&sci);
//     if ((hindi > 32) && (sans > 32) && (maths > 32) && (eng > 32) && (sci > 32))
//     {
//         printf("Congats! Passed.");
//     }
//     else
//     {
//         printf("Better Luck for Next Time. Failed.");
//     }
//     return 0;
// }

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
// #include <stdio.h>
// int main()
// {
//     char ch = 'G';
//     if (ch >= 'a' && ch <= 'z')
//     {
//         printf("%c is in lowercase.",ch);
//     }
//     else if (ch >= 'A' && ch <= 'Z')
//     {
//         printf("%c is in Uppercase.",ch);
//     }
//     else
//     {
//         printf("Invalid alphabet.");
//     }
//     return 0;
// }

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     if (num%3==0 && num%2==0)
//     {
//         printf("%d is divisible by 3 and 2.",num);
//     }
//     else
//     {
//         printf("%d is not divisible by 3 and 2.",num);
//     }

//     return 0;
// }
// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
//  #include <stdio.h>
//  int main()
//  {
//      int num;
//      printf("Enter a number:: ");
//      scanf("%d",&num);
//      if (num%3==0 || num%7==0)
//      {
//          printf("%d is divisible by 3 or 7.",num);
//      }
//      else
//      {
//          printf("%d is not divisible by 3 or 7.",num);
//      }
//      return 0;
//  }

// 15. Write a program to check whether a given number is positive, negative or zero.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     if (num > 0)
//     {
//         printf("Positive");
//     }
//     else if (num < 0)
//     {
//         printf("Negative");
//     }
//     else if (num==0)
//     {
//         printf("Zero");
//     }
    

//     return 0;
// }
// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
//  #include <stdio.h>
//  int main()
//  {
//      char ch;
//      printf("Enter a character:: ");
//      scanf("%c",&ch);
//      if (ch >= 'a' && ch <= 'z')
//      {
//          printf("%c is in lowercase.",ch);
//      }
//      else if (ch >= 'A' && ch <= 'Z')
//      {
//          printf("%c is in Uppercase.",ch);
//      }
//      else
//      {
//          printf("Special character or digit.");
//      }
//      return 0;
//  }

// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
//  #include <stdio.h>
// int main()
// {
//     int a,b,c;
//      printf("Enter all three sides of triangle :: ");
//     scanf("%d %d %d",&a,&b,&c);
//     if (a+b > c || a+c > b || b+a > c || b+c > a || c+a > b || c+b > a)
//     {
//        printf("Valid");
//     }
//     else
//     printf("Invalid");
//     return 0;
// }
// 18. Write a program which takes the month number as an input and display number of
// days in that month.
//  #include <stdio.h>
// int main()
// {
//     int mon;
//     printf("Enter month number :: ");
//     scanf("%d",&mon);
//     if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
//     {
//       cout << "31 Days";
//     }
//     else if (mon == 2)
//     {
//         printf("28/29 Days");
//     }
//     else
//     printf("30 Days");
//     return 0;
// }