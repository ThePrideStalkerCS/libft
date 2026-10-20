/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratana <maratana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 22:01:07 by maratana          #+#    #+#             */
/*   Updated: 2026/10/19 16:37:39 by maratana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char *ret;
	int i;

	start = 0;
	while (s1[start] && (isset(s1[start], set)))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && isset(s1[end-1], set))
		end--;
	ret = malloc(end - start + 1);
	if (!ret)
		return NULL;
	i=0;
	while(start<end)
	{
		ret[i]=s1[start];
		i++;
		start++;
	}
	ret[i]='\0';
	return (ret);
}

// static size_t	calc_trimmed(char const *s1, char const *set)
// {
// 	size_t	l;
// 	int		i;

// 	i = 0;
// 	l = 0;
// 	while (s1[i])
// 	{
// 		if (!isset(s1[i], set))
// 		{
// 			l++;
// 		}
// 		s1++;
// 	}
// 	return (l);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	trimedl;
// 	char	*ret;
// 	int		i;
// 	int		j;

// 	j = 0;
// 	i = 0;
// 	trimedl = calc_trimmed(s1, set);
// 	ret = malloc(trimedl + 1);
// 	while (s1[i])
// 	{
// 		if (!isset(s1[i], set))
// 		{
// 			ret[j] = s1[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	ret[j] = '\0';
// 	return (ret);
// }

// int	main(void)
// {
// 	char s1[] = "ababa";
// 	char set[] = "a";
// 	printf("%s", ft_strtrim(s1,set));
// }