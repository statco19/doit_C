#include <stdio.h>
#include <malloc.h>

int main(){

    unsigned char limit_table[3];
	
	unsigned char *p[3];
	
	int age, member, temp, sum;
	
	for(age=0;age<3;age++){
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n",age+2);
		
		printf("이 연령대는 몇 명입니까?\n");
		scanf("%d", &temp);
		
		limit_table[age] = (unsigned char) temp;
		p[age] = (unsigned char *)malloc(limit_table[age]);
		for(member=0;member<limit_table[age];member++){
			
			printf("%dth : \n", member+1);
			scanf("%d", &temp);
			
			*(p[age]+member) = (unsigned char) temp;
		} // member for
	} // age for
	
	printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");
	
	for(age=0;age<3;age++){
		sum = 0;
		
		for(member=0;member<limit_table[age];member++){
			sum += *(p[age]+member);
		}
		printf("%d0대 : ", age+2);
		printf("%5.2f\n", (double) sum / limit_table[age]);
	}
    return 0;

}
