/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __LINUX_BRIDGE_EBT_ARPREPLY_H
#define __LINUX_BRIDGE_EBT_ARPREPLY_H
#include <linux/if_ether.h>
struct ebt_arpreply_info {
  unsigned char mac[ETH_ALEN];
  int target;
};
#define EBT_ARPREPLY_TARGET "arpreply"
#endif
