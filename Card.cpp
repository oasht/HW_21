#include "Card.h"

int Card::Get_num()
{
		return num;
}

int Card::Get_suit()
{
	return suit;
}

ostream& operator<<(ostream& os, Card& _card)
{
	Color(_card);
	if (_card.num == 11)
		os << 'V' << " " << _card.suit;
	else if (_card.num == 12)
		os << 'D' << " " << _card.suit;
	else if (_card.num == 13)
		os << 'K' << " " << _card.suit;
	else if (_card.num == 14)
		os << 'T' << " " << _card.suit; else
		os << _card.num << " " << _card.suit;
	SetColor(0, 15);
	return os;
}

void Color(Card& _card)
{
	if (_card.Get_suit() == 3)
		SetColor(4, 15);
	else if(_card.Get_suit() == 4)
		SetColor(4, 15);
	else
		SetColor(0, 15);
}

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
