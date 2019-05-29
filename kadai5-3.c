#include <stdio.h>
int main(void) {
	int a = 50;
	printf("%d\n", a == 50 );
	printf("%d\n", a >= 70 );
	printf("%d\n", a >= 20 || a < 40 );
	printf("%d\n", a >= 20 && a < 40 );

	/*
	C言語において真と偽は1と0で表現されるため,
	1
	0
	1
	0
	と出力される.
	 */

	return (0);
}
