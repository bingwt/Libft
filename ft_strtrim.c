/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:52:23 by btan              #+#    #+#             */
/*   Updated: 2023/09/12 09:21:53 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	begin;
	int	end;

	begin = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[begin++]));
	ft_strlcpy((char *) (s1 - begin + 1), s1, (ft_strlen(s1) + 1));
}

int	main()
{
	char	s1[] = "  hello  ";
	char	*set = " ";
	//ft_strchr(set, s1[0]);
	ft_strtrim(s1, set);
}
