/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:50:27 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 13:30:40 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == ' ')
			x++;
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] -32;
		x++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "always was written in lowercase";
// 	int	x;

// 	x = 0;
// 	ft_strupcase(str);
// 	while (str[x] != '\0')
// 	{
// 		write(1, &str[x], 1);
// 		x++;
// 	}
// 	return (0);
// }
