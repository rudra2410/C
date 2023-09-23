#include <stdio.h>

int main()
{
	char i = 65;

	while (i <= 90)
	{
		if (i % 2 != 0)
		{
			printf("%c ", i);
			i++;
		}
	}
	return 0;
}