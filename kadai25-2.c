#include <stdio.h>
int main(void){
	int row, column;

	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	for(row=0; row<3; row++) {
		for(column=0; column<3; column++) {
			printf("%p, ", &a[row][column]);
		}
	}

	printf("\n");

	return 0;
}
