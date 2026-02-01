#ifndef FLIGTH_H
#define FLIGTH_H // Define la clase Flight
#include <iostream> //Para usar cout y cin
#include <string> //Para usar strings
#include <vector> //Para usar vectores
#include "passenger.cpp" //Manda a llamar a la clase Passenger

using namespace std;

class Flight
{
private: //Atributos
	int date;
	int hour;
	int price;
	string airplane_model;
	string origin;
	string destination;
	string crew;
	int fuel_capacity;
	double  fuel_level;
	double  distance;
	vector <Passenger> passengers;
	static const int filas = 30; // Numero de filas en el avion
	static const int columnas = 4; // Numero de columnas en el avion
	vector < vector<int>> seats; // Matriz para representar los asientos del avion

public: //Metodos

	// ---------------------------
	// El constructor
	Flight();
	//----------------------------
	
	// ---------------------------
	// El destructor
	~Flight();
	//----------------------------
	
	// ---------------------------
	// Metodos
	void set_date(string);
	void set_hour(string);
	void set_price(string);
	void set_airplane_model(string);
	void set_origin(string);
	void set_destination(string dest, double dist, double fuel_level);
	void set_crew(string);
	void set_fuel_capacity();
	void add_passenger(Passenger);
	//----------------------------
	
	// ---------------------------
	// Getters
	int get_date();
	int get_hour();
	int get_price();
	string get_airplane_model();
	string get_origin();
	string get_destination();
	string get_crew();
	int get_fuel_capacity();
	int all_passengers();
	//---------------------------
};
#endif // FLIGTH_H
