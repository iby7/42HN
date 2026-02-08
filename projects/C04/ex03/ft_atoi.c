/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:44:03 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/09 00:46:47 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    return nb * ft_recursive_power(nb, power - 1);
}

int vorzeichen(char* str)
{
	int vz;
	
	vz = 1;
	while(*str == '-' || *str == '+' || *str == ' ')
	{
		if(*str == '-')
			vz *= -1;
		str++;		
	}
	return vz;
}

int ft_atoi(char *str)
{
	int i;
	int r;
	int vz;
	
	i = 0;
	vz = vorzeichen(str);
	if(*str == '0')
		return(0);
	while(*str == '-' || *str == '+' || *str == ' ')
		str++;	
	while(str[i] >= '0' && str[i] <= '9')
		i++;
	r = ((*str - '0') * ft_recursive_power(10, i - 1));
	while(i-- >= 0)
	{
		str++;
		if(i > 0)
			r = r + ((*str - '0') * ft_recursive_power(10, i - 1));
	}
	return(r * vz);
}

int main()
{	
	printf("%d\n", ft_atoi("-+++ 1245ab13"));
	return 0;
}