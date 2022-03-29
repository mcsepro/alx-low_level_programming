#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> ac10d9eaa5c2b5ea3ea554cc751b3aace10be30d
/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area
 */
<<<<<<< HEAD
 void *memset(void *s, int c, size_t n);
=======
char *_memset(char *s, char b, unsigned int n)
>>>>>>> ac10d9eaa5c2b5ea3ea554cc751b3aace10be30d
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }

<<<<<<< HEAD
	return (memory);
}
=======
        return (s);
}

>>>>>>> ac10d9eaa5c2b5ea3ea554cc751b3aace10be30d
