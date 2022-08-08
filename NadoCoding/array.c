#include <stdio.h>

int main_array(void) {
	//배열
	//int subway_1 = 30;
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d명이 타고 있습니다\n", subway_1);
	//printf("지하철 2호차에 %d명이 타고 있습니다\n", subway_2);
	//printf("지하철 3호차에 %d명이 타고 있습니다\n", subway_3);

	//int subway_array[3];
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d명이 타고 있습니다\n",i+1, subway_array[i]);
	//}

	//값 설정 방법 (값은 반드시 초기화 해야함) 아무것도 안하면  - x > 더미값
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}

	// 배열 크기는 항상 상수로 선언

	//int arr[10] = { 1, 2 }; //3번째 값부터는 자동으로'0'으로 초기화됨
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}

	//float arr_f[5] = { 1.0f,2.0f,3.0f };
	//for (int i = 0; i < 5; i++) {
	//	printf("%.2f\n", arr_f[i]);
	//}

	char c = 'A';
	printf("%c\n", c);

	//문자열 끝에는 '끝'을 의미하는 Null 문자 '\0'이 포함되어야함
	//char str[6] = "coding"; // [c][o][d][i][n][g]
	//char str[7] = "coding";
	//printf("%s\n", str);
	
	//char str[] = "coding"; //char c_array[7] = { 'c','o','d','i','n','g','\0' };
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));

	//for (int i = 0; i < sizeof(str); i++) {
	//	printf("%c\n", str[i]);
	//}

	//char kor[] = "나도코딩";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor)); //크기 9
	// 영어 1글자 : 1byte
	// 한글 1글자 : 2byte
	// 한 글
	// En gl ish
	//char 크기 : 1byte

	char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%d\n", c_array[i]); //ASCII 코드 값 출력 {null 문자는 0으로 입력}
	}

	// 참고 : ASCII 코드? ANSI (미국표준협회) 에서 제시한 표준 코드 체계
	// 7bit, 총 128개의 코드 (0~ 127)
	// a :97
	// A :65
	// 0 :48

	//printf("%c\n", 'a');
	//printf("%d\n", 'a');

	//printf("%c\n", 'b');
	//printf("%d\n", 'b');

	//printf("%c\n", '\0');
	//printf("%d\n", '\0');

	//참고 2 : 0 - 127 사이의 아스키코드 정수값에 해당하는 문자 확인
	//for (int i = 0; i < 128; i++) {
	//	printf("아스키코드 정수 %d : %c\n", i, i);
	//}
	return 0;
}