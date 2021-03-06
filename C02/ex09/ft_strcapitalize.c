/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:42:54 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/10 17:45:34 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_isalpha(char a)
{
	if (a >= '0' && a <= '9')
		return (0);
	else if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

int		ft_is_not_alpha(char a)
{
	if (a < '0')
		return (1);
	else if (a > '9' && a < 'A')
		return (1);
	else if ((a > 'Z' && a < 'a') || (a > 'z'))
		return (1);
	return (0);
}

int		ft_isuppercase(char b)
{
	if (b >= 'A' && b <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isuppercase(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_not_alpha(str[i - 1]) && ft_isalpha(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int		main(void)		
{
	char arr[] = "a@Ahghgf-rtrt-  erer DSFg";
	printf("%s", ft_strcapitalize(arr));
}
