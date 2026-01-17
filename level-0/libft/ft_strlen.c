#include "libft"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')//mientras mi string en posicion i sea diferente de caracter nulo
        i++;
    return (i);//devuelvo nuemero de caracteres de la cadena
    
}

size_t i;
i = -1;
while (s[++i]);