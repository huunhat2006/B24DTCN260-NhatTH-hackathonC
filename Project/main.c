#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc,char *argv[]) {

int choose,location;
int n=4;



while (choose!=4) {
	printfFunction();
	printf("Lua chon cua ban:");
	scanf("%d",&choose);
	switch (choose) {
		case 1:
			printfCategory(category,n);
			break;
		case 2:
			n++;
			addCategory(category,location,n);
			break;
		case 3:
			break;
		case 4:
			break;
	}
}
	
	return 0;
}
