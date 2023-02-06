#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE0(my_syscall)

{
    printk("This is a new system call ChristnerRadmardVemuri implemented.\n");
    return 0;
}
