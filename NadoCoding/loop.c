#include <stdio.h>
int main_loop(void) {
	//�Ƕ�̵带 �׾ƶ�
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	/*
	    *
	   ***
	  *****
	 *******
	*/

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}