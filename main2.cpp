#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a;
int g;
int main(int argc, char** argv) {
	cout << "Dzien(1), miesiac(2), czy oba(3)?\n";
	cin >> g;
	switch (g)
	{	
		case 1:
			cout << "Podaj numer dnia\n";
			cin >> a;
			switch (a)
			{
				case 1:
					cout << "Poniedzialek\n";
					break;
				case 2:
					cout << "Wtorek\n";
					break;
				case 3:
					cout << "Sroda\n";
					break;
				case 4:
					cout << "Czwartek\n";
					break;
				case 5:
					cout << "Piatek\n";
					break;
				case 6:
					cout << "Sobota\n";
					break;
				case 7:
					cout << "Niedziela\n";
					break;
			}
			break;
		case 2:
			cout << "Podaj numer miesiaca\n";
			cin >> a;
			switch (a)
			{
				case 1:
					cout << "Styczen\n";
					break;
				case 2:
					cout << "Luty\n";
					break;
				case 3:
					cout << "Marzec\n";
					break;
				case 4:
					cout << "Kwiecien\n";
					break;
				case 5:
					cout << "Maj\n";
					break;
				case 6:
					cout << "Czerwiec\n";
					break;
				case 7:
					cout << "Lipiec\n";
					break;
				case 8:
					cout << "Sierpien\n";
					break;
				case 9:
					cout << "Wrzesien\n";
					break;
				case 10:
					cout << "Pazdziernik\n";
					break;
				case 11:
					cout << "Listopad\n";
					break;
				case 12:
					cout << "Grudzien\n";
					break;
			}
			break;
		case 3:
			cout << "Podaj numer dnia i miesiaca\n";
			cin >> a;
			switch (a)
			{
				case 1:
					cout << "Poniedzialek, Styczen\n";
					break;
				case 2:
					cout << "Wtorek, Luty\n";
					break;
				case 3:
					cout << "Sroda, Marzec\n";
					break;
				case 4:
					cout << "Czwartek, Kwiecien\n";
					break;
				case 5:
					cout << "Piatek, Maj\n";
					break;
				case 6:
					cout << "Sobota, Czerwiec\n";
					break;
				case 7:
					cout << "Niedziela, Lipiec\n";
					break;
				case 8:
					cout << "Brak, Sierpien\n";
					break;
				case 9:
					cout << "Brak, Wrzesien\n";
					break;
				case 10:
					cout << "Brak, Pazdziernik\n";
					break;
				case 11:
					cout << "Brak, Listopad\n";
					break;
				case 12:
					cout << "Brak, Grudzien\n";
					break;
			}
			break;
	}
	return 0;
}
