/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciamar <luciamar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:19:32 by luciamar          #+#    #+#             */
/*   Updated: 2026/01/17 01:19:32 by luciamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memmove - Copia n bytes de src a dst 
** Es como memcpy, pero segura con solapamiento
** Detecta si hay y ajusta direccion copia
**
** Si dst > src : copiar de atras hacia adelante
** Si dst < src : copia de adelante hacia atras
**
** Devuelve puntero a dst
** Usar cuando no estas seguro de si habra solapamiento
*/

void	*ft_memmove(void *dst, const void *src, sizr_t len)
{
	unsigned char	*d;
	const unsigned char	*s;
	
	if (!dst && !src)
		return (NULL);
	d = (unsigned char*)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
		{
			*d++ = *s++;
		}
		return (dst);
	}
}