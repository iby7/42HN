/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:47:54 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/10 23:42:56 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *p;
	char *q;
	int i;
	int k;

	i = 0;
	k = 0;
	while(strs[i])
	{
		p = strs[i];
		while(*p)
		{
			k++;
			p++;
		}
		i++;
	}
	p = (char *)malloc((k + size));
	i = 0;
	while(size > 0)
	{
		q = strs[i];
		while(*q)
		{
			*p = *q;
			p++;
			q++;
		}
		*p = *sep; 
		i++;
	}
}