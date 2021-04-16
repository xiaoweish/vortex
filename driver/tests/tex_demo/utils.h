#include <cstdint>
#include <vector>
#include <iostream>
#include "blitter.h"

#define ISPOW2(x)   (((x) != 0) && (0 == ((x) & ((x) - 1))))

inline uint32_t ilog2 (uint32_t value) {
  	return (uint32_t)(sizeof(uint32_t) * 8UL) - (uint32_t)__builtin_clzl((value << 1) - 1UL) - 1;
}

int LoadTGA(const char *filename, 
            std::vector<uint8_t> &pixels, 
            uint32_t *width,
            uint32_t *height, 
            uint32_t *bpp);

int SaveTGA(const char *filename, 
            const std::vector<uint8_t> &pixels, 
            uint32_t width,
            uint32_t height, 
            uint32_t bpp);

int CopyBuffers(const SurfaceDesc &dstDesc, 
                int32_t dstOffsetX,
                int32_t dstOffsetY, 
                int32_t copyWidth, 
                int32_t copyHeight,
                const SurfaceDesc &srcDesc, 
                int32_t srcOffsetX,
                int32_t srcOffsetY);

void dump_image(const std::vector<uint8_t>& pixels, uint32_t width, uint32_t height, uint32_t bpp);