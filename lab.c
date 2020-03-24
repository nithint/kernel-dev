#include <linux/module.h>
#include <linux/sched.h>

int my_init_module()
{
    printk("my_init_module executed\n");
    return 0;
}

void my_cleanup_module()
{
    printk("my_cleanup_module executed\n");
}

module_init(my_init_module);
module_exit(my_cleanup_module);
