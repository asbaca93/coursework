#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 17
#define READ_END 0
#define WRITE_END 1

void swap(char* msg);
void noSwap(char* msg);

int main(void)
{

	char write_msg[BUFFER_SIZE] = "OpeRating SySTEMs";
	char read_msg[BUFFER_SIZE];
	int fd[2];
	pid_t pid;

	if (pipe(fd) == -1)
	{
		fprintf(stderr, "Pipe failed.");
		return 1;
	}  //end if (pipe(fd) == -1)

	pid = fork();

	if (pid < 0)
	{
		fprintf(stderr, "Fork failed.");
		return 1;
	}  //end if (pid < 0)

	if (pid > 0)
	{
		close(fd[READ_END]);
		write(fd[WRITE_END], write_msg, strlen(write_msg)+1);
		close(fd[WRITE_END]);
	}  //end if (pid > 0)
	else
	{
		close(fd[WRITE_END]);
		read(fd[READ_END], read_msg, BUFFER_SIZE);
		printf("\n");
		noSwap(read_msg);
		swap(read_msg);
		printf("\n");
		close(fd[READ_END]);
	}  //end else if (pid > 0)

	return 0;

}

void noSwap(char* msg) 
{
	printf("Original Statement:	%s\n", msg);
}

void swap(char* msg)
{
	char tempMsg[BUFFER_SIZE];
	int i = 0;
	while ( (i < BUFFER_SIZE) && (msg[i] != 0) )
	{
		if ( (msg[i] >= 65) && (msg[i] <= 90) )
		{
			tempMsg[i] = msg[i]+32;
		}
		else if ( (msg[i] >= 97) && (msg[i] <= 122) ) 
		{
			tempMsg[i] = msg[i]-32;
		}
		else
		{
			tempMsg[i] = msg[i];
		}
		i++;
	}
	printf("Modified Statement:	%s\n", tempMsg);
}


