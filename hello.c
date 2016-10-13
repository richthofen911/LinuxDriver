#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void){
  printk("<1> Hello, world\n");
}

static void hello_exit(void){
  printk("<1> Goodby, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);
