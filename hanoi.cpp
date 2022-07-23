#include <stdio.h>

int move(int N, char start, char to){
	printf("\n%d�� ������ %c���� %c�� �̵�", N, start, to);
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
	printf("���� ���� �Է�: ");
	scanf("%d", &num);
	hanoi(num, 'A', 'C', 'B');
	return 0; 
}
