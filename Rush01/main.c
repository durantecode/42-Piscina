/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:47:00 by omonaste          #+#    #+#             */
/*   Updated: 2021/03/08 08:22:55 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char     *ft_database(char rowleft, char rowright, char check1);

int main(int count, char **values)
{
    //char table;
    int x;
    int z;
    char *y;
    int counter;

    y = (char *) malloc(50);
    x = 0;
    z = 0;
    counter = 0;
    if(count != 2) exit(1);

    if (values[1][x] < 49 && values[1][x] > 52)
       {
            write(1, "Error, introduce valores entre 1 y 4\n", 37);
            exit(1);
       }
    
    
    while (values[1][x] != 0)
    {
        if (values[1][x] > 47 && values[1][x] < 58)
        {
            y[z] = values[1][x];
            z++;
        }
        x++;
    }
    printf("\n");
    
    char rowleft[4];
    char rowright[4];

    char *fila1;
    char *fila2;
    char *fila3;
    char *fila4;
 
    
    rowleft[0] = y[8];
    rowleft[1] = y[9];
    rowleft[2] = y[10];
    rowleft[3] = y[11];
    rowright[0] = y[12];
    rowright[1] = y[13];
    rowright[2] = y[14];
    rowright[3] = y[15];
    
    
    fila1 = ft_database(rowleft[0], rowright[0], counter);

    printf("%s\n", fila1);
    
  //  fila3 = ft_database(rowleft[2], rowright[2], counter);
  //  fila4 = ft_database(rowleft[3], rowright[3], counter);

    // Enfrentamos fila1 a fila2
    x = 0;
    while (x <= 7)
    {
        
        fila2 = ft_database(rowleft[1], rowright[1], counter);
        if (fila1[x] == fila2[x])
        {
            counter++;
          //  break;
        }
        else
            fila2 = ft_database(rowleft[1], rowright[1], counter);
        x++;
    }

    printf("%s\n", fila2);
    counter = 0;
    x = 0;
    while (x <= 7)
    {
        fila3 = ft_database(rowleft[2], rowright[2], counter);
        if ((fila1[x] == fila3[x] || fila2[x] == fila3[x])) //&& counter != 0)
        {
            counter++;
          //  break;
        }
        else
            fila3 = ft_database(rowleft[2], rowright[2], counter);
        x++;
    }
    
    printf("%s\n", fila3);
    
   //fila4 = ft_database(rowleft[3], rowright[3], counter);

    counter = 0;
    x = 0;
    while (fila4[x] != '\0')
    {
        fila4 = ft_database(rowleft[3], rowright[3], counter);
       // printf("%s\n", fila4);
        if ((fila3[x] == fila4[x] || fila2[x] == fila4[x] || fila1[x] == fila4[x]) && counter != 0)
        {
            counter++;
        }
        else
        {
            fila4 = ft_database(rowleft[3], rowright[3], counter);
        }
        x++;
      
    }
    
    printf("%s\n", fila4); 

    return 0;
    
    
}
