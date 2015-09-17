#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

//static int count=1;
//module_param(count, int, S_IRUGO);

static char *ptr = "Good Morning";
module_param(ptr, charp, S_IRUGO);

static int hello_init(void)
{
	printk(KERN_ALERT"Hello World\n");
//	printk(KERN_ALERT"%d\n", count);
	printk(KERN_ALERT"%s\n", *ptr);
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT"Good Bye\n");
	return;
}

module_init(hello_init);
module_exit(hello_exit);

