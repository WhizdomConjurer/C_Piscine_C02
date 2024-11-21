/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:16:45 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 13:31:26 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	nw;

	nw = 1;
	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z') || (str[x] >= 'A' && str[x] <= 'Z')
			|| (str[x] >= '0' && str[x] <= '9'))
		{
			if (nw == 1 && str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] -32;
			else if (nw == 0 && str[x] >= 'A' && str[x] <= 'Z')
				str[x] = str[x] +32;
			nw = 0;
		}
		else
			nw = 1;
		x++;
	}
	return (str);
}

// int	main(void)
// {
// 	int	p;
// 	int	s;
// 	char	str[] = "salut, comment tu vas ?";

// 	p = 0;
// 	s = 0;
// 	while (str[p] != '\0')
// 	{
// 		write(1, &str[p], 1);
// 		p++;
// 	}
// 	ft_strcapitalize(str);
// 	while (str[s] != '\0')
// 	{
// 		write(1, &str[s], 1);
// 		s++;
// 	}
// }
