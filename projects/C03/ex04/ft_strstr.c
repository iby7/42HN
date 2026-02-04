/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:31:16 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/04 20:52:18 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;

	if(!(*to_find))
		return str;
	while(*str)
	{
		i = 0;
		while(str[i] == to_find[i])
		{
			i++;
			if(to_find[i] == '\0')
				return(str);
		}
		str++;		
	}
	//darf ich das?
	return(NULL);
}
