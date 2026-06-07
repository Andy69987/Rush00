#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



// max output looks like: 
// /***\
// *   *
// *   *
// *   *
// \***/