#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

void State(int life)
{
	printf("Life : ");

	for (int i = 0; i < life; i++)
	{
		printf("♥");
	}

	printf("\n");
}

int main()
{
#pragma region 의사 난수

	// rand() : 0 ~ 32767 사이의 난수의 값을 반환하는 함수입니다.

	// time(NULL) : 1970년 1월 1일 00:00:00 UTC이후에 지난 초(second)를 반환하는 함수입니다.

	// srand(seed) : 난수 생성기의 시드를 설정하는 함수입니다. 

	// srand(time(NULL));
	// 
	// int index = rand() % 10 + 1;
	// 
	// printf("index의 값 : %d\n", index);

#pragma endregion

#pragma region 셔플 함수

	//	int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//	
	//	int size = sizeof(list) / sizeof(int);
	//	
	//	Shuffle(list, size);
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		printf("%d ", list[i]);
	//	}

#pragma endregion

#pragma region 게임

	//	srand(time(NULL));
	//	
	//	int life = 5;
	//	int answer = 0;
	//	int computer = 0;
	//	
	//	computer = rand() % 50 + 1;
	//	
	//	printf("컴퓨터가 가지고 있는 값을 입력하세요. \n");
	//	
	//	while (life > 0)
	//	{
	//		State(life);
	//	
	//		printf("입력 : ");
	//	
	//		scanf_s("%d", &answer);
	//	
	//		printf("\n");
	//	
	//		if (answer < computer)
	//		{
	//			life--;
	//	
	//			printf("컴퓨터가 가지고 있는 값보다 작습니다.\n");
	//		}
	//		else if (answer > computer)
	//		{
	//			life--;
	//	
	//			printf("컴퓨터가 가지고 있는 값보다 큽니다.\n");
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	
	//		printf("\n");
	//	}
	//	
	//	printf("\n");
	//	
	//	if (life > 0)
	//	{
	//		printf("V I C T O R Y");
	//	}
	//	else
	//	{
	//		printf("D E F E A T");
	//	}

#pragma endregion

	return 0;
}