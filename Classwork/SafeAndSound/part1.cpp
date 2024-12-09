#include "part1.h"
#include <iostream>

void string_copy(char* dest, unsigned int destsize, char* src)
{
	while (*dest++ = *src++)
		;
}

void part1()
{
	char password[] = "secret";
	char dest[13];
	char src[] = "hello world!";

	string_copy(dest, 13, src); // the bug was that the size was 12 and not 13 which is the actual needed size for this string to fully be completed
	// because the actual ltters in "hello world!" is 12 but 13 is because we also have \0 in the char array which neutralize the string 
	// also the function can be used as void and not return anything
	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
