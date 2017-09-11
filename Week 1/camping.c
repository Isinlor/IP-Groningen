/** 
 * File: camping.c
 * Author: Tomasz Darmetko (email: t.darmetko@student.rug.nl)
 * Date: 11.09.2017
 * Version: v1.0
 *
 * Description:
 * The Jones family has set up the tent on a camping site. It’s hot and
 * for the kids they want to fill a bath with water. Father has two 
 * jerrycans, each having a volume of 12 litres. He is strong enough to 
 * walk with the jerrycans to the nearest water tap and carry them back 
 * completely filled.
 * 
 * This is a program that asks how many litres of water is needed to 
 * fill the bath. It assume that this number is an integer. The program 
 * must print how often Dad must walk up and down to fill the bath.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	const int waterInOneCycle = 24; // in liters
  
	int waterNeeded, cyclesToDo;
	
	scanf("%d", &waterNeeded);
	
	cyclesToDo = waterNeeded / waterInOneCycle;
  
    // check if water can be carried in full cycle
	if(waterNeeded % waterInOneCycle != 0) {
		
		// add one more cycle for lef over water
		cyclesToDo++;
		
	}
	
	printf("%d", cyclesToDo);
  
	return 0;

}
