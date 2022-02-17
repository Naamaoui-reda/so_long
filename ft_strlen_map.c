#include "main.h"

size_t  ft_strlen_map(char *s)
{
	size_t	i;
	
	i = 0;
	if (s == NULL)
		perror ("INVALIDE MAP");
	while (s[i] != '\n' && s[i])
		i++;
	return (i);
}