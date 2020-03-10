#include"f32_printf.h"

void f32_printf(uint32_t formatting, char *out,...){
	va_list ap;
	va_start(ap,out);
	uint8_t fcolor = __GETFCOLOR__(formatting);
	uint8_t bcolor = __GETBCOLOR__(formatting);
	uint8_t format0= __GETF0__(formatting);
	uint8_t format1= __GETF1__(formatting);

	if(fcolor != EMPTY){
		printf("\033[%dm",fcolor);
	}
	if(bcolor != EMPTY){
		printf("\033[%dm",bcolor);
	}
	if(format0 != EMPTY){
		printf("\033[%dm",format0);
	}
	if(format1 != EMPTY){
		printf("\033[%dm",format1);
	}
	vprintf(out,ap);
	va_end(ap);
	printf("\033[0m");
}
