/** 
 * File: order.c
 * Author: Tomasz Darmetko (email: t.darmetko@student.rug.nl)
 * Date: 11.09.2017
 * Version: v1.0
 *
 * Description:
 * This is a program that reads four integers from the input and outputs
 * them in ascending order.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int swap(int *a, int *b) {
	
	int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
	
	return 1;
	
}

int main() {
	
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	a > b && swap(&a, &b);
	
	c > d && swap(&c, &d);
	
	a > c && swap(&a, &c);
	
	b > d && swap(&b, &d);
	
	b > c && swap(&b, &c);
	
	printf("%d %d %d %d\n", a, b, c, d);
	
	return 0;

}
