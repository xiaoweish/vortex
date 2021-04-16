#ifndef _COMMON_H_
#define _COMMON_H_

#define KERNEL_ARG_DEV_MEM_ADDR 0x7ffff000

struct kernel_arg_t {
  uint32_t num_tasks;
  uint32_t format;
  uint32_t filter;
  uint32_t wrap;
  uint32_t src_logWidth;
  uint32_t src_logHeight;
  uint32_t src_stride;
  uint32_t src_pitch;
  uint8_t src_ptr;
  uint32_t dst_width;
  uint32_t dst_height;
  uint32_t dst_stride;  
  uint32_t dst_pitch;
  uint32_t dst_ptr;  
};

#endif