/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:47:54 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/11 11:18:49 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *c)
{
	int	i;

	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *p;
	char *q;
	int i;
	int k;

	i = 0;
	k = 0;
	while (strs[i])
	{
		p = strs[i];
		len(p);
	}
	p = (char *)malloc((k + size));
	i = 0;
	while (size > 0)
	{
		q = strs[i];
		while (*q)
		{
			*p = *q;
			p++;
			q++;
		}
		*p = *sep;
		i++;
	}
}