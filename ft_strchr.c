/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:58:12 by vipereir          #+#    #+#             */
/*   Updated: 2022/05/31 08:34:14 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	string[42] = "aaaaaaaaabccccccc";

	printf("%s\n", string);
	printf("%s\n", ft_strchr(string, 'd'));

}
*/
