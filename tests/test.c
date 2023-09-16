/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:47:39 by btan              #+#    #+#             */
/*   Updated: 2023/09/16 17:45:49 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

//int	main(void)
//{
//	printf("%s", ft_substr("hola", 4294967295, 0));
//	return (0);
//}

/*int	main()
{
	char str[12] = "Hello World";
	printf("%s\n", str);
	//ft_bzero(str, 7);
	ft_memset(str, 'a', 7);
	//printf("%s", (unsigned char *) tl_bzero(str, 7));;
	//printf("%s", (char *) ft_memset(str, 'a', 7));
	printf("%s\n", str);
	//printf("%d\n", ft_isalnum('a'));
}
*/
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[100] = "hello";
//	char *first;
//	char *second;
//	
//	first = str;
//	second = str;
//	printf("Original string :%s\n ", str);
//	memcpy(first + 8, first, 10);
//	printf("Real : %s\n ", str);
//	ft_memmove(second + 8, first, 10);
//	printf("Faux : %s\n ", str);
//	return (0);
//}
/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../libft.h"

int             main(int argc, const char *argv[])
{
        void    *mem;
        int             arg;

        alarm(5);
        if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
                return (0);
        memset(mem, 'j', 30);
        if ((arg = atoi(argv[1])) == 1)
        {
                if (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
                        write(1, "dest's adress was not returned\n", 31);
                write(1, mem, 30);
        }
        else if (arg == 2)
        {
                if (mem != ft_memcpy(mem, "zyxwvutst", 0))
                        write(1, "dest's adress was not returned\n", 31);
                write(1, mem, 30);
        }
        else if (arg == 3)
        {
                if (mem != ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
                        write(1, "dest's adress was not returned\n", 31);
                write(1, mem, 30);
        }
        return (0);
}
*/

#include <stdio.h>
int   main()
{
      char    *s1 = "  hello  ";
      //char s1[] = "lorem \n ipsum \t dolor \n sit \t amet"
      char    *set = " ";
      //ft_strchr(set, s1[0]);
      printf("%s\n", ft_strtrim(s1, set));
      printf("%zu\n", ft_strlen(s1));
}


//ft_putendl_fd
//int	main()
//{
//	//ft_putchar_fd('a', 1);
//	//ft_putendl_fd("test", 1);
//	ft_putstr_fd("test", 1);
//}
//
