/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:37:47 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/13 19:39:51 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rushlib.h"

int		main(void)
{
	ssize_t count_dict;
	unsigned int size;
	int fd;
	char *dict;
	int i;
	
	i = 0;
	dict = (char *)malloc(1);
	count_dict = 65535; // Tamaño unsigned int de 2 bytes
	fd = open("numbers.dict", O_RDONLY);
	size = read(fd, dict, count_dict);
	dict[size] = '\0';

	if (fd == -1)
		ft_check_error(-1);
	else if(count_dict == 0)
		ft_check_error(0);

/*	unsigned int array_num[754893];
	while(dict != '\0')
	{
		array_num[i] = ft_atoi(dict);
		dict++;
		i++;
	}

	printf("%d\n", *array_num);
*/
	char num_letter[200][200];
	i = 0;
	int j = 0;
	int k = 0;
	while(dict[i] != '\0')
	{
		if (dict[i] == 58) 
		{
			i++;
			while (dict[i] != '\n')
			{
				num_letter[j][k] = dict[i];
				k++;
				i++;
			}
		}
		j++;
		i++;
		k = 0;
	}
	printf("%c\n", num_letter[3][2]);
   	return (0);
}