void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isblank(char c)

{

	return (c == ' ' || c == '\t');

}

void	rev_wstr(char *str, int first)
{
	int start;
	int i;

	i = 0;
	if (str[i])
	{
		while (ft_isblank(str[i]))
			i++;
		if (!str[i])
			return ;
		start = i;
		while (str[i] && !ft_isblank(str[i]))
			i++;
		rev_wstr(&str[i], 0);
		write(1, &str[start], i - start);
		if (!first)
			ft_putchar(' ');
	}
}

int		main(int argc, char **av)
{
	if (argc == 2)
		rev_wstr(av[1], 1);
	ft_putchar('\n');
	return (0);
}
