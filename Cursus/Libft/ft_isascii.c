/*Determina si un carácter es un valor ASCII válido.
Retorna un valor distinto de cero si el carácter es un valor ASCII válido; de lo contrario, retorna 0.*/

int ft_isascii(int c)
{
   return (c >= 0 && c <= 127);
}