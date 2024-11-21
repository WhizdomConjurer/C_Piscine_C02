/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:09:29 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 13:27:39 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "flgqndkljahvlkdhlvadkjlv";
// 	int	x;

// 	x = ft_str_is_lowercase(str);
// 	x += 48;
// 	write(1, &x, 1);
// 	return (0);
// }
