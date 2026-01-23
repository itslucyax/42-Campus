#include "libft.h"

/* Escribe un caracter en unn fila descriptor
Encia el caracter c al archivo descriptor especificado

c - caracter a escribir
fd - archivo descriptor donde escribe
	0 - stdin entrada estandar
	1 - stdout salida estandar por pantalla
	2 - stderr salida de errores
	>2- archivo abierto

DEVUELVE void es decir qeu nada
-Usa write() writr (fd, buffer, bytes_a_escribir)
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
