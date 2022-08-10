#include <stdio.h>
#include <time.h>
// 10¸¶¸®ÀÇ ¼­·Î ´Ù¸¥ µ¿¹° (°¢ Ä«µå 2Àå¾¿)
// »ç¿ëÀÚ·ÎºÎÅÍ 2°³ÀÇ ÀÔ·Â°ªÀ» ¹Þ¾Æ¼­ -> °°Àº µ¿¹° Ã£À¸¸é Ä«µå µÚÁý±â
// ¸ðµç µ¿¹° ½ÖÀ» Ã£À¸¸é °ÔÀÓ Á¾·á
// ÃÑ ½ÇÆÐ È½¼ö ¾Ë·ÁÁÖ±â

int arrayAnimal[4][5]; // Ä«µå Áöµµ (20ÀåÀÇ Ä«µå)
int checkAnimal[4][5]; // µÚÁýÇû´ÂÁö ¿©ºÎ È®ÀÎ
char * strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();


int main(void) {

	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0; //½ÇÆÐ È½¼ö

	while (1) {
		int select1 = 0; // »ç¿ëÀÚ°¡ ¼±ÅÃÇÑ Ã³À½ ¼ö
		int select2 = 0;

		printAnimals(); // µ¿¹° À§Ä¡ Ãâ·Â
		printQuestion(); // ¹®Á¦ Ãâ·Â (Ä«µå Áöµµ)
		printf("µÚÁýÀ» Ä«µå¸¦ 2°³ °í¸£¼¼¿ä. : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2) // °°Àº ¯—µå ¼±ÅÃ ½Ã ¹«È¿
		{
			continue;
		}

		//ÁÂÇ¥¿¡ ÇØ´çÇÏ´Â Ä«µå¸¦ µÚÁý¾î º¸°í °°ÀºÁö ¾È°°ÀºÁö È®ÀÎ
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);
	
		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		//°°Àº µ¿¹°ÀÎ °æ¿ì
		if ((checkAnimal[firstSelect_x][firstSelect_y] == 0) //Ä«µå°¡ µÚÁýÈ÷Áö ¾Ê¾Ò´ÂÁö
			&& (checkAnimal[firstSelect_x][firstSelect_y] == 0)

			&&

			(arrayAnimal[firstSelect_x][firstSelect_y]
				== arrayAnimal[secondSelect_x][secondSelect_y])
			) //µÎ µ¿¹°ÀÌ °°ÀºÁö
		{
			printf("\n\nºù°í! : %s ¹ß°ß\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
	}
	return 0;
}

void initAnimalArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName() {
	strAnimal[0] = "¿ø¼þÀÌ";
	strAnimal[1] = "ÇÏ¸¶";
	strAnimal[2] = "Åä³¢";
	strAnimal[3] = "Ä¡Å¸";
	strAnimal[4] = "°ÅºÏÀÌ";
	strAnimal[5] = "µÅÁö";
	strAnimal[6] = "±â¸°";
	strAnimal[7] = "Å¸Á¶";
	strAnimal[8] = "³«Å¸";
	strAnimal[9] = "°­¾ÆÁö";
}

void shuffleAnimal() {
	
	//¤±¤±¤±¤±¤±
	//¤±¤±¤±¤±¤±
	//¤±¤±¤±¤±¤±
	//¤±¤±¤±¤±¤±
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

//ÁÂÇ¥¿¡¼­ ºó°ø°£ Ã£±â
int getEmptyPosition() {
	while (1) {
		int randPos = rand() % 20; //0 - 19 »çÀÌ ¼ýÀÚ ¹ÝÈ¯
		//19 -> (3,4)
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1) {
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x) {
	// 19 -> (3,4)
	return x / 5;
}

int conv_pos_y(int y) {
	return y % 5; //y¸¦ 5 ·Î ³ª´« ³ª¸ÓÁö °ª
}

void printAnimals() {
	//¤±¤±¤±¤±¤± 0 1 2 3 4 
	//¤±¤±¤±¤±¤± 5 6 7 8 9
	//¤±¤±¤±¤±¤± 
	//¤±¤±¤±¤±¤±
	printf("\n==== ºñ¹ÐÀÎµ¥ ¸ô·¡ º¸¿©ÁÝ´Ï´Ù. ====\n\n");
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}

		printf("\n");

	}
	printf("\n=========================\n\n");
}
void printQuestion() {
	printf("\n\n(¹®Á¦)\n\n");
	int seq = 0;

	//¤±¤±¤±¤±¤± 0 1 2 3 4 
	//¤±¤±¤±¤±¤± 5 6 7 8 9
	//¤±¤±¤±¤±¤± 
	//¤±¤±¤±¤±¤±

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 5; j++) {
			//Ä«µå¸¦ µÚÁý¾î¼­ Á¤´äÀ» ¸ÂÃèÀ¸¸é 'µ¿¹° ÀÌ¸§'
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			//¾ÆÁ÷ µÚÁýÁö ¸øÇßÀ¸¸é (Á¤´äÀ» ¸ø ¸ÂÇûÀ¸¸é) µÞ¸é -> À§Ä¡¸¦ ³ªÅ¸³»´Â ¼ýÀÚ
			else
			{
				printf("%8d", seq);
			}
		}

		printf("\n");

	}
}