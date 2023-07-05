#ifndef	PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <errno.h>
# include <string.h>

typedef struct s_pipex
{
	pid_t	pid1;
	pid_t	pid2;
	int		tube[2];
	int		infile;
	int		outfile;
	char	*paths;
	char	**cmd_paths;
	char	**cmd_args;
	char	*cmd;
}t_pipex;

int main(int argc, char **argv, char **envp);
char find_path_env(char **envp);
void child1(t_pipex pipex, char *argv, char *envp);
void child2(t_pipex pipex, char *argv, char *envp);
#endif