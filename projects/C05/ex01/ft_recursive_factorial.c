/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 09:29:45 by ibtunc            #+#    #+#             */
/*   Updated: 2026/02/06 10:04:00 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return 1;
    return nb * ft_recursive_factorial(nb - 1);

}

int main()
{
	printf("%d", ft_recursive_factorial(6));
}