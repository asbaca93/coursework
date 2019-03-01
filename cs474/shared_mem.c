/*************************************************************************************************************
*
* Code Segments Retrieved From: 
*	https://www.ibm.com/support/knowledgecenter/en/SSB23S_1.1.0.15/gtpc2/cpp_shmctl.html
*	https://fscked.org/writings/SHM/shm-5.html
*	http://www.csl.mtu.edu/cs4411.ck/www/NOTES/process/shm/shmget.html
*	https://users.cs.cf.ac.uk/Dave.Marshall/C/node27.html
*
**************************************************************************************************************/

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main(){
	/*identifier of	the shared memory segment*/
	int segment_id = 28180499;
	struct shmid_ds shmbuffer; 
		
	shmctl(segment_id, IPC_STAT, &shmbuffer);

	printf("Shared Memory Segment");
	printf("Segment ID: %d\n", segment_id);
	printf("Key: %x\n", shmbuffer.shm_perm.__key);
	printf("Mode: %o\n", shmbuffer.shm_perm.mode);
	printf("Owner UID: %hu\n", shmbuffer.shm_perm.uid);
	printf("Size: %d\n", shmbuffer.shm_segsz);
	printf("Number Of Attaches: %d\n", shmbuffer.shm_nattch);

}


