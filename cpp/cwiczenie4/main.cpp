#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	ofstream plik("wynik.txt");
	if (!plik.is_open()){
	cout << "wakfs\n";
	return 1;
}
	string imie;
	string nazwisko;
	cout << "podaj imie:\n";
	cin >> imie;
	cout << "podaj nazwisko:\n";
	cin >> nazwisko;

	plik << imie;
	plik << nazwisko;
	plik.close();
	return 0;
}
	ifstream plik("wynik.txt");
	stringstream bufor;
	bufor << plik.rdbuf();
	string calosc = bufor.str();

