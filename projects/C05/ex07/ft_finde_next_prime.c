/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finde_next_prime.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:28:46 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/08 22:51:26 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_next_prime(int nb)
{
	int i;
	int k;

	k = 0;
	i = 2;
	
	if(nb < 1)
		return(2);
	while (i * i <= nb)
	{
			if(nb % i == 0)
			{	
				nb++;
				i = 2;
			}
			else
				i++;
	}
	return(nb);
}

int main()
{
	printf("%d\n", ft_is_next_prime(44));
	return 0;
}