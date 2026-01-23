#include "libft.h"

/* Escribe un numero entero en un archivo descriptor
Convierte el numero n a caracteres y lso escribe en el fd dado
n es el numero a escribir
fd archivo descriptor escribir
Devuelve void
Si maneja num negativos
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}