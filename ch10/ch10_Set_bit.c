#include <stdio.h>

unsigned char SetBit(unsigned char dest_data, unsigned char bit_num) {
	
	if (bit_num < 8) dest_data = dest_data | (0x01 << bit_num);
}

int main(){

   unsigned char lamp_state = 0x77;
   printf("%X->", lamp_state);
	unsigned char bit_num = 3;
	printf("%X\n", SetBit(lamp_state, bit_num));

	return 0;
}
