/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <dcarassi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:32:00 by dcarassi          #+#    #+#             */
/*   Updated: 2023/02/22 17:02:35 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_whitespaces(const char *nptr, int *ptr_i)
{
	int	i;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i = i + 1;
	if (nptr[i] == 45)
	{
		i = i + 1;
		*ptr_i = i;
		return (-1);
	}
	else if (nptr[i] == 43)
	{
		i = i + 1;
		*ptr_i = i;
		return (1);
	}
	else if (!(nptr[i] >= 48 && nptr[i] <= 57))
	{
		*ptr_i = i;
		return (0);
	}
	*ptr_i = i;
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	j;

	result = 0;
	i = 0;
	j = ft_whitespaces(nptr, &i);
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		result = result * 10;
		result += nptr[i] - 48;
		i = i + 1;
	}
	result = result * j;
	return (result);
}
