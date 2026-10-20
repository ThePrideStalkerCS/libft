/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratana <maratana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:06:56 by maratana          #+#    #+#             */
/*   Updated: 2026/10/05 22:00:13 by maratana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	dst_l = 0;
	src_l = ft_strlen(src);
	while (dst_l < size && dst[dst_l] != '\0')
		dst_l++;
	if (dst_l == size)
		return (size + src_l);
	i = 0;
	while (src[i] != '\0' && dst_l + i < size - 1)
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (dst_l + src_l);
}
