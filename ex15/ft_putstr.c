#include <unistd.h>

void	ft_putchar(char c); 

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	ft_putstr("Hello World!");
	return (0);
}
