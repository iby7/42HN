/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:46:19 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/09 12:18:25 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*r;

	r = str;
	while (*str)
	{
		if ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'z')
			|| (*str >= 'A' && *str <= 'Z'))
		{
			i = 1;
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
			while (i == 1 && *(str++))
			{
				if (*str >= 'A' && *str <= 'Z')
					*str = *str + 32;
				else if (!((*str >= '0' && *str <= '9') || (*str >= 'a'
							&& *str <= 'z')))
					i = 0;
			}
		}
		str++;
	}
	return (r);
}
