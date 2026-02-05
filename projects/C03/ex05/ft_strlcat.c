/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:55:42 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/05 13:50:20 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	r;

	i = 0;
	k = 0;
	while (dest[i] != '\0' && (i < size))
		i++;
	while (src[k] != '\0')
		k++;
	r = i + k;
	while (*src && (size - i - 1 != 0))
	{
		dest[i] = *src;
		src++;
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (r);
}
