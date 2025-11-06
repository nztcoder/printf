/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/29 16:39:24 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 20:28:49 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	size_t	counter;
	size_t	words;

	counter = 0;
	words = 0;
	while (s[counter])
	{
		while (s[counter] && s[counter] == c)
			counter++;
		if (s[counter] && s[counter] != c)
		{
			words++;
			while (s[counter] && s[counter] != c)
				counter++;
		}
	}
	return (words);
}

static char	*ft_word_dup(char const *s, size_t start, size_t end)
{
	size_t	len;
	size_t	counter;
	char	*word;

	len = end - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	counter = 0;
	while (counter < len)
	{
		word[counter] = s[start + counter];
		counter++;
	}
	word[len] = '\0';
	return (word);
}

static void	*ft_free_all(char **result, size_t filled)
{
	size_t	counter;

	counter = 0;
	while (counter < filled)
	{
		free(result[counter]);
		counter++;
	}
	free(result);
	return (NULL);
}

static int	ft_fill_array(char const *s, char c, char **result, size_t words)
{
	size_t	start;
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (w < words)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[w] = ft_word_dup(s, start, i);
		if (!result[w])
		{
			ft_free_all(result, w);
			return (0);
		}
		w++;
	}
	result[w] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!ft_fill_array(s, c, result, words))
		return (NULL);
	return (result);
}

// int	main(void)
// {
// 	char **res;
// 	int i;

// 	// just text
// 	printf("Test 1: ,Im,under,the,water,pls,help,me,\n");
// 	res = ft_split(",Im,under,the,water,pls,help,me,", ',');
// 	i = 0;
// 	while (res && res[i])
// 	{
// 		printf("[%s]\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	printf("----\n");

// 	//empty str
// 	printf("Test 2: \"\"\n");
// 	res = ft_split("", ',');
// 	i = 0;
// 	while (res && res[i])
// 	{
// 		printf("[%s]\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	printf("----\n");

// 	//no delimeters
// 	printf("Test 3: HelloWorld\n");
// 	res = ft_split("HelloWorld", ',');
// 	i = 0;
// 	while (res && res[i])
// 	{
// 		printf("[%s]\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	printf("----\n");

// 	//only delimeters
// 	printf("Test 4: ,,,,\n");
// 	res = ft_split(",,,,", ',');
// 	i = 0;
// 	while (res && res[i])
// 	{
// 		printf("[%s]\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	printf("----\n");

// 	//Spaces
// 	printf("Test 5: \"   one   two  three \"\n");
// 	res = ft_split("   one   two  three ", ' ');
// 	i = 0;
// 	while (res && res[i])
// 	{
// 		printf("[%s]\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	printf("----\n");

// 	return (0);
// }