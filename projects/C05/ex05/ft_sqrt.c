/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:22:38 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/08 20:42:45 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while(i * i <= nb)
	{
		if(i * i == nb)
			return(i);
		i++;
	}
	return(0);
}

int main()
{
	printf("%d", ft_sqrt(-56));
	return 0;
}