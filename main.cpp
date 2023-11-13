#include <iostream>
#include <string>
#define endl '\n'


void posortuj(int tab[],int rozmiar);

int main() {
	int tab[5] = { 50,15,69,17,20 };

	posortuj(tab, (sizeof(tab) / sizeof(tab[0])));

	for (auto i : tab) std::cout << i << endl;
	return 0;
}

void posortuj(int tab[],int rozmiar) {
	for (int i = 0; i < rozmiar - 1; i++) {
		for (int j = 0; j < rozmiar - 1 - i; j++) {
			if (tab[j] > tab[j + 1]) {
				std::swap(tab[j], tab[j + 1]);
			}
		}
	}
}
