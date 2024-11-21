/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:45:07 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 10:14:16 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char	str[] = "IhaveOnlyCharaktersFromTheAlpahabeth";
// 	int	x;

// 	x = ft_str_is_alpha(str);
// 	x += 48;
// 	write(1, &x, 1);
// 	return (0);
// }
