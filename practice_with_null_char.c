//function to count the number of char in a string
#include <stdio.h>
int stringlen(const char str[]){
	int count=0;
	while(str[count] != '\0')
		++count;
	return count;
}
int main(void){
	int stringlen(const char str[]);
	const char str[]={'H','E','l','l','o','\0'};
	printf("%d",stringlen(str));
	return 0;
}

