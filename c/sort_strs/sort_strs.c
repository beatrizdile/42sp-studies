#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>

// void	ft_free_str_arr(char **arr);
// void	free_list(t_list *list);
// void	free_for_all(t_data	*data);
// int	ft_strcmp(const char *s1, const char *s2);
// int	ft_strncmp(const char *s1, const char *s2, size_t n);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// t_list	*ft_lstnew(void *content);
// void	copy_env(t_list **list, char **env);



typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_var
{
	char			*str;
	char			*key;
	char			*value;
	struct s_var	*next;
}	t_var;

typedef struct s_data
{
	char	*prompt;
	char	**path;
	t_list	*env;
	t_list	*export;
	t_var	*var;
}			t_data;

void	ft_free_str_arr(char **arr)
{
	int	j;

	j = 0;
	while (arr[j])
	{
		free(arr[j]);
		j++;
	}
	free(arr);
}

void	free_list(t_list *list)
{
	t_list	*prompt;

	prompt = list;
	while (prompt != NULL)
	{
		list = list->next;
		free(prompt);
		prompt = list;
	}
}

void	free_for_all(t_data	*data)
{
	ft_free_str_arr(data->path);
	if (data->env != NULL)
		free_list(data->env);
	if (data->prompt != NULL)
		free(data->prompt);
	free(data);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	c;

	c = 0;
	while ((s1[c] && s2[c]) != '\0' && s1[c] == s2[c])
		c++;
	return ((s1[c] - s2[c]));
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[c] == s2[c] && c < (n - 1) && s1[c] != '\0' && s2[c] != '\0')
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		ptr = ft_lstlast(*lst);
		ptr->next = new;
	}
}

void	copy_env(t_list **list, char **env)
{
	int	i;

	i = -1;
	while (env[++i] != NULL)
	{
		printf("%s\n", env[i]);
		ft_lstadd_back(list, ft_lstnew(env[i]));
	}
}
t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}


// void	ft_sort_str_list(t_data *data)
// {

// }

int	main(int argc, char **argv, char **envp)
{
	t_data *data;
	
	copy_env(&data->env, envp);
	// ft_sort_env_list();
}
