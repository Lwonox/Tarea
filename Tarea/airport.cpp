#include <iostream> //Para usar cout y cin
#include <string> //Para usar strings
#include <vector> //Para usar vectores
#include "airport.h" //Manda a llamar a la clase airport

using namespace std;

//---------------------------
// El constructor
Airport::Airport() 
{
}
//---------------------------

//---------------------------
// El destructor
Airport::~Airport()
{
}
//---------------------------

//---------------------------
// Metodos
void Airport::set_id(string id)
{
	this -> id = stoi(id);
}
void Airport::set_date(string date)
{
	this -> date = stoi(date);
}
void Airport::set_city(string city)
{
	this -> city = city;
}
void Airport::set_country(string country)
{
	this -> country = country;
}
void Airport::set_total_transactions(string total_transactions)
{
	this -> total_transactions = total_transactions;
}
void Airport::set_daily_incomes(string daily_incomes)
{
	this -> daily_incomes = daily_incomes;
}
void Airport::add_airline(Airline airline)
{
	this -> num_airlines.push_back(airline);
}
//---------------------------

//---------------------------
// Getters
int Airport::get_id()
{
	return id;
}
int Airport::get_date()
{
	return date;
}
string Airport::get_city()
{
	return city;
}
string Airport::get_country()
{
	return country;
}
string Airport::get_total_transactions()
{
	return total_transactions;
}
string Airport::get_daily_incomes()
{
	return daily_incomes;
}
int Airport::all_airlines()
{
	return num_airlines.size();
}
//---------------------------