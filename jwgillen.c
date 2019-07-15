#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Card
{
	int value;
	char suit;
	char face;
} card;

int printcard(struct Card card)
{
	if (card.face != NULL)
	{
		return printf("%c-%c\n", card.face, card.suit);
	} else {
		return printf("%d-%c\n", card.value, card.suit);
	}
}

int main(int argc, char const *argv[])
{
	srand(time(NULL));

	struct Card deck[4][13];

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{

			deck[i][j].value = j + 1;

			switch (i)
			{
				case 0:
					deck[i][j].suit = 'S';
					break;
				case 1:
					deck[i][j].suit = 'C';
					break;
				case 2:
					deck[i][j].suit = 'H';
					break;
				case 3:
					deck[i][j].suit = 'D';
					break;
			}

			switch (j)
			{
				case 0:
					deck[i][j].face = 'A';
					break;
				case 10:
					deck[i][j].face = 'J';
					break;
				case 11:
					deck[i][j].face = 'Q';
					break;
				case 12:
					deck[i][j].face = 'K';
					break;
				default:
					deck[i][j].face = NULL;
			}
		}
	}
	/*
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 13; ++j)
		{
			printcard(deck[i][j]);
		}
	}
	*/

	printcard(deck[rand() % 4][rand() % 13]);
	printcard(deck[rand() % 4][rand() % 13]);

	return 0;
}
