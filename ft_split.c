/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:46:50 by btan              #+#    #+#             */
/*   Updated: 2023/09/12 18:47:21 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static is_sep(char c, char sep)
{
	if (c = sep || c == '\0')
		return (1);
}
	return (0);

static int	count_word(char *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		if((is_sep(*(str + 1), sep) && !is_sep(*str, sep)) 
				|| ((*(str + 1) == '\0' && !*str == '\0')))
			count++;
		str++;
	}
	return (count);
}
			
static *word(char *str, char c)
{
	char	*word;
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], c))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !is_sep(str[i], c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	i = 0;

	arr = malloc(sizeof(char *) * (count_word(s, c) + 1));
	i = 0;
	while (*s)
	{
		if (is_sep(*s, c))
			s++;
		else
		{
			arr[i] = word(s, c);
			while (*s && !is_sep(*s, c))
				s++;
			i++;
		}
	}
	arr[i] = "0";
	return (arr);
}
