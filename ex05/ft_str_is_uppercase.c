/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:39:14 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 13:27:42 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "AAAAAAAAAAA";
// 	int	x;

// 	x = ft_str_is_uppercase(str);
// 	x += 48;
// 	write(1, &x, 1);
// 	return (0);
// }