#include <stdio.h>

int main(void) {
	int n;

	printf("降水確率は?");
	scanf("%d", &n);

	if (n >= 50) {
		printf("傘を持っていった方がいいですね。\n");
		// nが50以上の時に実行される
	} else {
		printf("傘は持たなくてもいいでしょう。\n");
		// nが50未満の時に実行される
	}

	printf("いってらっしゃい。\n");

	return (0);
}
