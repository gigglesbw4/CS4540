#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_INFO */
#include <linux/init.h>         /* Needed for the macros */
#include "/home/cclub/CS4540/A6/demo/list.h"
#include <linux/slab.h>
#include <linux/printk.h>

static int __init hello_start(void){

printk(KERN_INFO "Loading module...\n");
printk(KERN_INFO "Hello world\n");

return 0;
}
static void __exit hello_end(void)
{
printk(KERN_INFO "Removing Module\n");
}
module_init(hello_start);
module_exit(hello_end);