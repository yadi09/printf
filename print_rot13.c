#include "main.h"

/**
  * rot13 - Apply ROT13 cipher to a given string
  * @args: The input string
  * Return: The length of the string
  */

int rot13(va_list args)
{
	int i, j;
	char letters[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *ptr;
	int length;
    char *str = va_arg(args, char*);

	if (str == NULL)
		return (-1);

	length = strlen(str);
	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (-1);

    i = 0;
    while (str[i] != '\0')
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
	
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				ptr[i] = letters[(j + 26) % 52];
				break;
			}
		}
	}
	length = print_buffer(ptr);
	free(ptr);

	return (length);
}
