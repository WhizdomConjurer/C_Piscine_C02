/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:50:45 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 10:14:13 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "645e1641";
// 	int	x;

// 	x = ft_str_is_numeric(str);
// 	x += 48;
// 	write(1, &x, 1);
// 	return (0);
// }
