#include <unistd.h>
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
	write(2, str, 58);
	return (1);
}
