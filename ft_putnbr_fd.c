#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		nbr = nbr % 10;
	}
	ft_putchar_fd('0' + nbr, fd);
}
