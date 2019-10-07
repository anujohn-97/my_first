#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");

MODULE_AUTHOR("Anu John");

MODULE_DESCRIPTION("hello world LKM");

MODULE_VERSION("0.1");

static int_init hello_start(void)
{
  printk(KERN_INFO "Loading hello module Anu...\n");
  printk(KERN_INFO "Hellooo\n");
  return 0;
}

static void_exit hello_end(void)
{
  printk(KERN_INFO "Goodbye Anu\n");
}

module_init(hello_start);
module_exit(hello_end);
