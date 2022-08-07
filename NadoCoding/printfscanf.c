#include <stdio.h>
int mainprintf(void)
{
	//정수형 변수에 대한 예제
	//int age = 12;
	//printf("%d\n", age);
	////age = 13;
	//printf("%d\n", age);

	/*printf("1\n");
	printf("2\n");
	printf("3\n");*/

	//실수형 변수에 대한 예제
	//float f = 46.5f;
	//printf("%.2f\n", f);
	//double d = 4.428;
	//printf("%.2lf\n", d);

	//const int YEAR = 2000;
	//printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001;

	//연산
	//int add = 3 + 7;
	//printf("3 + 7 = %d\n",add);
	//printf("%d + %d = %d\n", 30, 79, 30 + 79);
	//문자(한 글자) , 문자열(한 글자 이상의 여러 글자)
	//char c = 'a';
	//printf("%c\n", c);

	//char str[128];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	//프로젝트 
	//경찰관이 범죄자의 정보를 입수 (조서작성)
	// 이름? 나이? 키? 몸무게? 범죄명?

	char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이가 몇 살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이에요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀나요?");
	scanf_s("%s", what, sizeof(what));

	//조서내용 출력
	printf("\n\n--------범죄자정보--------\n\n");
	printf("이름	: %s\n", name);
	printf("나이	: %d\n", age);
	printf("몸무게	: %.2f\n", weight);
	printf("키	: %.2lf\n", height);
	printf("범죄	: %s\n", what);

	return 0;
}