#include <linux/module.h> 
#include <linux/kernel.h> 

int hello_init(void){ 
	printk ("[Group-6][Drew Christner, Haroon Radmard, Brice Reason, Rajeev Vemuri] Hello, I am Drew Christner, a student of CSE330 Spring 2023\n"); 
	return 0; 

} 

 

void hello_exit(void){ 
	printk("Goodbye -Drew Christner\n"); 
} 

/*We need at least two functions in a module, init and exit. Init function is 
called when the module is loaded (insmod) into the kernel, and exit function 
is called when the module is removed from the kernel (rmmod).*/ 
module_init(hello_init); //defines the hello_init to be called at module load 
module_exit(hello_exit); // defines the hello_exit to be called at module unload  
MODULE_LICENSE("GPL");   // defines license of the module  