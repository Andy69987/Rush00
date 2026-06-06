void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_putchar();
	return(0)
}

// void	ft_putchar(int n);

// void	ft_putchar(int n)
// {
// 	if (n < 0)
// 	{
// 		write(1, "/", 1);
// 	}
// 	else if (n = 1)
// 	{
// 		write(1, "\", 1))
// 	}
// 	else if (n = 2)
// 	{
// 		write(1, "*", 1))
// 	}
// 	else (n = 3)
// 	{
// 		write(1, " ", 1);
// 	}
// }

// void	ft_putchar(void)
// {
// 	char	a;
// 	char	b;
// 	char	c;
// 	char	d;

// 	a = '/'
// 	b = '\\'
// 	c = '*'
// 	d = " "
// }
// int main()
// {
// 	void rush(int x, int y);
// 	return(0);
// }

// //output:
// //1) create ascii art with: "/" , "\" , "*" , " " , "\n"
// //
// //input: 
// //rush(x, y) where x means characters per line and y number of lines

// //if printf() is allowed, ascii art with rush(5,5) will look like: 
// //printf("/***\\\n")
// //printf("*   *\n")
// //printf("\\***/\n")
// //printf("\\***/\n")
// //printf("\\0000\n")
// //
// //ps. 0 in printf() means input any character.
// //
// //However printf() is not allowed