#include <stdio.h>

int main()
{
	char str1[20] = "Skill", str2[20] = "Code";

	char str3[20];

	int i = 0, j = 0;

	printf("\n First String =%s", str1);
	printf("\n Second String =%s", str2);

	while (str1[i] != '\0')
	{
		str3[j] = str1[i];
		i++;
		j++;
	}

	

	while (str2[i] != '\0')
	{
		str3[j] = str2[i];
		i++;
		j++;
	}

	str3[j] = '\0';

	printf("\n Concat String =%s ", str3);

	return 0;
}