#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int card;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	/* grab a random card, 13 to a suit */
	card = rand() % 13;		/* range is 0 to 12 */

	printf("You drew card: ");
	switch(card)
	{
		case 0:
			printf("Ace\n");
			break;
		case 10:
			printf("Jack\n");
			break;
		case 11:
			printf("Queen\n");
			break;
		case 12:
			printf("King\n");
			break;
		default:
			printf("%d\n",card+1);
	}

	return(0);
}
