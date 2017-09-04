#include <stdio.h>

int primes[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
// A is a var 'A' is a char literal

int convertToPrimeProduct(char *string) {
	int prime = 1;
	for (; *string != 0; string++) {
	if (*string > 96) {
		*string = *string - 32;
		}
		prime = prime * primes[*string - 'A'];
	}
	return prime;
}

int main() {
	char myinput[20];
	char myinput2[20];
	int product1, product2;
	scanf("%4s", myinput);
	scanf("%4s", myinput2);
	product1 = convertToPrimeProduct(myinput);
	product2 = convertToPrimeProduct(myinput2);
	printf("number of %c = %d\n", *myinput, myinput[0]);
	printf("number of %c = %d\n", *myinput2, myinput2[0]);
	printf("%d\n", product1);
	printf("%d\n", product2);
	if (product1 == product2)
	printf("Is an Anagram!\n");
	else
	printf("Is NOT an Anagram\n");

	return 0;
}
