/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:12:33 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/10 22:41:21 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;

	i = 0;
	if(min >= max)
		{
			*range = NULL;
			return (0);
		}
	else
		*range = (int *)malloc((max - min) * 4);
	if (!*range)
		return (-1);
	while(min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	*range[i] = '\0';
}
