/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:39:13 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/04 14:22:39 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
    printf("%d", *********nbr);
}

int main()
{
    int x = 1;

    int *a;
    int **b;
    int ***c;
    int ****d;
    int *****e;
    int ******f;
    int *******g;
    int ********h;

    a = &x;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;


    ft_ultimate_ft(&h);

}
