#include <stdio.h>

int main(void) {
	int n;

	printf("降水確率は?");
	scanf("%d", &n);

	if (n < 30) {
		printf("傘は必要ありません\n");
	} else if (n > 70) {
		printf("傘を持って行きましょう\n");
	} else if (n >= 30 && n <= 70) {
		printf("よくわかりません\n");
	}

	printf("いってらっしゃい。\n");

	return (0);
}
