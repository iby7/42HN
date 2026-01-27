/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:21:31 by ibtunc            #+#    #+#             */
/*   Updated: 2026/01/27 19:21:31 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int l;
    int temp;

    l = size;
    i = 0;
    while(i < size / 2)
    {
        l--;
        temp = tab[l];
        tab[l] = tab[i];
        tab[i] = temp;
        i++;
    }
    
}

int main()
{
    int k = 0;
    int nbr[7] = {1, 2, 3, 4, 5, 6, 7};
    ft_rev_int_tab(nbr, 7);
    while (k < 7)
    {
        printf("%d", nbr[k]);
        k++;
    }
    return(0);
}