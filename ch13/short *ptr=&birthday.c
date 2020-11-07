#include <stdio.h>

int main(){
    short birthday;
	short *ptr;
	ptr = &birthday; // 포인터 변수에 birthday 주소 삽입
	*ptr = 0x0412; // birthday 변수에 대입할 값, 즉 포인터 변수가 가리키는 대상
	//short *ptr = &birthday;
	//*ptr = 0x0412;
	
	printf("birthday = %d (0x%04X)\n", birthday, birthday);
    return 0;

}
