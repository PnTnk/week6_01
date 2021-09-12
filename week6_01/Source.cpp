#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binaryToDec(char[50]);
int main() 
{
	char n[50];
	printf("Enter Binary : ");
	scanf("%s", n);
	printf("%d", binaryToDec(n));

}
int binaryToDec(char n[50]) {
	int i = 0;
	int x=0;
	while (n[i] != '\0') {
		if (n[i] == '1') { x = x * 2 + 1; }
		else  if (n[i] == '0') { x = x * 2; }
		i++;
	}
	return x;


}