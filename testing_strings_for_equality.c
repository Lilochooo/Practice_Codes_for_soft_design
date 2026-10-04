//function to determine if two strings are equal
#include <stdio.h>
#include<stdbool.h>
bool equalStrings(const char s1[], const char s2[])
{
	int i=0;
	bool areEqual;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	if(s1[i] == '\0' && s2[i] =='\0')
		areEqual=true;
	else
		areEqual=false;
	return areEqual;
}
int main(void)
{
	bool equalStrings(const char s1[],const char s2[]);
	const char s1[]= "string compare test";
	const char s2[]= "string";
	printf("%i\n",equalStrings(s1,s2));
	printf("%i\n",equalStrings(s1,s1));
	printf("%i\n",equalStrings(s2,"string"));
	return 0;
}


