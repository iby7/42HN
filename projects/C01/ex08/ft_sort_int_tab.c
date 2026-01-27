/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibtunc <ibtunc@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:47:59 by ibtunc            #+#    #+#             */
/*   Updated: 2026/01/27 22:51:01 by ibtunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while(i < size)
    {
        if (tab[i] <= tab[i+1])
        {
            i++;
        }
        else
        {
            temp = tab[i+1];
            tab[i+1] = tab[i];
            tab[i] = temp;
            i++;
            ft_sort_int_tab(tab, size);  
        }       
    }
}
int main()
{
    int k = 0;
    int nbr[7] = {1, 5, 10, 4, 5, 2, 7};
    ft_sort_int_tab(nbr, 7);
    while (k < 7)
    {
        printf("%d", nbr[k]);
        k++;
    }
    return(0);
}
