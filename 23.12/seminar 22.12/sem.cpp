#include <iostream>
#include <string>

using namespace std;

class Playing_card {
public:
	string Suit;
	string Rank;
	int rank;
	int suit;
};


int main() {
	int work = 1;
	while (work != 0) {
		int flag = 0;
		string otvet;
		string rank_for_cards[13] = { "2","3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
		string suit_for_cards[4] = { "Hearts","Diamonds", "Clubs", "Spades" };
		Playing_card card_1;
		Playing_card card_2;
		card_1.suit = 200; card_2.suit = 200; card_1.rank = 100; card_2.rank = 100;
		cout << "Choose the suit of the first card" << endl;
		cout << "Hearts" << endl << "Diamonds" << endl << "Clubs" << endl << "Spades" << endl;
		cin >> card_1.Suit;
		cout << "Choose the rank of the first card" << endl;
		cout << "2" << endl << "3" << endl << "4" << endl << "5" << endl << "6" << endl << "7" << endl << "8" << endl << "9" << endl << "10" << endl;
		cout << "Jack" << endl << "Queen" << endl << "King" << endl << "Ace" << endl;
		cin >> card_1.Rank;
		cout << "Choose the suit of the second card" << endl;
		cout << "Hearts" << endl << "Diamonds" << endl << "Clubs" << endl << "Spades" << endl;
		cin >> card_2.Suit;
		cout << "Choose the rank of the second card" << endl;
		cout << "2" << endl << "3" << endl << "4" << endl << "5" << endl << "6" << endl << "7" << endl << "8" << endl << "9" << endl << "10" << endl;
		cout << "Jack" << endl << "Queen" << endl << "King" << endl << "Ace" << endl;
		cin >> card_2.Rank;
		for (int i = 0;i < 4;i++) {
			if (card_1.Suit == suit_for_cards[i]) {
				card_1.suit = i;
			}
			if (card_2.Suit == suit_for_cards[i]) {
				card_2.suit = i;
			}
			if (i==4 and card_1.suit == 200) {
				cout << "Incorrect suit for Card 1." << endl;
				flag++;

			}
			if (i==4 and card_2.suit == 200) {
				cout << "Incorrect suit for Card 2. " << endl;
				flag++;
			}
		}
		for (int i = 0;i < 13;i++) {
			if (card_1.Rank == rank_for_cards[i]) {
				card_1.rank = i;
			}
			if (card_2.Rank == rank_for_cards[i]) {
				card_2.rank = i;
			}
			if (i == 13 and card_2.suit == 100) {
				cout << "Incorrect rank for Card 1. " << endl;
				flag++;
			}
			if (i == 13 and card_2.suit == 100) {
				cout << "Incorrect rank for Card 2. " << endl;
				flag++;
			}
		}
		if (card_1.suit == card_2.suit and flag == 0) {
			if (card_1.rank < card_2.rank) {
				cout << "The second card beats the first one." << endl;
			}
			if (card_1.rank > card_2.rank) {
				cout << "The first card will beat the second one." << endl;
			}
			if (card_1.rank == card_2.rank) {
				cout << "Input error, there are no identical cards in the deck." << endl;
			}
		}
		else if (flag == 0){
			cout << "The cards have different suits; they cannot interact." << endl;
		}
		cout << "Would you like to check more cards?" << endl;
		cin >> otvet;
		if (otvet == "Yes" or otvet == "yes" or otvet == "YES") {
			work = 1;
		}
		else if (otvet == "No" or otvet == "no" or otvet == "NO") {
			work = 0;
		}
	}
	return 0;
}