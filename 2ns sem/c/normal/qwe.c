#include <stdio.h>
//#include <string.h>
int main()
{
	char a;
	char s1[100],s2[100];
	printf("enter the string :");
	scanf(" %c",&a);
	scanf("\n%[^\n]s",&s1);	
	scanf("\n%[^\n]s",&s2);
	printf("%c",a);
	printf("\n%s",s1);
	printf("\n%s",s2);
	return 0;
}

// 4. Write a program in C to read 10 numbers from keyboard and find their sum and average. Go to the editor
// Test Data :
// Input the 10 numbers :	
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000
// Click me to see the solution


// 13. Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Go to the editor
//    1 
//   2 3 
//  4 5 6 
// 7 8 9 10 
// Click me to see the solution
// 14. Write a program in C to make such a pattern like a pyramid with an asterisk. Go to the editor

//    * 
//   * * 
//  * * * 
// * * * *
// Click me to see the solution

// 17. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row. Go to the editor

//    1
//   2 2
//  3 3 3
// 4 4 4 4
// Click me to see the solution

 
// 19. Write a program in C to display the n terms of harmonic series and their sum. Go to the editor
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
// Sum of Series upto 5 terms : 2.283334
// Click me to see the solution

// 20. Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks. Go to the editor

//    *
//   ***
//  *****
// Click me to see the solution

// 21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. Go to the editor
// Test Data :
// Input the number or terms :5
// Expected Output :
// 9 99 999 9999 99999
// The sum of the saries = 111105
// Click me to see the solution

// 22. Write a program in C to print the Floyd's Triangle. Go to the editor

// 1 
// 01
// 101 
// 0101 
// 10101
// Click me to see the solution
// 23. Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]. Go to the editor
// Test Data :
// Input the value of x :3
// Input number of terms : 5
// Expected Output :
// The sum is : 16.375000
// Click me to see the solution

// 24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]. Go to the editor
// Test Data :
// Input the value of x :2
// Input number of terms : 5
// Expected Output :
// The values of the series:
// 2
// -8
// 32
// -128
// 512
// The sum = 410
// Click me to see the solution

// 25. Write a program in C to display the n terms of square natural number and their sum. Go to the editor
// 1 4 9 16 ... n Terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// The square natural upto 5 terms are :1 4 9 16 25
// The Sum of Square Natural Number upto 5 terms = 55
// Click me to see the solution

// 26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. Go to the editor
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1 + 11 + 111 + 1111 + 11111
// The Sum is : 12345
// Click me to see the solution

// 27. Write a c program to check whether a given number is a perfect number or not. Go to the editor
// Test Data :
// Input the number : 56
// Expected Output :
// The positive divisor : 1 2 4 7 8 14 28
// The sum of the divisor is : 64
// So, the number is not perfect.
// Click me to see the solution

// 28. Write a c program to find the perfect numbers within a given number of range. Go to the editor
// Test Data :
// Input the starting range or number : 1
// Input the ending range of number : 50
// Expected Output :
// The Perfect numbers within the given range : 6 28
// Click me to see the solution

// 29. Write a C program to check whether a given number is an armstrong number or not. Go to the editor
// Test Data :
// Input a number: 153
// Expected Output :
// 153 is an Armstrong number.
// Click me to see the solution

// 30. Write a C program to find the Armstrong number for a given range of number. Go to the editor
// Test Data :
// Input starting number of range: 1
// Input ending number of range : 1000
// Expected Output :
// Armstrong numbers in given range are: 1 153 370 371 407
// Click me to see the solution

// 31. Write a program in C to display the pattern like a diamond. Go to the editor

//     *
//    *** 
//   *****
//  *******
// ********* 
//  *******
//   *****
//    ***
//     * 
// Click me to see the solution

// 32. Write a C program to determine whether a given number is prime or not. Go to the editor
//  Test Data :
// Input a number: 13
// Expected Output :
// 13 is a prime number.
// Click me to see the solution

// 33. Write a C program to display Pascal's triangle. Go to the editor
//  Test Data :
// Input number of rows: 5
// Expected Output :

//         1
//       1   1 
//     1   2   1 
//   1   3   3   1
// 1   4   6   4   1 
// Click me to see the solution
// 34. Write a program in C to find the prime numbers within a range of numbers. Go to the editor
// Test Data :
// Input starting number of range: 1
// Input ending number of range : 50
// Expected Output :
// The prime number between 1 and 50 are :
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
// Click me to see the solution

// 35. Write a program in C to display the first n terms of Fibonacci series. Go to the editor
// Fibonacci series 0 1 2 3 5 8 13 .....
// Test Data :
// Input number of terms to display : 10
// Expected Output :
// Here is the Fibonacci series upto to 10 terms :
// 0 1 1 2 3 5 8 13 21 34
// Click me to see the solution

// 36. Write a program in C to display the such a pattern for n number of rows using a number which will start with the number 1 and the first and a last number of each row will be 1. Go to the editor

//   1
//  121
// 12321
// Click me to see the solution
// 37. Write a program in C to display the number in reverse order. Go to the editor
// Test Data :
// Input a number: 12345
// Expected Output :
// The number in reverse order is : 54321
// Click me to see the solution

// 38. Write a program in C to check whether a number is a palindrome or not. Go to the editor
// Test Data :
// Input a number: 121
// Expected Output :
// 121 is a palindrome number.
// Click me to see the solution

// 39. Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9. Go to the editor
// Expected Output :
// Numbers between 100 and 200, divisible by 9 :
// 108 117 126 135 144 153 162 171 180 189 198
// The sum : 1683
// Click me to see the solution

// 40. Write a C Program to display the pattern like pyramid using the alphabet. Go to the editor

//         A
//       A B A 
//     A B C B A
//   A B C D C B A 
// Click me to see the solution

// 41. Write a program in C to convert a decimal number into binary without using an array. Go to the editor
// Test Data :
// Input a decimal number: 25
// Binary number equivalent to said decimal number is: 0000000000000000000000000001 1001
// Click me to see the solution

// 42. Write a program in C to convert a binary number into a decimal number without using array, function and while loop. Go to the editor
// Test Data :
// Input a binary number :1010101
// Expected Output :
// The Binary Number : 1010101
// The equivalent Decimal Number : 85
// Click me to see the solution

// 43. Write a C program to find HCF (Highest Common Factor) of two numbers. Go to the editor
// Test Data :
// Input 1st number for HCF: 24
// Input 2nd number for HCF: 28
// Expected Output :
// HCF of 24 and 28 is : 4
// Click me to see the solution

// 44. Write a program in C to find LCM of any two numbers using HCF. Go to the editor
// Test Data :
// Input 1st number for LCM: 15
// Input 2nd number for LCM: 20
// Expected Output :
// The LCM of 15 and 20 is : 60
// Click me to see the solution

// 45. Write a program in C to find LCM of any two numbers. Go to the editor
// Test Data :
// Input 1st number for LCM: 15
// Input 2nd number for LCM: 20
// Expected Output :
// The LCM of 15 and 20 is : 60
// Click me to see the solution

// 46. Write a program in C to convert a binary number into a decimal number using math function. Go to the editor
// Test Data :
// Input the binary number :1010100
// Expected Output :
// The Binary Number : 1010100
// The equivalent Decimal Number is : 84
// Click me to see the solution

// 47. Write a C program to check whether a number is a Strong Number or not. Go to the editor
// Test Data :
// Input a number to check whether it is Strong number: 15
// Expected Output :
// 15 is not a Strong number.
// Click me to see the solution

// 48. Write a C program to find Strong Numbers within a range of numbers. Go to the editor
// Test Data :
// Input starting range of number : 1
// Input ending range of number: 200
// Expected Output :
// The Strong numbers are :
// 1 2 145
// Click me to see the solution

// 49. Write a c program to find out the sum of an A.P. series. Go to the editor
// Test Data :
// Input the starting number of the A.P. series: 1
// Input the number of items for the A.P. series: 10
// Input the common difference of A.P. series: 4
// Expected Output :
// The Sum of the A.P. series are :
// 1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190
// Click me to see the solution

// 50. Write a program in C to convert a decimal number into octal without using an array. Go to the editor
// Test Data :
// Enter a number to convert : 79
// Expected Output :
// The Octal of 79 is 117.
// Click me to see the solution

// 51. Write a program in C to convert an octal number to a decimal without using an array. Go to the editor
// Test Data :
// Input an octal number (using digit 0 - 7) :745
// Expected Output :
// The Octal Number : 745
// The equivalent Decimal Number : 485
// Click me to see the solution

// 52. Write a program in c to find the Sum of GP series. Go to the editor
// Test Data :
// Input the first number of the G.P. series: 3
// Input the number or terms in the G.P. series: 5
// Input the common ratio of G.P. series: 2
// Expected Output :
// The numbers for the G.P. series:
// 3.000000 6.000000 12.000000 24.000000 48.000000
// The Sum of the G.P. series : 93.000000
// Click me to see the solution

// 53. Write a program in C to convert a binary number to octal. Go to the editor
// Test Data :
// Input a binary number :1001
// Expected Output :
// The Binary Number : 1001
// The equivalent Octal Number : 11
// Click me to see the solution

// 54. Write a program in C to convert an octal number into binary. Go to the editor
// Test Data :
// Input an octal number (using digit 0 - 7) :57
// Expected Output :
// The Octal Number : 57
// The equivalent Binary Number : 101111

// Click me to see the solution

// 55. Write a program in C to convert a decimal number to hexadecimal. Go to the editor
// Test Data :
// Input any Decimal number: 79
// Expected Output :
// The equivalent Hexadecimal Number : 4F
// Click me to see the solution

// 56. Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers. Go to the editor
// Test Data :
// Input a positive integer: 16
// Expected Output :
// 16 = 3 + 13
// 16 = 5 + 11
// Click me to see the solution

// 57. Write a program in C to print a string in reverse order. Go to the editor
// Test Data :
// Input a string to reverse : Welcome
// Expected Output :
// Reversed string is: emocleW
// Click me to see the solution

// 58. Write a C program to find the length of a string without using the library function. Go to the editor
// Test Data :
// Input a string : welcome
// Expected Output :
// The string contains 7 number of characters.
// So, the length of the string welcome is : 7
// Click me to see the solution

// 59. Write a program in C to check Armstrong number of n digits. Go to the editor
// Test Data :
// Input an integer : 1634
// Expected Output :
// 1634 is an Armstrong number