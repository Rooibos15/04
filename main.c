#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec;
	
	printf("input seconds : ");
	scanf("%i", &sec);
	
	printf("The time for %i second is %i : %i : %i\n", sec, sec/3600, (sec%3600)/60, sec%60);
	
	system("PAUSE"); 
	return 0;
}
