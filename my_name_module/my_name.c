#include <linux/module.h> 
#include <linux/kernel.h> 

int my_name_init(void){ 
	printk ("[Group-6][Drew Christner, Haroon Radmard, Rajeev Vemuri] Hello, I am Drew Christner, a student of CSE330 Spring 2023\n"); 
	return 0; 

} 

 

void my_name_exit(void){ 
	printk("Goodbye -Drew Christner\n"); 
} 

/*We need at least two functions in a module, init and exit. Init function is 
called when the module is loaded (insmod) into the kernel, and exit function 
is called when the module is removed from the kernel (rmmod).*/ 
module_init(my_name_init); //defines the _init to be called at module load 
module_exit(my_name_exit); // defines the _exit to be called at module unload  
MODULE_LICENSE("GPL");   // defines license of the module  
