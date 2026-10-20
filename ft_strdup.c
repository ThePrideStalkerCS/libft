/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratana <maratana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:19:09 by maratana          #+#    #+#             */
/*   Updated: 2026/10/06 16:19:58 by maratana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s);
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	while (i < size)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
