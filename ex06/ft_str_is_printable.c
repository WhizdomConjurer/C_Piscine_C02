/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:50:41 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 20:16:19 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str > -1 && *str < 32)
			return (0);
		str++;
	}
	return (1);
}

//int	main(void)
// {
// 	char	str[] = "adjfnvlqdkjbvq";
// 	int	x;

// 	x = ft_str_is_printable(str);
// 	x += 48;
// 	write(1, &x, 1);
// 	return (0);
// }
