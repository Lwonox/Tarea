#include <iostream> //Para usar cout y cin
#include <string> //Para usar strings
#include <vector> //Para usar vectores
#include "airline.h" //Manda a llamar a la clase Airline

using namespace std;
//---------------------------
// El constructor
Airline::Airline()
{
}
Airline::Airline(string airline_id, string short_name, string incomes) : flight(vector<int>(num_fligts))
{
	this -> airline_id = airline_id;
	this -> short_name = short_name;
	this -> incomes = incomes;
}
//---------------------------

//---------------------------
// El destructor
Airline::~Airline()
{
}
//---------------------------

//---------------------------
// Metodos
void Airline::set_incomes(string incomes)
{
	this -> incomes = stoi(incomes);
}
void Airline::set_origin_city(string origin_city)
{
	this -> origin_city = origin_city;
}
void Airline::set_short_name(string short_name)
{
	this -> short_name = short_name;
}
void Airline::add_flight(Flight flight)
{
	this -> flights.push_back(flight);
}

void Airline::horario_vuelo(string airplane_model, string origin, string destination, string price)
{
	Flight flight;
	flight.set_airplane_model(airplane_model);
	flight.set_origin(origin);
	flight.set_destination(destination, 0.0, 0.0); // Pasar 0.0 para distancia y nivel de combustible
	flight.set_price(price);

	this->flights.push_back(flight);
}

//---------------------------

//---------------------------
// Getters
string Airline::get_origin_city()
{
	return origin_city;
}
string Airline::get_short_name()
{
	return short_name;
}
string Airline::get_incomes()
{
	return incomes;
}
int Airline::all_flights()
{
	return flights.size();
}

string Airline::update_airline(string new_income)
{
	short_name += " - Ingresos actualizados: " + new_income; 
	short_name += "\n";
	return short_name;
}
string Airline::get_airline_id()
{
	return airline_id;
}