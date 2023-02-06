#include <linux/kernel.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define __NR_my_syscall 450

long my_syscall_syscall(void)
{
	return syscall(__NR_my_syscall);
}

int main(int argc, char *argv[])
{
	long activity;
	activity = my_syscall_syscall();

	if(activity<0)
	{
		perror("Syscall my_syscall failed.\n");
	}
	else
	{
		printf("Syscall my_syscall ran sucessfully. Output in dmesg\n");
	}

	return 0;
}
