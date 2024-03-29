#ifndef _MC6845_H_
#define _MC6845_H_

#define PIXEL_ON		(0x3f<<5) //0xffff
#define PIXEL_OFF		0x0

O_INLINE void mc6845_writeReg(byte a, byte d);
O_INLINE byte mc6845_readReg(byte a);
O_INLINE void mc6845_write(byte a, byte d);
O_INLINE byte mc6845_read(byte a);

O_INLINE void mc6845_curBlink(void);

void mc6845_init(void);
O_INLINE void mc6845_setupScreen(int mode);
void mc6845_drawScreen(void *video, int width, int height, int scale);

extern byte *get_videorom_mem(dword size);

#endif
