#include <stdio.h>

typedef struct People {
	char name[12];
	unsigned short int age;
	float weight;
	float height;
} Person;

int main(){
	Person data;
	
	printf("대상자의 정보를 입력하세요\n");
	printf("이름 : \n");
	scanf("%s", data.name);
	printf("나이 : \n");
	scanf("%hu", &data.age);
	printf("키 : \n");
	scanf("%f", &data.height);
	printf("몸무게 : \n");
	scanf("%f", &data.weight);
	
	printf("입력한 정보는 다음과 같습니다.\n");
	printf("%s : %d세, %.1fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);
    
	Person data2;
	Person *p;
	p = &data2;
	(*p).age = 23;
	printf("\n%d세", data2.age);
	p->height = 176.3;
	printf("\n%.1fcm",data2.height);
    return 0;

}
