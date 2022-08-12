#include <stdio.h>

struct Gameinfo {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; //������ü ����
};

typedef struct Gameinfomation {
	char* name;
	int year;
	int price;
	char* company;

	struct Gameinfo* friendGame; //������ü ����
} GAME_INFO;

int main_struct(void) {
	// [���� ���]
	// �̸� : ��������
	// �߸ų⵵ : 2017��
	// ���� : 50��
	// ���ۻ� : ����ȸ��

	//char* name = "��������";
	//int year = 2017;
	//int price = 50;
	//char* company = "����ȸ��";

	// [�Ǵٸ� ���� ���]
	// �̸� : �ʵ�����
	// �߸ų⵵ : 2017��
	// ���� : 100��
	// ���ۻ� : �ʵ�ȸ��

	//char* name2 = "�ʵ�����";
	//int year2 = 2017;
	//int price2 = 50;
	//char* company2 = "�ʵ�ȸ��";

	// ����ü ���
	struct Gameinfo gameinfo1;
	gameinfo1.name = "��������";
	gameinfo1.year = 2017;
	gameinfo1.price = 50;
	gameinfo1.company = "����ȸ��";
	
	// ����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("	���Ӹ�: %s\n", gameinfo1.name);
	printf("	�߸ų⵵: %d\n", gameinfo1.year);
	printf("	����: %d\n", gameinfo1.price);
	printf("	���ۻ�: %s\n", gameinfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct Gameinfo gameinfo2 = { "�ʵ�����", 2017, 100, "�ʵ�ȸ��" };
	printf("-- �Ǵٸ� ���� ��� ���� --\n");
	printf("	���Ӹ�: %s\n", gameinfo2.name);
	printf("	�߸ų⵵: %d\n", gameinfo2.year);
	printf("	����: %d\n", gameinfo2.price);
	printf("	���ۻ�: %s\n", gameinfo2.company);

	// ����ü �迭

	struct Gameinfo gameArray[2] = {
		{ "��������", 2017, 50, "����ȸ��" }, 
		{ "�ʵ�����", 2017, 100, "�ʵ�ȸ��" } 
	};

	// ����ü ������
	struct Gameinfo* gamePtr; //�̼Ǹ�
	gamePtr = &gameinfo1;
	printf("\n\n-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("	���Ӹ�: %s\n", (*gamePtr).name); //int�� ���� *ptr
	printf("	�߸ų⵵: %d\n", (*gamePtr).year);
	printf("	����: %d\n", (*gamePtr).price);
	printf("	���ۻ�: %s\n", (*gamePtr).company);
	//printf("	���ۻ�: %s\n", gamePtr.company);

	printf("	���Ӹ�: %s\n", gamePtr->name); //int�� ���� *ptr
	printf("	�߸ų⵵: %d\n", gamePtr->year);
	printf("	����: %d\n", gamePtr->price);
	printf("	���ۻ�: %s\n", gamePtr->company);
	
	// ���� ��ü ���� �Ұ�
	gameinfo1.friendGame = &gameinfo2;
	printf("\n\n-- ������ü�� ���� ��� ���� --\n");
	printf("	���Ӹ�: %s\n", gameinfo1.friendGame->name); //int�� ���� *ptr
	printf("	�߸ų⵵: %d\n", gameinfo1.friendGame->year);
	printf("	����: %d\n", gameinfo1.friendGame->price);
	printf("	���ۻ�: %s\n", gameinfo1.friendGame->company);

	// typedef
	// �ڷ����� ���� ����
	int i = 1;
	typedef int ����; // int �� ������ �Ǵ� ��
	���� �������� = 3; // int i = 3;
	typedef float �Ǽ�;
	�Ǽ� �Ǽ����� = 3.23f; // float f= 3.23f;
	printf("\n\n�������� : %d , �Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct Gameinfo ��������;
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "�ѱ� ����2";
	game2.year = 2017;

	/*
		struct Gameinfomation game3; // ���� struct �ڿ� Gameinformation�� ����� �����ߴٸ� ��� �Ұ�
	*/
	

	return 0;
}