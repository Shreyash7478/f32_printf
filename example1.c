#include"f32_printf.h"



int main(){
	f32_printf(F_MAGENTA|F0_BOLD,"G");
	f32_printf(F_RED|F0_BOLD,"O");
	f32_printf(F_GREEN|F0_BOLD,"O");
	f32_printf(F_MAGENTA|F0_BOLD,"G");
	f32_printf(F_BLUE|F0_BOLD,"L");
	f32_printf(F_RED|F0_BOLD,"E");
	printf("\n");
	f32_printf(B_RED,"  ");
	f32_printf(B_BLUE,"  ");
	printf(" Microsoft\n");
	f32_printf(B_MAGENTA,"  ");
	f32_printf(B_GREEN,"  ");
	printf("\n");
	f32_printf(F_RED|F0_BOLD,"TESLA");
	printf("\n");
	f32_printf(F_MAGENTA,"facebook");
	printf("\n");
	f32_printf(F_BLACK|B_WHITE,"Linked");
	f32_printf(B_MAGENTA|F0_BOLD,"in");
	printf("\n");
}
