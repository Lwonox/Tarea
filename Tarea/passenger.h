#ifndef PASSENGER_H  
#define PASSENGER_H //Define la clase Passenger

#include <string> //Para usar strings
#include <iostream> //Para usar cout y cin

using namespace std;

class Passenger 
{
private: //Los atributos
	string name;
	int phone;
public: //Metodos

	// ---------------------------
	// El constructor
	// ---------------------------
	Passenger();
	// ---------------------------
	// El destructor
	// ---------------------------
	~Passenger();

	// ---------------------------
	// Metodos
	void set_name(string);
	void set_phone(string);
	// ---------------------------

	//---------------------------
	// Getters
	string get_name();
	int get_phone();
	//---------------------------
};
#endif // PASSENGER_H