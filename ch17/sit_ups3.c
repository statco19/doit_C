#include <stdio.h>
#include <malloc.h>

void main(){

    unsigned char *p_limit_table;
	
	unsigned char **p;
	int age, age_step, member, temp, sum;
	
	printf("%d0대부터 시작해서 연령층이 몇 개인가요 : \n",age+2);
	scanf("%d", &age_step);
	
	p_limit_table = (unsigned char *)malloc(age_step);
	p = (unsigned char **)malloc(sizeof(unsigned char*) * age_step);
	
	for(age=0;age < age_step; age++){
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n",age+2);
		printf("이 연령대는 몇 명입니까? : \n");
		scanf("%d",&temp);
		
		*(p_limit_table + age) = (unsigned char) temp;
		*(p+age) = (unsigned char *)malloc(*(p_limit_table + age));
		for(member=0;member<*(p_limit_table+age);member++) {
			printf("%dth : \n", member+1);
			scanf("%d", &temp);
			*(*(p+age)+member) = (unsigned char) temp;
		}
	}
	
	printf("\n연령별 평균 윗몸 일으키기 횟수\n");
	for(age=0;age<age_step;age++) {
		printf("%d0대 : ", age+2);
		sum = 0;
		for(member=0;member<*(p_limit_table + age);member++) {
			sum += *(*(p+age) + member);
		}
		printf("%5.2f\n", (double) sum / *(p_limit_table + age));
	}

}
