#ifndef AIRLINE_H 
#define AIRLINE_H //Define la clase Airline
#include<iostream> //Para usar cout y cin
#include<string> //Para usar strings
#include<vector> //Para usar vectores
#include "flight.cpp" //Manda a llamar a la clase Flight

using namespace std; 

class Airline
{
private: //Atributos
	string origin_city;
	string short_name;
	string incomes;
	vector <Flight> flights;
	static const int num_fligts = 5; // Numero de vuelos por aerolinea
	vector <int> flight; // Vector para almacenar los IDs de los vuelos
	string airline_id;

public://Metodos
	//---------------------------
	// Constructor
	Airline();
	Airline(string, string, string);
	//---------------------------
	
	// Destructor
	~Airline();
	//---------------------------
	
	//---------------------------
	// Metodos
	void set_origin_city(string);
	void set_short_name(string);
	void set_incomes(string);
	void add_flight(Flight);
	void horario_vuelo(string, string, string, string);
	//---------------------------

	//---------------------------
	// Getters
	string get_origin_city();
	string get_short_name();
	string get_incomes();
	int all_flights();
	string get_airline_id();
	string update_airline(string new_income);
	//---------------------------
};
#endif // AIRLINE_H