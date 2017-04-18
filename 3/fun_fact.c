// Factorial program using functions.


#include <stdio.h>
int fact(int n);

main()
{
	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);
	printf("factorial of given number is %d\n", fact(num));
	return 0;
}

fact(int m)
{
	int result = 1;
	if (m <= 0) {
		return 1;
	}
	else if (m > 0){
		result = m * fact(m - 1);
	}
	return result;
}
