/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_database.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:53:47 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/07 21:57:28 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char     *ft_database(char rowleft, char rowright, int check1)
{
    char *array;

    // Valores para 4-1
    if (rowleft == '4' && rowright == '1' && check1 == 0)
    {
        array[0] = '1';
        array[1] = '2';
        array[2] = '3';
        array[3] = '4';
    
        return (array);
    }
    // Valores para 3-1
    if (rowleft == '3' && rowright == '1' && check1 == 0)
    {
        array[0] = '1';
        array[1] = '3';
        array[2] = '2';
        array[3] = '4';

        return (array);
    }
    if (rowleft == '3' && rowright == '1' && check1 == 1)
    {   
        array[0] = '2';
        array[1] = '1';
        array[2] = '3';
        array[3] = '4';

        return (array);
    }
    // Valores para 3-2
    if (rowleft == '3' && rowright == '2' && check1 == 0)
    {   
        array[0] = '1';
        array[1] = '2';
        array[2] = '4';
        array[3] = '3';

        return (array);
    }
    if (rowleft == '3' && rowright == '2' && check1 == 1)
    { 
        array[0] = '1';
        array[1] = '3';
        array[2] = '4';
        array[3] = '2';

        return (array);
    }
    if (rowleft == '3' && rowright == '2' && check1 == 2)
    {
        array[0] = '2';
        array[1] = '3';
        array[2] = '4';
        array[3] = '1';

        return (array);    
    }
    // Valores para 2-3
    if (rowleft == '2' && rowright == '3' && check1 == 0)
    { 
        array[0] = '1';
        array[1] = '4';
        array[2] = '3';
        array[3] = '2';

        return (array);
    }
    if (rowleft == '2' && rowright == '3' && check1 == 1)
    { 
        array[0] = '2';
        array[1] = '4';
        array[2] = '3';
        array[3] = '1';

        return (array);
    }
    if (rowleft == '2' && rowright == '3' && check1 == 2)
    {   
        array[0] = '3';
        array[1] = '4';
        array[2] = '2';
        array[3] = '1';

        return (array);
    }
    // Valores para 2-2
    if (rowleft == '2' && rowright == '2' && check1 == 0)
    {
        array[0] = '1';
        array[1] = '4';
        array[2] = '2';
        array[3] = '3';

        return (array);
    }
    if (rowleft == '2' && rowright == '2' && check1 == 1)
    {
        array[0] = '2';
        array[1] = '1';
        array[2] = '4';
        array[3] = '3';

        return (array);
    }
    if (rowleft == '2' && rowright == '2' && check1 == 2)
    {
        array[0] = '2';
        array[1] = '3';
        array[2] = '1';
        array[3] = '4';

        return (array);
    }
    if (rowleft == '2' && rowright == '2' && check1 == 3)
    {
        array[0] = '2';
        array[1] = '4';
        array[2] = '1';
        array[3] = '3';

        return (array);
    }
    if (rowleft == '2' && rowright == '2' && check1 == 4)
    { 
        array[0] = '3';
        array[1] = '1';
        array[2] = '4';
        array[3] = '2';

        return (array);
    }
    if (rowleft == '2' && rowright == '2' && check1 == 5)
    {
        array[0] = '3';
        array[1] = '2';
        array[2] = '4';
        array[3] = '1';

        return (array);
    }
    if (rowleft == '2' && rowright == '2' && check1 == 6)
    { 
        array[0] = '3';
        array[1] = '4';
        array[2] = '1';
        array[3] = '2';

        return (array);
    }
    // Valores para 2-1
    if (rowleft == '2' && rowright == '1' && check1 == 0)
    { 
        array[0] = '3';
        array[1] = '1';
        array[2] = '2';
        array[3] = '4';

        return (array);
    }
    if (rowleft == '2' && rowright == '1' && check1 == 1)
    {
        array[0] = '3';
        array[1] = '2';
        array[2] = '1';
        array[3] = '4';

        return (array);
    }
    // Valores para 1-2
    if (rowleft == '1' && rowright == '2' && check1 == 0)
    {
        array[0] = '4';
        array[1] = '1';
        array[2] = '2';
        array[3] = '3';

        return (array);
    }
    if (rowleft == '1' && rowright == '2' && check1 == 1)
    { 
        array[0] = '4';
        array[1] = '2';
        array[2] = '1';
        array[3] = '3';

        return (array);
    }
    if (rowleft == '1' && rowright == '2' && check1 == 2)
    { 
        array[0] = '4';
        array[1] = '2';
        array[2] = '3';
        array[3] = '1';

        return (array);
    }
    // Valores para 1-3
    if (rowleft == '1' && rowright == '3' && check1 == 0)
    {
        array[0] = '4';
        array[1] = '1';
        array[2] = '3';
        array[3] = '2';

        return (array);
    }
    if (rowleft == '1' && rowright == '3' && check1 == 1)
    {
        array[0] = '4';
        array[1] = '3';
        array[2] = '1';
        array[3] = '2';

        return (array);
    }
    // Valores para 1-4
    if (rowleft == '1' && rowright == '4' && check1 == 0)
    {
        array[0] = '4';
        array[1] = '3';
        array[2] = '2';
        array[3] = '1';

        return (array);
    }
  //  return (0);   
}
