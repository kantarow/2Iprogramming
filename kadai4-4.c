#include <stdio.h>

int main(void) {
	int a, b, c, sum;
	// 変数a, b, c, sumを定義する

	printf("三つの整数を入力して下さい\n");

	printf("整数A:");
	scanf("%d", &a);

	printf("整数B:");
	scanf("%d", &b);

	printf("整数C:");
	scanf("%d", &c);

	sum = a + b + c;
	// sumにa, b, cの合計値を代入する

	printf("合計は %d で平均は %.1f です。\n", sum, sum / 3.0);
	/*
	平均値はsumを入力数3で割った数となる.
	桁数を指定するために %.1f とする.
	sum / 3.0 とすることでfloat型にキャストする.
	(float)sum / 3 とすると明示的にfloat型にキャストできる.
	*/
	
	return 0;
}
