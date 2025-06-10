#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello Kitty: Módulo cargado\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Hello Kitty: Módulo descargado\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tu Nombre");
MODULE_DESCRIPTION("Un módulo simple de Hello Kitty");
MODULE_VERSION("1.0");