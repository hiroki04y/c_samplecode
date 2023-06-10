#include <stdio.h>

void main() {
	char moji = getchar();
	switch (moji) {
	case 'a':
		printf("input a");
		break;
	case 'b':
		printf("input b");
		break;
	default:
		printf("input other");
		break;
	}
}