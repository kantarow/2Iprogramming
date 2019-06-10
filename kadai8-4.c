#include <stdio.h>
int main(void) {
	int i, sum;
	printf("正の整数を入力して下さい：");
	scanf("%d", &i);
	sum = (i * (1 + i)) / 2;
	printf("1 から %d までを足した値は %d です。\n", i, sum);
}
