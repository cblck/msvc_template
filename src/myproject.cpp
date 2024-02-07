#include "myproject.hpp"

DISABLE_INTELLISENSE
#include <iostream>
ENABLE_INTELLISENSE

int main()
{
	try
	{
		std::cout << "Hello World!\n";
	}
	catch (const std::exception& e)
	{
		puts( e.what() );
	}
	return 0;
}
