

int ft_str_is_alpha(char *str) 
{
	char	c;

	c = *str;
	while (c != '\0')
	{
		c = *str;
		if ((!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && c != 0))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int main(int argc, char** argv)
{
    printf("string: %s\n", argv[1]);
    printf("result: %d\n", ft_str_is_alpha(argv[1]));
}*/
