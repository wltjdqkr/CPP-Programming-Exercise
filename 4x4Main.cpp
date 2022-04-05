#include "Ranking.h"
extern int playFifteenPuzzle();
void main()
{
	loadRanking("Ranking.txt");
	int rank = playFifteenPuzzle();
	printRanking();
	storeRanking("Ranking.txt");
}
