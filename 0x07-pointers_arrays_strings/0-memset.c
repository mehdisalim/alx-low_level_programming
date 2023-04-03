/**
 * The memset() function writes len bytes of value c (converted to an unsigned char) to the string b
 * @s: the memory will be replaced by @b
 * @n: the size of the memory will be changed
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
    if (n == 0)
        return (s);
    *(s++) = b;
    _memset(s, b, --n);
    return (s);
}
