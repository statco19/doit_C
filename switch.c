#include <stdio.h>

void main(){
    
    int score = 86;
	char grade;
	/*
	switch(score / 10) {
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade ='B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	}
	*/
	
	switch(score / 10) {
		case 10: case 9: grade = 'A'; break; 
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break; 
		case 6: grade = 'D'; break; 
		default: grade = 'F'; 
		// default 문에서 break 생략 가능
	}
	
	printf("당신의 점수는 %d점이고 등급은 %c입니다. \n", score, grade);
} 