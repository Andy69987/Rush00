#include <unistd.h>

void	rush(int x, int y)
{
	int	xx;
	int	yy;

	xx = 0;
	yy = 0;

	while (yy < y)
	{
		while (xx < x)
		{
			if ((yy == 0) && (xx == 0 || xx == x - 1))
			write(1, "A", 1);
			else if ((yy == y - 1) && (xx == 0 || xx == x - 1))
				write(1, "C", 1);
			else if ((yy == 0 || yy == y - 1) || (xx == 0 || xx == x - 1))
				write(1, "B", 1);
			else 
				write(1, " ", 1);
			xx++;
		}
		xx = 0;
		yy++;
		write(1, "\n", 1);
	}
}

/*
• rush(5, 3) should display:
$>./a.out
ABBBA
B B
CBBBC
$>

• rush(5, 1) should display:
$>./a.out
ABBBA
$>

• rush(1, 1) should display:
$>./a.out
A
$>

• rush(1, 5) should display:
$>./a.out
A
B
B
B
C
$>

• rush(4, 4) should display:
$>./a.out
ABBA
B B
B B
CBBC
$>
*/

// int	main(void)
// {
// 	rush(5, 3);
// 	write(1, "\n", 1);
// 	// rush(5, 1);
// 	// write(1, "\n", 1);
// 	// rush(1, 1);
// 	// write(1, "\n", 1);
// 	// rush(1, 5);
// 	// write(1, "\n", 1);
// 	// rush(4, 4);
// 	// write(1, "\n", 1);
// }