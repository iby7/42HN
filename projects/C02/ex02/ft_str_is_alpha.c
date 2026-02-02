/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:34:05 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/02 12:05:34 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*(str++))
	{
		if(*str >= '0' && *str <= '9')
		{
			if(*(str + 1) == '\0')
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
}

int main(void)
{
	char* test0 = "084ab02";
	char* test1 = "ab";
	char* test2 = "012354984430352620";
	char* test3 = "";

	printf("%d\n", ft_str_is_alpha(test2));
}