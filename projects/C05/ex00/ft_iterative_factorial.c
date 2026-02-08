/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 09:23:29 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/06 10:01:07 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterativ_factorial(int nb)
{
	int r;
	
	r = nb;
	if(nb > 0)
	{
		while(nb--)
		{
			r = r * nb;
		}
		return(r);
	}
	else
		return(0);
}

/*int main()
{
	printf("%d", ft_iterativ_factorial(6));
}*/