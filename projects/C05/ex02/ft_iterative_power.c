/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:04:51 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/10 14:16:47 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while ((power - 1) > 0)
	{
		r = r * nb;
		power--;
	}	
	return (r);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(3, 2));
	return (0);
}*/
