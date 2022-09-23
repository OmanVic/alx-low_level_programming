#include "main.h"
/**
 * rot13 - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */
char *rot13(char *n)
{
        int i, j;
        char x1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
        char x2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

        for (i = 0; n[i] != '\0'; i++)
        {
                for (j = 0; j < 26; j++)
                {
                        if (n[i] == x1[j])
                        {
                                n[i] = x2[j];
                        }
			else if (n[i] == x2[j])
			{
				n[i] = x1[j];
			}
                }
        }
        return (n);
}
