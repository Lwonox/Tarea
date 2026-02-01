#include <iostream> //Para usar cout y cin
#include <string> //Para usar strings
#include <vector> //Para usar vectores
#include "flight.h" //Manda a llamar a la clase Flight

using namespace std;

// ---------------------------
// El constructor
Flight::Flight() : seats(filas, vector<int>(columnas, 0))
{
	//Designamos el tamaño de la matriz
}
//----------------------------

// ---------------------------
//El destructor
Flight::~Flight()
{
}
//----------------------------

// ---------------------------
// Metodos
void Flight::set_date(string date)
{
	this -> date = stoi(date);
}
void Flight::set_hour(string hour)
{
	this -> hour = stoi(hour);
}
void Flight::set_price(string price)
{
	this -> price = stoi(price);
}
void Flight::set_airplane_model(string airplane_model)
{
	this -> airplane_model = airplane_model;
}
void Flight::set_origin(string origin)
{
	this -> origin = origin;
}
void Flight::set_destination(string dest, double dist, double fuel_level)
{
	this->destination = dest;
	this->distance = dist;

	cout << "El combustible necesario para viajar a " << this->destination << " es de: " << this->fuel_level << " galones." << endl; // Muestra el combustible necesario para viajar a la destinacion
}
void Flight::set_crew(string crew)
{
	this -> crew = crew;
}
void Flight::set_fuel_capacity()
{
	double liters = (this->distance * 1200.0) / 100.0; // Calculo del combustible necesario en litros
	this->fuel_capacity = liters * 0.264172; // Conversion a galones
}

void Flight::add_passenger(Passenger passenger)
{
	this -> passengers.push_back(passenger);
}
//----------------------------

// ---------------------------
// Getters
int Flight::get_date()
{
	return this -> date;
}
int Flight::get_hour()
{
	return this -> hour;
}
int Flight::get_price()
{
	return this -> price;
}
string Flight::get_airplane_model()
{
	return this -> airplane_model;
}
string Flight::get_origin()
{
	return this -> origin;
}
string Flight::get_destination()
{
	return this -> destination;
}
string Flight::get_crew()
{
	return this -> crew;
}
int Flight::get_fuel_capacity()
{
	return this->fuel_capacity; // pedir el valor de fuel_capacity. Falta calcular el valor real.
}
int Flight::all_passengers()
{
	return this -> passengers.size();
}
//---------------------------

