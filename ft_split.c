/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:46:50 by btan              #+#    #+#             */
/*   Updated: 2023/09/16 19:02:28 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	**ft_split(char const *s, char c)
{
	char	*str;
	int	words;

	str = (char *) s;
	words = 0;
	while (ft_strchr(str, c) != c)
		words++;
	return(NULL);
}

int	main()
{
	char *s = "hello world";
	char c = ' ';
	ft_split(s, c);
}
