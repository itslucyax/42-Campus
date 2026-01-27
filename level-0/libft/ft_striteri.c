#include "libft.h"

/* Aplica una funcion a cada caracter modificando inplace
**Aplica la funcion f a cada caracter del string s
**pasanfo como params el indice y la direccion del char,
**que puede modificarse si es necesario.
**
**
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}	
}