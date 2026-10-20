/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maratana <maratana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 16:34:14 by maratana          #+#    #+#             */
/*   Updated: 2026/10/19 16:09:26 by maratana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_length(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;
	int		neg;

	num = n;
	neg = num < 0;
	len = find_length(num);
	str = malloc(len + 1);
	str[len] = '\0';
	if (neg)
	{
		str[0] = '-';
		num *= -1;
	}
	while (len > neg)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int n=-2147483648;
// 	printf("%i\n", find_length(n));
// 	printf("%s", ft_itoa(n));
// }