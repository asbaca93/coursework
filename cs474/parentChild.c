#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid, pid1;
	/*fork a child process */
	pid_t i = getpid();
	printf("G: \%d\n", i);
	pid = fork();

	if(pid < 0){
		fprintf(stderr, "fork failed");
		return 1;
	}
	else if(pid == 0){
		pid1 = getpid();
		printf("A: child: pid = \%d\n", pid);
		printf("B: child: pid1 = \%d\n", pid1);
		pid1 = fork();
		printf("C: child: pid1 = \%d\n", pid);
		printf("D: child: pid1 = \%d\n", pid1);
	}
	else{
		pid1 = getpid();
		printf("E: parent: pid = \%d\n", pid);
		printf("F: child: pid1 = \%d\n", pid1);
	}
	return 0;
}

