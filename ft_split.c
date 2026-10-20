/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratana <maratana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 01:13:51 by maratana          #+#    #+#             */
/*   Updated: 2026/10/19 16:10:11 by maratana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**create_str_arr(char const *s, char c)
{
	char	**ret;
	size_t	words;
	int		i;
	int		is_new_word;

	words = 0;
	i = 0;
	is_new_word = 1;
	while (s[i])
	{
		if (s[i] == c)
			is_new_word = 1;
		else if (is_new_word)
		{
			is_new_word = 0;
			words++;
		}
		i++;
	}
	ret = malloc((words + 1) * sizeof(char **));
	if (!ret)
		return (NULL);
	return (ret);
}

static int	word_len(char const *start, char c)
{
	int	i;

	i = 0;
	while (start[i] && start[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*copy_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(word_len(s, c) + 1);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str_arr;

	str_arr = create_str_arr(s, c);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		str_arr[j] = copy_word(s + i, c);
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	str_arr[j] = NULL;
	return (str_arr);
}

// int	main(void)
// {
// 	char **str_arr = ft_split(" this are 4 words ", ' ');
// 	printf("%s", str_arr[1]);
// }