#include <stdio.h>
#include <string.h>

int main(void){
	char s[6] = "ABCDE";
	char *t = "absolute";
	
	strcpy(s, t);
	
	printf("%s", s);
	
	return 0;
}