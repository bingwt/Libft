/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by btan              #+#    #+#             */
/*   Updated: 2023/09/08 21:54:14 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n-- > 0)	
		*((unsigned char *) (dest++)) = *((unsigned char *) (src++));
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
		char str1[] = "Geeks";
			char str2[] = "Quiz";

				puts("str1 before memcpy ");
					puts(str1);

						memcpy(str1, str2, sizeof(str2));

							puts("\nstr1 after memcpy ");
								puts(str1);

									return 0;
}
*/
