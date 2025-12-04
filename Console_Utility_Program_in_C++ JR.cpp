#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>            

using namespace std;
void TABLICZKA()
{
	int a, b, x, y;
	cout << "---Wybrales zadanie numer 2---" << endl;
	cout << endl << "Program za pomoca funkcji TABLICZKA wyswietla tabliczke mnozenia w zakresie podanym z klawiatury. " << endl;
	cout << endl;
	cout << "Wprowadz pierwsza liczbe od 1 do 10, ktora ograniczy zakres tabliczki mnozenia: ";
	cin >> a;
	cout << "Wprowadz druga liczbe od 1 do 10, ktora ograniczy zakres tabliczki mnozenia: ";
	cin >> b;
	cout << endl;
	if (a > 0 && b > 0)
	{
		for (x = a; x <= b; x = x + 1)
		{
			cout << "\t" << x;
		}
		cout << endl;
		for (x = a; x <= b; x = x + 1)
		{
			cout << x << "\t";
			for (y = a; y <= b; y = y + 1)
			{
				cout << x * y << "\t";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Wprowadziles liczby mniejsze lub rowne 0." << endl;
	}
}

void sortowanie_babelkowe(int* tab, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 1; j--)
		{
			if (tab[j] < tab[j - 1])
			{
				int zmienna;
				zmienna = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = zmienna;
			}
		}
	}
}

int main()
{
	int zadanieTrwa = 0;
	for (;;)
	{
		int q, w;  //zmienne do poruszania sie po switch'ach
		cout << "Witaj w MENU programu. Wybierz numer listy, z ktorej chcesz rozwiazac zadanie: " << endl;
		cout << endl << "--------------------";
		cout << endl << "[2] Lista numer 2" << endl;
		cout << "[3] Lista numer 3" << endl;
		cout << "[4] Lista numer 4" << endl;
		cout << "[5] Lista numer 5" << endl;
		cout << "[6] Lista numer 6" << endl;
		cout << "[7] Lista numer 7" << endl;
		cout << "[8] Lista numer 8" << endl;
		cout << "[9] Lista numer 9" << endl;
		cout << "[10] koniec programu" << endl;
		cout << "--------------------" << endl;
		cout << endl;
		cin >> q;

		switch (q) //wejscie do odpowiedniej listy z posrod dostepnych
		{
		case 2: //wejscie do listy nr 2
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 2---" << endl;
				cout << endl << "Wybrales liste numer 2." << endl;
				cout << "Lista numer 2 obejmuje zaganienia instrukcji warunkowych ''if'' oraz zastosowania petli ''for''. " << endl;
				cout << "Wybierz numer zadania, ktore chcesz rozwiazac : " << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 2" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 1:
					int a;
					cout << "---Wybrales zadanie numer 2---" << endl;
					cout << endl << "Program wyswietla wielkosc mandatu w zaleznosci od przekroczonej predkosci. " << endl;
					cout << "Przekroczenie predkosci do 10 km/h = 100zl. " << endl;
					cout << "Przekroczenie predkosci z przedzialu <11km/h, 30km/h> = 200zl. " << endl;
					cout << "Przekroczenie predkosci > 30km/h = 400zl. " << endl;
					cout << endl << "O ile km/h zostala przekroczona predkosc? ";
					cin >> a;
					if (a <= 0)
					{
						cout << endl << "Nie otrzymujesz mandatu.. " << endl;
						cout << endl;
					}
					else if (a <= 10 && a > 0)
					{
						cout << endl << "Mandat wynosi 100zl. " << endl;
						cout << endl;
					}
					else if (a >= 11 && a <= 30)
					{
						cout << endl << "Mandat wynosi 200zl. " << endl;
						cout << endl;
					}
					else
					{
						cout << endl << "Mandat wynosi 400zl. " << endl;
						cout << endl;
					}
					break;
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				}
			}
			break;
		case 3: // wejscie do listy nr 3
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 3---" << endl;
				cout << endl << "Wybrales liste numer 3. Wybierz numer zadania, ktore chcesz rozwiazac:" << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 5" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				case 1:
					cout << "---Wybrales zadanie numer 5---" << endl;
					cout << endl << "Program oblicza w zaleznosci od wyboru: pole powierzchni prostokata, obwod prostokata, obwod okregu, pole powierzchni kola. " << endl;
					cout << endl;
					cout << "Co ma zostac obliczone?" << endl << "1) Pole powierzchni prostokata" << endl << "2) Obwod prostokata" << endl << "3) Obwod okregu" << endl << "4) Pole powierzchni kola " << endl;
					cout << endl;
					float a, b, r, wynik1, wynik2, wynik3, wynik4;
					int liczba;
					cin >> liczba;
					switch (liczba)
					{
					case 1:
						cout << endl << "Pole powierzchni prostokata. Podaj wymiar a: ";
						cin >> a;
						cout << endl << "Podaj wymiar b: ";
						cin >> b;
						wynik1 = a * b;
						if (a < 0 || b < 0)
						{
							cout << endl << "Pole nie moze byc mniejsze od zera." << endl;
							cout << endl;
						}
						else
						{
							cout << endl << "Wynik: " << wynik1;
							cout << endl;
						}
						break;
					case 2:
						cout << "Obwod prostokata. Podaj wymiar a: ";
						cin >> a;
						cout << endl << "Podaj wymiar b: ";
						cin >> b;
						wynik2 = 2 * a + 2 * b;
						if (a < 0 || b < 0 || a == 0 || b == 0)
						{
							cout << endl << "Obwod nie moze byc mniejszy lub rowny zero." << endl;
							cout << endl;
						}
						else
						{
							cout << endl << "Wynik: " << wynik2;
							cout << endl;
						}
						break;
					case 3:
						cout << endl << "Obwod okregu. Podaj wymiar r: ";
						cin >> r;
						wynik3 = 2 * 3.14 * r;
						if (r < 0 || r == 0)
						{
							cout << endl << "Promien nie moze byc mniejszy lub rowny 0." << endl;
							cout << endl;
						}
						else
						{
							cout << endl << "Wynik: " << wynik3;
							cout << endl;
						}
						break;
					case 4:
						cout << endl << "Pole powierzchni kola. Podaj wymiar r: ";
						cin >> r;
						wynik4 = 3.14 * r * r;
						if (r < 0 || r == 0)
						{
							cout << endl << "Promien nie moze byc mniejszy od zera." << endl;
							cout << endl;
						}
						else
						{
							cout << endl << "Wynik: " << wynik4;
							cout << endl;
						}
						break;
					}
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					cout << endl;
				}
				break;
			}
		case 4: // wejscie do listy nr 4
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 4---" << endl;
				cout << endl << "Wybrales liste numer 4. Wybierz numer zadania, ktore chcesz rozwiazac:" << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 2" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 1:
					cout << "---Wybrales zadanie numer 2---" << endl;
					cout << endl << "Program wyswietla gwiazdki. W pierwszej linijce wyswietli 1 gwiazdke, w drugiej 2, w trzeciej 3..., w ostatniej n-gwiazdek. " << endl;
					cout << endl;
					cout << "Podaj dodatnia ilosc n-gwiazdek: ";
					int n, a, b, c;
					cin >> n;
					if (n > 0)
					{
						for (a = 1; a <= n; a++)
						{
							c = a;
							for (b = 1; b <= c; b++)
							{
								cout << "*";
							}
							cout << endl;
						}
					}
					else
					{
						cout << endl << "Podales ilosc gwiazdek mniejsza lub rowna 0." << endl;
					}
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					cout << endl;
					break;
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				}
			}
			break;
		case 5: // wejscie do listy nr 5
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 5---" << endl;
				cout << endl << "Wybrales liste numer 5. Wybierz numer zadania, ktore chcesz rozwiazac:" << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 2" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 1:
					TABLICZKA();
					cout << endl;
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					cout << endl;
					break;
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				}
			}
			break;
		case 6: // wejscie do listy nr 6
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 6---" << endl;
				cout << endl << "Wybrales liste numer 6. Wybierz numer zadania, ktore chcesz rozwiazac:" << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 4" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				case 1:
					cout << "---Wybrales zadanie numer 4---" << endl;
					cout << endl << "Program losuje 100 liczb z przedzialu 1-1000, nastepnie wpisuje je do 100-elementowej tablicy. Dodatkowo wyszukuje oraz wyswietla min. oraz maks. sposrod wylosowanych liczb. " << endl;
					cout << endl;
					int tablica[100];
					srand(time(NULL));
					int i = 0;
					for (i = 0; i < 100; i++)
					{
						tablica[i] = (rand() % 1000) + 1;
					}
					for (i = 0; i < 100; i++)
					{
						cout << tablica[i] << endl;
					}
					cout << endl;
					int najwieksza = tablica[0];
					for (i = 0; i < 100; i++)
					{
						if (tablica[i] > najwieksza)
						{
							najwieksza = tablica[i];
						}
					}
					int najmniejsza = tablica[0];
					for (i = 0; i < 100; i++)
					{
						if (tablica[i] < najmniejsza)
						{
							najmniejsza = tablica[i];
						}

					}
					cout << "Najwieksza liczba: " << najwieksza << endl;
					cout << "Najmniejsza liczba: " << najmniejsza << endl;
					cout << endl;
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					cout << endl;
				}
			}
			break;
		case 7:      // wejscie do listy nr 7
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 7---" << endl;
				cout << endl << "Wybrales liste numer 7. Wybierz numer zadania, ktore chcesz rozwiazac:" << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 4" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				case 1:
					cout << "---Wybrales zadanie numer 4---" << endl;
					cout << endl << "Program tworzy tablice, ktorej rozmiar wprowadzamy z klawiatury. Nastepnie zostaje wypelniona losowymi liczbami." << endl;
					cout << "Po wprowadzeniu danych program wyswietla wszystkie elementy tablicy oraz min. i maks. sposrod wylosowanych liczb." << endl;
					cout << "Nastepnie wczesniej utworzona tablica zostaje usunieta. Utworzona zostaje nowa tablica o rozmiarze podanym z klawiatury." << endl;
					cout << "Po wprowadzeniu danych program wyswietla wszystkie elementy tablicy oraz min. i maks. sposrod wylosowanych liczb." << endl;
					cout << endl;
					cout << "Podaj rozmiar tablicy: ";
					int rozmiar;
					int a = 0, z = 0, i;
					float suma = 0, srednia;
					srand(time(NULL));
					cin >> rozmiar;

					int* tablica = NULL;
					tablica = new int[rozmiar];
					cout << endl << "Wylosowane liczby:" << endl;

					for (a = 0; a < rozmiar; a++)
					{
						tablica[a] = rand() % 100;
					}

					a = 0;
					while (a < rozmiar)
					{
						cout << tablica[a] << endl;
						a++;
					}
					cout << endl;

					int najwieksza = tablica[0];
					for (a = 0; a < rozmiar; a++)
					{
						if (tablica[a] > najwieksza)
						{
							najwieksza = tablica[a];
						}
					}

					int najmniejsza = tablica[0];
					for (a = 0; a < rozmiar; a++)
					{
						if (tablica[a] < najmniejsza)
						{
							najmniejsza = tablica[a];
						}
					}
					cout << "Najwieksza liczba: " << najwieksza << endl;
					cout << endl << "Najmniejsza liczba: " << najmniejsza << endl;

					if (tablica != NULL)
					{
						cout << endl << "Kasowanie rozmiaru tablicy. " << endl;
						delete[] tablica;
						tablica = NULL;
					}
					cout << endl << "Podaj nowy rozmiar tablicy: ";
					cin >> rozmiar;

					if (tablica == NULL)
					{
						tablica = new int[rozmiar];
					}
					cout << endl << "Wylosowane liczby:" << endl;
					for (a = 0; a < rozmiar; a++)
					{
						tablica[a] = rand() % 100;
					}

					a = 0;
					while (a < rozmiar)
					{
						cout << tablica[a] << endl;
						a++;
					}
					cout << endl;

					najwieksza = tablica[0];
					for (a = 0; a < rozmiar; a++)
					{
						if (tablica[a] > najwieksza)
						{
							najwieksza = tablica[a];
						}
					}

					najmniejsza = tablica[0];
					for (a = 0; a < rozmiar; a++)
					{
						if (tablica[a] < najmniejsza)
						{
							najmniejsza = tablica[a];
						}
					}
					cout << "Najwieksza liczba: " << najwieksza << endl;
					cout << endl << "Najmniejsza liczba: " << najmniejsza << endl;

					if (tablica != NULL)
					{
						delete[] tablica;
						tablica = NULL;
					}
					cout << endl;
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					cout << endl;
				}
			}
			break;
		case 8:    // wejscie do listy nr 8
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 8---" << endl;
				cout << endl << "Wybrales liste numer 8." << endl;
				cout << "Lista numer 8 obejmuje zagadnienia zapisu oraz odczytu z pliku tekstowego." << endl;
				cout << "Wybierz numer zadania, ktore chcesz rozwiazac : " << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 1" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				case 1:
					cout << "---Wybrales zadanie numer 1---" << endl;
					cout << endl << "Program zapisuje do pliku podana z klawiatury ilosc wylosowanych liczb oddzielonych tabulacjami. " << endl;
					cout << "Podaj ilosc losowych liczb do wygenerowania: " << endl;
					int liczba;
					srand(time(NULL));
					cin >> liczba;
					ofstream plik("tutaj zapisze sie plik.txt");
					if (plik.is_open())
					{
						for (int a = 0; a < liczba; a++)
						{
							plik << rand() % 1000 << "\t";
						}
						plik.close();
					}
					cout << endl;
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					cout << endl;
				}
			}
			break;
		case 9:   // wejscie do listy nr 9
			zadanieTrwa = 1;
			while (zadanieTrwa)
			{
				cout << endl << "---Lista numer 9---" << endl;
				cout << endl << "Wybrales liste numer 9. Wybierz numer zadania, ktore chcesz rozwiazac:" << endl;
				cout << endl << "--------------------";
				cout << endl << "[1] Zadanie numer 2" << endl;
				cout << "[2] koniec programu" << endl;
				cout << "--------------------" << endl;
				cout << endl;
				cin >> w;
				cout << endl;

				switch (w)
				{
				case 2:
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					zadanieTrwa = 0;
					break;
				case 1:
					cout << "---Wybrales zadanie numer 2---" << endl;
					cout << endl << "Program wpisuje 5 losowych liczb do tablicy i wyswietla je." << endl;
					cout << "Nastepnie sortuje i wyswietla wylosowane liczby od najmniejszej do najwiekszej." << endl;
					cout << "Na koniec oblicza i wyswietla srednia wylosowanych liczb i wskazuje liczbe o wartosci najblizszej tej sredniej." << endl;
					cout << endl;
					int i, zmienna;
					int rozmiar = 5;
					srand(time(NULL));
					int* tablica = NULL;
					tablica = new int[rozmiar];

					for (i = 0; i < rozmiar; i++)
					{
						tablica[i] = (rand() % 1000) + 1;
					}

					for (i = 0; i < rozmiar; i++)
					{
						cout << tablica[i] << "\t";
					}
					cout << endl;
					cout << endl << "Liczby posortowane od najmniejszej do najwiekszej: " << endl;
					cout << endl;
					sortowanie_babelkowe(tablica, rozmiar);

					for (i = 0; i < rozmiar; i++)
					{
						cout << tablica[i] << "\t";
					}
					cout << endl;

					int suma = 0, srednia;
					for (i = 0; i < rozmiar; i++)
					{
						suma += tablica[i];
					}
					srednia = suma / rozmiar;
					cout << endl << "Srednia elementow tablicy wynosi: " << srednia << endl;


					zmienna = tablica[0];
					if (abs(srednia - tablica[1]) < abs(srednia - tablica[0]))
						zmienna = tablica[1];
					if (abs(srednia - tablica[2]) < abs(srednia - tablica[1]))
						zmienna = tablica[2];
					if (abs(srednia - tablica[3]) < abs(srednia - tablica[2]))
						zmienna = tablica[3];
					if (abs(srednia - tablica[4]) < abs(srednia - tablica[3]))
						zmienna = tablica[4];
					cout << endl << "Liczba najblizej sredniej to: " << zmienna << endl;

					if (tablica != NULL)
					{
						delete[] tablica;
						tablica = NULL;
					}
					cout << endl;
					cout << endl << "---Zakonczono dzialanie programu---" << endl;
					cout << endl;
				}
			}
			break;
		case 10:
			cout << endl << "---Zakonczono dzialanie programu---" << endl;
			exit(0);
		}
		cout << endl;

	}
}
