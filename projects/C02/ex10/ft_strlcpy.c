/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:26:11 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/04 19:32:33 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	
	k = 0;
	if(size > 0)
	{
		while(k < (size - 1) && src[k] != '\0')
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	while (src[k] != '\0')
        k++;
	return k;
}
