/** 
 * File: palindrom.c
 * Author: Tomasz Darmetko (email: t.darmetko@student.rug.nl)
 * Date: 11.09.2017
 * Version: v1.0
 *
 * Description:
 * A palindromic number is a number that remains the same when its 
 * digits are reversed. For example, 11 and 1221 are palindromic 
 * numbers. This is a program that reads a positive integer n from the 
 * input (it assume that 10 ≤ n < 1000), and outputs whether the 
 * number is palindromic or not.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int number; // 10 ≤ n < 1000
	int isPalindromic;
	
	scanf("%d", &number); 
	
	if(number > 9 && number < 100) {
		
		isPalindromic = number % 10 == number / 10;
		
	} else if(number < 1000) {
		
		isPalindromic = number % 10 == number / 100;
		
	} else {
		
		printf("Wrong number!");
		return 1;
		
	}
	
	if(isPalindromic) {
		
		printf("%d is a palindromic number.\n", number);
		
	} else {
		
		printf("%d is not a palindromic number.\n", number);
		
	}
	
	return 0;

}
