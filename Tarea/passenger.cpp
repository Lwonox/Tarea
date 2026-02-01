#include <iostream> //Para usar cout y cin
#include <string> //Para usar strings
#include "passenger.h" //Manda a llamar a la clase Passenger

using namespace std;

// ---------------------------
// El constructor
Passenger::Passenger()
{
}
//----------------------------

// ---------------------------
// El destructor
Passenger::~Passenger()
{
}
// ---------------------------

// --------------------------
// Metodos
void Passenger::set_name(string name)
{
	this -> name = name;
}
void Passenger::set_phone(string phone)
{
	this -> phone = stoi(phone);
}
//----------------------------

// ---------------------------
// Getters
string Passenger::get_name()
{
	return this -> name;
}
int Passenger::get_phone()
{
	return this -> phone;
}
//----------------------------
