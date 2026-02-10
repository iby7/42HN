/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 09:23:29 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/10 14:01:32 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = nb;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb > 1)
		{
			r = r * (nb - 1);
			nb--;
		}
		return (r);
	}
	else
		return (0);
}

/*int main()
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}*/