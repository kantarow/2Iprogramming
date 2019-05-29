#include <stdio.h>

int main(void) {
	int a, b;
	// int型の変数a, bを宣言
	
	printf("２つの整数を入力して下さい。\n");

	printf("整数１：");
	scanf("%d", &a);
	// &aは変数aのポインタ(恐らく今後勉強するので今は無視)
	
	printf("整数２：");
	scanf("%d", &b);

	printf("それらの積は %d です。\n", a * b);
	return (0);
}
