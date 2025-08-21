#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main() {
	int num1;
	char input[100];
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = 0;
	char *endptr;
	num1 = strtol(input, &endptr, 10);
	if (*endptr != '\0') {return 1;}
	int num2;
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = 0;
	num2 = strtol(input, &endptr, 10);
	if (*endptr != '\0') {return 1;}
	char operator;
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = 0;
	operator = input[0];
	float result;
	switch(operator){
		default:
			return 1;
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if (num2 == 0) {return 2;}
			result = num1 / num2;
			break;
		}
	printf("Result: %.3f\n", result);
	return 0;
}
