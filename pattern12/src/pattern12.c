/*
 ============================================================================
 Name        : pattern12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++){
			printf("%d",j);/* prints !!!Hello World!!! */
		}
			printf("\n")
	}
	return EXIT_SUCCESS;
}
