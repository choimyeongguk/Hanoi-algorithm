#include <stdio.h>

int move(int N, char start, char to){
	printf("\n%d번 원반을 %c에서 %c로 이동", N, start, to);
}

int hanoi(int N, char start, char to, char via){
	if(N==1){
		move(N, start, to);
	}else{
		hanoi(N-1, start, via, to);
		move(N, start, to);
		hanoi(N-1, via, to, start);
	}
}

int main(){
	int num;
	printf("원반 개수 입력: ");
	scanf("%d", &num);
	hanoi(num, 'A', 'C', 'B');
	return 0; 
}
