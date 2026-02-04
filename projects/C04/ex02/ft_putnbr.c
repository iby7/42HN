/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 23:26:54 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/05 00:43:29 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char w[12];
	int k;

	k = 0;
	if(nb == 0)
	{
		write(1, &k, 1);
	}
	else
	{
		while(nb > 0)
		{
			w[k] = '0' + (nb % 10);
			nb /= 10;
			k++;	
		}
		while(k >= 0)
		{
			write(1, &w[k], 1);
			k--;
		}
	}
}
int main()
{
	ft_putnbr(23);
	return 0;
}