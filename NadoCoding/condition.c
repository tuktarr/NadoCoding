#include <stdio.h>
#include <time.h>
int main(void) {
	//버스를 탄다고 가정 학생 / 일반인으로 구분
	//int age = 15;
	//if (조건) (...) else (...)
	//if (age >= 20) {
	//	printf("일반인입니다.\n");
	//}
	//else {
	//	printf("학생입니다.\n");
	//}

	//초등학생(8-13) / 중학생(14-16) 고등학생(17-19)으로 나누면?
	//int age = 8;
	//if (age >= 8 && age <= 13) {
	//	printf("초등학생입니다.\n");
	//}
	//else if (age >= 14 && age <= 16) {
	//	printf("중학생입니다.\n");
	//}
	//else if (age >= 17 && age <= 19) {
	//	printf("고등학생입니다.\n");
	//}
	//else {
	//	printf("학생이 아닌가 봐요..");
	//}

	//break / continue
	// 1번부터 30번까지 있는 반에 1번에서 5번까지 발표를 합니다.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6)
	//	{
	//		printf("나머지 학생은 집에 가세요.");
	//		break;
	//	}
	//	printf("%d번 학생은 조별 발표를 준비하세요.\n",i);
	//}

	// 1번부터 30번까지 있는반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번에서 10번까지 조별 발표를 하세요.
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
		}
	}*/

	// && ||
	//int a = 10;
	//int b = 10;
	//int c = 12;
	//int d = 13;
	//
	//if (a == b || c == d) {
	//	printf("a와 b, 혹은 c와 d의 값이 같습니다.\n");
	//}
	//else
	//{
	//	printf("값이 서로 다르네요.\n");
	//}

	//가위 0 바위 1 보 2
	/*srand(time(NULL));
	int i = rand() % 3;

	if (i == 0) {
		printf("가위\n");
	}
	else if (i == 1) {
		printf("바위\n");
	}
	else if (i == 2) {
		printf("보\n");
	}

	else {
		printf("오류가 발생했습니다.");
	}*/

	//srand(time(NULL));
	//int i = rand() % 3; // 0 - 2 반환
	//switch (i) {
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요\n"); break;
	//}

	//int age = 8;
	//switch (age) {
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13: printf("초등학생입니다."); break;
	//case 14: 
	//case 15: 
	//case 16: printf("중학생입니다."); break;
	//case 17: 
	//case 18:
	//case 19:printf("고등학생입니다."); break;
	//default: printf("학생이 아닌가봐요."); break;

	//}

	//up and down -프로젝트

srand(time(NULL));
	int num = rand() % 100 + 1; // 1 - 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	//chance > 0 대신 1(true)로 해도 됨 (무한루프)
while (chance > 0) {
	printf("남은 기회 %d번\n", chance--);
	printf("숫자를 맞혀보세요 (1-100)");
	scanf_s("%d", &answer);

	if (answer > num) {
		printf("Down ↓\n\n");

	}
	else if (answer < num) {
		printf("UP ↑\n\n");
	}
	else if (answer == num) {
		printf("정답입니다. \n\n");
		break;
	}
	else {
		printf("알 수 없는 오류가 발생했습니다.");
	}

	if (chance == 0) {
		printf("모든 기회를 다 사용하셨네요 아쉽게 실패했습니다.");
		break;
	}
}

	return 0;
}