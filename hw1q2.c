#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int size = 0;
	char letter = ' ', c = ' ';
	printf("Enter letter to count: \n");
	scanf(" %c", &letter);
	if ((letter < 65) || (letter > 90 && letter < 97) || (letter > 122))
		return 0;

	if (letter >= 97)
	{
		letter -= 32;
	}
	printf("Enter the char sequence: \n");
	do {
		scanf(" %c", &c);
		if (c == letter || c - 32 == letter)
			size++;
	} while (c != '#');
	printf("The letter appeared %d times\n", size);
	return 0;
}