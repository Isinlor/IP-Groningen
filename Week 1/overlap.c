/** 
 * File: overlap.c
 * Author: Tomasz Darmetko (email: t.darmetko@student.rug.nl)
 * Date: 11.09.2017
 * Version: v1.0
 *
 * Description:
 * This is a program that first reads from the input the coordinates of 
 * the two corner points of a rectangle, and then reads the two corner 
 * points of a second rectangle. It assume that the corner points 
 * are grid points, i.e. their coordinates are integers. The program 
 * prints on the screen whether the two rectangles overlap.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
	
	int noHorizontalOverlap, horizontalOverlap;
	int noVerticalOverlap, verticalOverlap;
	
	scanf("%d %d %d %d", &Ax, &Ay, &Bx, &By);
	scanf("%d %d %d %d", &Cx, &Cy, &Dx, &Dy);

	noHorizontalOverlap =
		(Ax < Cx && Ax < Dx && Bx < Cx && Bx < Dx) ||
		(Ax > Cx && Ax > Dx && Bx > Cx && Bx > Dx);
		
	noVerticalOverlap =
		(Ay < Cy && Ay < Dy && By < Cy && By < Dy) ||
		(Ay > Cy && Ay > Dy && By > Cy && By > Dy);
		
	horizontalOverlap = !noHorizontalOverlap;
	verticalOverlap = !noVerticalOverlap;
	
	if(horizontalOverlap && verticalOverlap) {
		
		printf("overlap");
		
	} else {
		
		printf("no overlap");
		
	}
	
	return 0;

}
