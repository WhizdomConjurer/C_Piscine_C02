/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:07:33 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 13:28:01 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == ' ')
			x++;
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		x++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "ALWAYS WAS WRITTEN IN UPPER CASE";
// 	int	x;

// 	x = 0;
// 	ft_strlowercase(str);
// 	while (str[x] != '\0')
// 	{
// 		write(1, &str[x], 1);
// 		x++;
// 	}
// 	return (0);
// }
