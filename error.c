#include "main.h"
void 	ft_check_lines_of_map(char **tab)
{
	int	i;
	size_t	size;

	i = 1;
	size = ft_strlen_map(tab[0]);
	while (tab[i])
	{
		if (size != ft_strlen_map(tab[i]))
		{
			write(1, "lent-Error\n", 11);
			free_map(tab);
			exit(1);
		}
		i++;
	}
	printf("success\n");
}

void	ft_check_borders(char **tab)
{
	size_t i;
	int	j;

	i = 0;
	while ( tab[0][i] == '1' && i < ft_strlen_map(tab[0]))
		i++;
    if (i != ft_strlen_map(tab[0]))
        printf("err\n");
	i = 1;
	while(tab[i])
	{
		if (tab[i][0] != tab[i][ft_strlen_map(tab[i])-1] || tab[i][0] != '1')
		{
			write(1, "borders-Erroe\n", 14);
			free_map(tab);
			exit(1);
		}
		i++;
	}
	j = i - 1;
	i = 0;
	while ( tab[j][i] == '1' && i < ft_strlen_map(tab[j]))
		i++;
	if (i == ft_strlen_map(tab[j]))
        printf("success\n");
    else
        printf("errr");
}
void  ft_check(char **tab)
{
    ft_check_lines_of_map(tab);//cheack size of lines
    ft_check_borders(tab);    //check borders
    // at least one exit , one p,at least one c

}