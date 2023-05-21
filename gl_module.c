// SPDX-License-Identifier: GPL-2.0
/*
 * This is a simple layout for writing a Linux kernel device driver.
 */

#include <linux/init.h>
#include <linux/module.h>

static int __init gl_module_init(void)
{
	pr_info("gl_module: module is loaded\n");
	return 0;
}

static void __exit gl_module_exit(void)
{
	pr_info("gl_module: module is unloaded\n");
}

module_init(gl_module_init);
module_exit(gl_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sergiy Us <sergiy.us@gmail.com>");
MODULE_DESCRIPTION("A simple global logic base camp module");
MODULE_VERSION("0.1");
