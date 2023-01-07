#include "Card.h"

void main()
{
	srand(time(NULL));
	system("color F0");
	vector <Card> deck{ Card(6,3), Card(6,4), Card(6,5) , Card(6,6), Card(7,3), Card(7,4), Card(7,5) , Card(7,6),
	Card(8,3), Card(8,4), Card(8,5) , Card(8,6), Card(9,3), Card(9,4), Card(9,5) , Card(9,6), Card(10,3), Card(10,4), Card(10,5) , Card(10,6),
	Card(11,3), Card(11,4), Card(11,5) , Card(11,6),Card(12,3), Card(12,4), Card(12,5) , Card(12,6), Card(13,3), Card(13,4), Card(13,5) , Card(13,6),
	Card(14,3), Card(14,4), Card(14,5) , Card(14,6) };
	vector<Card> player_1, player_2;

	random_shuffle(deck.begin(), deck.end());

	for (int i = 0; i < 18; i++)
		player_1.push_back(deck[i]);

	for (int i = 18; i < 36; i++)
		player_2.push_back(deck[i]);

	int size = 10;

	for (int i = 0; i < size; i++)
	{
		cout << "                                      " << i + 1 << " round" << endl << endl;
		cout << "First player's card --> "<< player_1[i] << endl;
		Sleep(1000);
		cout << "Second player's card --> "<< player_2[i] << endl<<endl;
		Sleep(1000);
		if (player_1[i].Get_num() > player_2[i].Get_num())
		{
			player_1.push_back(player_2[i]);
			player_2.pop_back();
			cout << "                              First player takes both cards" << endl;
		}
		else if(player_2[i].Get_num() > player_1[i].Get_num())
		{
			player_2.push_back(player_1[i]);
			player_1.pop_back();
			cout << "                             Second player takes both cards" << endl;
		}
		else if(player_2[i].Get_num() == player_1[i].Get_num())
		{
			player_1.push_back(player_1[i]);
			player_2.push_back(player_2[i]);
			cout << "                             Nobody takes cards" << endl;
		}
		Sleep(3000);
		system("cls");
	}
	SetColor(4, 15);
	cout << "                                        !!!FINAL RESULTS!!!" << endl << endl;
	SetColor(0, 15);
	cout << "First player got " << player_1.size() << " cards" << endl;
	cout << "Second player got " << player_2.size() << " cards" << endl<<endl;
	SetColor(4, 15);
	if (player_1.size() > player_2.size())
		cout << "                                        First player wins!" << endl;
	else if (player_1.size() < player_2.size())
		cout << "                                        Second player wins!" << endl;
	else if (player_1.size() == player_2.size())
		cout << "                                        Nobody wins.." << endl;
	SetColor(0, 15);

}