/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:46:50 by btan              #+#    #+#             */
/*   Updated: 2023/09/16 16:59:20 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//char	**ft_split(char const *s, char c)
//{
//	char *str_ptr;
//	char	**arr;
//	int	i;
//
//	str_ptr = (char *) s;
//	arr = malloc(sizeof(char *) * (count_word(str_ptr, c) + 1));
//	i = 0;
//	while (*str_ptr)
//	{
//		if (is_sep(*str_ptr, c))
//			s++;
//		else
//		{
//			arr[i] = word(str_ptr, c);
//			while (*s && !is_sep(*str_ptr, c))
//				str_ptr++;
//			i++;
//		}
//	}
//	arr[i] = "0";
//	return (arr);
//}
