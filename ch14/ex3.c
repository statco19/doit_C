#include <stdio.h>

int main(){
    char name[32];
	float weight, height;
	char BT;
	int heartbeat;
	
	scanf("%s %f %f %c %d", name, &weight, &height, &BT, &heartbeat);
	printf("이름: %s, 몸무게: %4.1fkg, 키: %5.1fcm, 혈액형: %c형, 심박수: %d회 \n", name, weight, height, BT, heartbeat);
	
    return 0;

}
