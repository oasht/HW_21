#include <iostream>
#include <vector>
#include <random>
#include <Windows.h>
using namespace std;
class Card
{
protected:
	int num;
	char suit;
public:
	Card()
	{
		num = 0;
		suit = 'n';
	}
	Card(int _num, char _suit)
	{
		this->num = _num;
		this->suit = _suit;
	}
	int Get_num();
	int Get_suit();
	friend ostream& operator << (ostream& os, Card& _card);
	friend void Color(Card& _card);
};

enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

void SetColor(int text, int background);
