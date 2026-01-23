#include "libft.h"

/* Escribe un string en un archivo descriptor
Envia el string s al archivo descriptor especificado

s - string a escribir
fd - archivo descriptor donde escribe

Devuelve void

si NULL no hace nada
no añade \n al final, asique solo escribe el string
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
