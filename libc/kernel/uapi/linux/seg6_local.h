/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_SEG6_LOCAL_H
#define _UAPI_LINUX_SEG6_LOCAL_H
#include <linux/seg6.h>
enum {
  SEG6_LOCAL_UNSPEC,
  SEG6_LOCAL_ACTION,
  SEG6_LOCAL_SRH,
  SEG6_LOCAL_TABLE,
  SEG6_LOCAL_NH4,
  SEG6_LOCAL_NH6,
  SEG6_LOCAL_IIF,
  SEG6_LOCAL_OIF,
  SEG6_LOCAL_BPF,
  SEG6_LOCAL_VRFTABLE,
  SEG6_LOCAL_COUNTERS,
  SEG6_LOCAL_FLAVORS,
  __SEG6_LOCAL_MAX,
};
#define SEG6_LOCAL_MAX (__SEG6_LOCAL_MAX - 1)
enum {
  SEG6_LOCAL_ACTION_UNSPEC = 0,
  SEG6_LOCAL_ACTION_END = 1,
  SEG6_LOCAL_ACTION_END_X = 2,
  SEG6_LOCAL_ACTION_END_T = 3,
  SEG6_LOCAL_ACTION_END_DX2 = 4,
  SEG6_LOCAL_ACTION_END_DX6 = 5,
  SEG6_LOCAL_ACTION_END_DX4 = 6,
  SEG6_LOCAL_ACTION_END_DT6 = 7,
  SEG6_LOCAL_ACTION_END_DT4 = 8,
  SEG6_LOCAL_ACTION_END_B6 = 9,
  SEG6_LOCAL_ACTION_END_B6_ENCAP = 10,
  SEG6_LOCAL_ACTION_END_BM = 11,
  SEG6_LOCAL_ACTION_END_S = 12,
  SEG6_LOCAL_ACTION_END_AS = 13,
  SEG6_LOCAL_ACTION_END_AM = 14,
  SEG6_LOCAL_ACTION_END_BPF = 15,
  SEG6_LOCAL_ACTION_END_DT46 = 16,
  __SEG6_LOCAL_ACTION_MAX,
};
#define SEG6_LOCAL_ACTION_MAX (__SEG6_LOCAL_ACTION_MAX - 1)
enum {
  SEG6_LOCAL_BPF_PROG_UNSPEC,
  SEG6_LOCAL_BPF_PROG,
  SEG6_LOCAL_BPF_PROG_NAME,
  __SEG6_LOCAL_BPF_PROG_MAX,
};
#define SEG6_LOCAL_BPF_PROG_MAX (__SEG6_LOCAL_BPF_PROG_MAX - 1)
enum {
  SEG6_LOCAL_CNT_UNSPEC,
  SEG6_LOCAL_CNT_PAD,
  SEG6_LOCAL_CNT_PACKETS,
  SEG6_LOCAL_CNT_BYTES,
  SEG6_LOCAL_CNT_ERRORS,
  __SEG6_LOCAL_CNT_MAX,
};
#define SEG6_LOCAL_CNT_MAX (__SEG6_LOCAL_CNT_MAX - 1)
enum {
  SEG6_LOCAL_FLV_UNSPEC,
  SEG6_LOCAL_FLV_OPERATION,
  SEG6_LOCAL_FLV_LCBLOCK_BITS,
  SEG6_LOCAL_FLV_LCNODE_FN_BITS,
  __SEG6_LOCAL_FLV_MAX,
};
#define SEG6_LOCAL_FLV_MAX (__SEG6_LOCAL_FLV_MAX - 1)
enum {
  SEG6_LOCAL_FLV_OP_UNSPEC,
  SEG6_LOCAL_FLV_OP_PSP,
  SEG6_LOCAL_FLV_OP_USP,
  SEG6_LOCAL_FLV_OP_USD,
  SEG6_LOCAL_FLV_OP_NEXT_CSID,
  __SEG6_LOCAL_FLV_OP_MAX
};
#define SEG6_LOCAL_FLV_OP_MAX (__SEG6_LOCAL_FLV_OP_MAX - 1)
#endif
