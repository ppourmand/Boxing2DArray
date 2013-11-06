#include <stdio.h>

// put whatever the fuck values you want
#define ROW 3
#define COL 10

// Visualizes a 2d array with boxes and shit
void printArrayBoxes(int arr[ROW][COL]){
	int i;
	int j;
	int k;
	
	for(i = 0; i < ROW;i++){
		for(k = 0; k < COL; k++){
			printf("|-----");
		}
		printf("|\n|");

		for(j = 0; j < COL; j++){
			printf("%4d |", arr[i][j]);
		}
		printf("\n");

	}
	for(k = 0; k < COL; k++){
		printf("|-----");
	}
	printf("|\n");
}

// Tested and it fucking works
int main(int argc, char **argv)
{
	int lol[ROW][COL];
	
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			lol[i][j] = i;
		}
	}
	
	printArrayBoxes(lol);
	
	
	return 0;
}