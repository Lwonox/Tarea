#ifndef AIRPORT_H
#define AIRPORT_H // Define la clase Airport
#include <iostream> //Para usar cout y cin
#include <string> //Para usar strings
#include <vector> //Para usar vectores
#include "airline.cpp" //Manda a llamar a la clase airline

using namespace std;

class Airport
{
private: //Atributos
	int id;
	int date;
	string city;
	string country;
	string total_transactions;
	string daily_incomes;
	vector <Airline> num_airlines;

public://Metodos
	//---------------------------
	// Constructor
	Airport();
	//---------------------------
	
	//---------------------------
	// Destructor
	~Airport();
	//---------------------------
	
	//---------------------------
	// Metodos
	void set_id(string);
	void set_date(string);
	void set_city(string);
	void set_country(string);
	void set_total_transactions(string);
	void set_daily_incomes(string);
	void add_airline(Airline);
	//---------------------------
	
	//---------------------------
	// Getters
	int get_id();
	int get_date();
	string get_city();
	string get_country();
	string get_total_transactions();
	string get_daily_incomes();
	int all_airlines();
	//---------------------------
};
#endif // AIRPORT_H