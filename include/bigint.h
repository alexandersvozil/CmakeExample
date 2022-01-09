#ifndef BIG_H
#define BIG_H

#include <iostream>
#include <vector>

using namespace std;

class BigInt {
private:
	vector<unsigned long long> vec;

public:
	/*konstruktor ist eigentlich eine Methode, deshalb steht auch Datentyp().
	der konstruktor hat eig. keinen Rückgabetyp (er soll aber wieder eine klasse zurückliefern)
	zur initialisierung schreibt man in die klammer nur den datentyp der übergebenen instanzvariable.*/
	
	BigInt(); //Standardkonstruktor
	BigInt(vector<unsigned long long>&); //konstruktor mit einem parameter

	//getter&setter->Zugriffsmethoden/Kapselung mit private&public
	//setter=void
	//getter=datentyp wie instanzvariable
	vector<unsigned long long> get_vec(); 
	void set_vec(vector<unsigned long long> &v); 
  friend ostream& operator<<(ostream& os, BigInt& b);

};

#endif
