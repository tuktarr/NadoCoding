#include <stdio.h>
int mainprintf(void)
{
	//������ ������ ���� ����
	//int age = 12;
	//printf("%d\n", age);
	////age = 13;
	//printf("%d\n", age);

	/*printf("1\n");
	printf("2\n");
	printf("3\n");*/

	//�Ǽ��� ������ ���� ����
	//float f = 46.5f;
	//printf("%.2f\n", f);
	//double d = 4.428;
	//printf("%.2lf\n", d);

	//const int YEAR = 2000;
	//printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2001;

	//����
	//int add = 3 + 7;
	//printf("3 + 7 = %d\n",add);
	//printf("%d + %d = %d\n", 30, 79, 30 + 79);
	//����(�� ����) , ���ڿ�(�� ���� �̻��� ���� ����)
	//char c = 'a';
	//printf("%c\n", c);

	//char str[128];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);

	//������Ʈ 
	//�������� �������� ������ �Լ� (�����ۼ�)
	// �̸�? ����? Ű? ������? ���˸�?

	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̰� �� ���̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg�̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �̿���?");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ����������?");
	scanf_s("%s", what, sizeof(what));

	//�������� ���
	printf("\n\n--------����������--------\n\n");
	printf("�̸�	: %s\n", name);
	printf("����	: %d\n", age);
	printf("������	: %.2f\n", weight);
	printf("Ű	: %.2lf\n", height);
	printf("����	: %s\n", what);

	return 0;
}