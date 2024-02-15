#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code = system("echo Dziala");
	if (!code)
	{
		printf("Polecenie systemowe dziala\n");
	}
	else
	{
		printf("Polecenie systemowe nie dziala\n");
	}

	return 0;
}