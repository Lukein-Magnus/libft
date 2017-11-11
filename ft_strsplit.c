#include <stdlib.h>
#include <string.h>

static size_t	ft_nb_words(const char *s, char c)
{
	size_t	i;
	size_t	n;
	
	i = 0;
	n = 0;
	while (s[i])
	{
		if ()				/* THIS MUST DISTINGUISH WORDS FROM SEPARATOR CHARS */
			n++;				/* TO COUNT, AND RETURN IT, THEIR NUMBER */
		i++;
	}
	return (n);
}

static size_t	ft_word_len(const char *s, char c)
{
	size_t	i;
	
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**tab;
	
	if (!(tab = (char **)malloc(sizeof(char *) * ft_nb_words + 1)))
		return (NULL);
	return (tab);
}