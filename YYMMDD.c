#include <stdio.h>

void main(){
    
    int year = 2016, month = 5, day = 31;
	
	day++;
	
	if(day>31){
		month++;
		day=1;
		
		if(month>12) {
			year++;
			month=1;
		}
	}
	
	printf("Date: %d년 %d월 %d일\n", year, month, day);

}