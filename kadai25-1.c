#include <stdio.h>
int main(int argc, char **argv){
	int i;
	printf("入力数=%d\n",argc);
	printf("コマンド名=%s\n",argv[0]);
	for(i=1; i<argc; ++i){
		printf("%d 個目の引数=%s\n",i,argv[i]);
	}
	return 0;
}
