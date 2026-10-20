/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratana <maratana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:01:51 by maratana          #+#    #+#             */
/*   Updated: 2026/10/06 16:20:06 by maratana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len1 = ft_strlen((const char *)s1);
	len2 = ft_strlen((const char *)s2);
	p = malloc(len1 + len2 + 1);
	if (!p)
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
