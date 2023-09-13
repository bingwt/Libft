#include "libft.h"

void	ft_pustr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*(s++), fd);
}
//
//int	main()
//{
//	char *str = "Hello";
//	ft_putchar_fd(*str, 1);
//	ft_putchar_fd(*(++str), 1);
//}
