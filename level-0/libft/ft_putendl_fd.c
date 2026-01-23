#include "libft.h"

/* Escribe string seguido de \n en archivo descriptor
Envia el string s al archivo dado seguido de un salto de linea

s - el string que escribes
fd - archivo descriptor donde se escribe

DEVUELVE void
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
