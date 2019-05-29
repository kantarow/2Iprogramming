#include <stdio.h>

int main(void) {
	int x, y, z;
	// int型の変数x, y, zを定義する
	
	x = 10;
	y = 20;
	// xに10, yに20を代入する
	
	z = x;
	x = y;
	y = z;
	// 変数zを仲介してxとyの値を入れ替える(x = y;などを行うとどちらかの情報が失われるため)
	
	printf("x = %d\ny = %d\n", x, y);
}
