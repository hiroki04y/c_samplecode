#include <stdio.h>
#include <string.h>

int main(void){
	char *s = "ABCDE";
	char t[20] = "absolute";
	
	strcpy(s, t);
	
	printf("%s", s);
	
	return 0;
}