/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:46:19 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/02 20:12:07 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	char* r;

	r = str;
	i = 0;	
	while(*str)
	{
		if(*str >= '0' && *str <= '9' || *str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
		{
			i = 1;
			if(*str >= 'a' && *str <= 'z')
			{
				*str = *str - 32;
				str++;
			}
			else
			{
				str++;
			}
			while(i == 1 && *str)
			{
				if(*str >= 'A' && *str <= 'Z')
				{
					*str = *str + 32;
					str++;
				}	
				else if(*str >= '0' && *str <= '9' || *str >= 'a' && *str <= 'z')
				{
					str++;
				}
				else
				{
					i = 0;
					str++;
				}
			}
		}
		else
		{
			str++;
		}
	}
	return r;
}

int main()
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	//ft_strcapitalize(str);
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}