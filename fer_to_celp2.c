# include <stdio.h>
double fer_to_cel( double fer){
	 return (fer-32.0)*5.0/9.0;
}
int main(void){
	double fer;
	double cel;
	printf("Please enter te degrees Fahrenheit to a celcius:");
	scanf("%lg", &fer);
	fer_to_cel(fer);
	cel=fer_to_cel(fer);
	printf("number in celsius%lg\n",cel);
	return 0;
}

