#include "part2.h"
#include <iostream>
#include <stdexcept>

// we can make this function void, because char* isnt used in code, and we dont need to return nothing to properly copy one str to another
void safe_string_copy(char* dest, unsigned int destsize, char* src)
{
	unsigned int srcsize = (unsigned int)strlen(src);
	if (srcsize >= destsize)
		throw std::overflow_error("possible buffer overflow");

	for (unsigned int i = 0; i < srcsize; i++) // need to iterate untill the src size
		*dest++ = *src++;
}


#define BUF_SIZE 20
void part2()
{
	char password[] = "secret";
	char dest[BUF_SIZE] = "\0"; // need to initialize string with neutralizor
	char src[] = "hello world!";

	safe_string_copy(dest, BUF_SIZE, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
