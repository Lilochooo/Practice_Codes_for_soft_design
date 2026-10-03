#include <stdio.h>
void concat (char result[], const char s1[], int n1, const char s2[], int n2)
{
	int i,j;
	//copy str1 into result
	for(i=0;i <n1;++i)
		result[i]=s1[i];
	for(j=0;j<n2;++j)
		result[n1+j]=s2[j];
}
	int main(void){
	void concat(char result[],const char s1[], int n1, const char s2[],int n2);
	const char s1[5]= {'T','e','s','t',' '};
	const char s2[6]= {'W','o','r','k','s','.'};
	int i;
	char s3[11];
	concat(s3, s1, 5, s2, 6);
	for(i=0;i<11;++i)
		printf(" %c",s3[i]);
	printf("/n");
	return 0;
	}

