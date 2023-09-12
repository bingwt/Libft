#include "libft.h"

void	ft_pustr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(fd, *(s++));
}
