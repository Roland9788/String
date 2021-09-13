#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <time.h>
#include <stdio.h>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	char string[] = "bound";
	cout << string;
	string[0]='s';
	cout << "\n" << string; 
	
	char string1[] = "week";
	cout << "\n" << string1 << "\n";
	string1[2] = 'a';
	cout << string1;

	char  massage[] = "Hello";
	char  privet[] = "and bye!";
	char* pr = privet;

	cout << "\n" << massage << " " << pr << "\n";

	char string5[] = "Print text";
	int n1 = 0;
	n1 = strlen(string5);
	n1++;
	char* n = new char[n1];
	strcpy(n, string5);
	cout << n;
	cout << "\n" << n1 << " Символов";

	char s1[] = "Hello";
	char s2[] = "World";
	cout << "\n" << "Объединение " << strcat(s1, s2);
	cout << "\nСравнение " << strcmp(s1, s2);

	


	return 0;
}