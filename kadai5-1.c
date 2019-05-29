#include <stdio.h>

int main(void) {
	char buffer[256];
	// サイズが256のchar型の配列を定義
	
	int age;

	printf("What is your name? ");
	scanf("%s", buffer);
	// 配列そのものがポインタとなっているため, &(アンパサンド)は必要ない(今は気にしなくて良い)

	printf("Hello %s. Nice to meet you.\n", buffer);

	printf("How old are you? ");
	scanf("%d", &age);

	printf("You may be %d years old after ten years.\n", age + 10);
	// 10年後の年齢を教えてくれる(死ぬほどいらない)
	
	return 0;
}
