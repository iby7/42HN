/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:18:00 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/11 13:56:59 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	if (nb > 1)
	{
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}*/
