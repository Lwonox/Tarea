#include <string> //Para usar strings
#include <iostream> //Para usar cout y cin
#include <vector> //Para usar vectores
#include <fstream> //Para manejo de archivos
#include <sstream> //Para usar stringstream
#include "airport.cpp" // Include the Airport class

using namespace std;

int main()
{
	fstream archivo("Aerolinea.txt"); //Abrir el archivo
	vector<Airline> aerolineas; //Vector para almacenar las aerolineas
	vector <Airline>::iterator it; //Iterador para recorrer el vector
	string linea; 
	
	if (!archivo.is_open()) {
		cerr << "Error al abrir el archivo." << endl;
		return 1;
	}

	while (!archivo.eof())
	{
		string airline_id, short_name, incomes;
		getline(archivo, linea);
		stringstream ss(linea);
		ss >> airline_id >> short_name >> incomes;
		Airline airline(airline_id, short_name, incomes); //Create an Airline object with parameters
		aerolineas.push_back(airline); //Add the airline to the vector
	}

	for (it = aerolineas.begin(); it != aerolineas.end(); ++it)
	{
		cout << "------------------------" << endl;
		cout << "Aerolinea ID: " << it->get_airline_id() << endl;
		cout << "Nombre Corto: " << it->get_short_name() << endl;
		cout << "Ingresos: " << it->get_incomes() << endl;
		cout << "------------------------" << endl;
	}
	
	Airport airport;
	cout << "------------------------" << endl;
	airport.set_id("101"); 
	airport.set_date("20240615");
	airport.set_city("New York");
	airport.set_country("USA");
	airport.set_total_transactions("1500");
	airport.set_daily_incomes("250000");
	cout << "Airport ID: " << airport.get_id() << endl;
	cout << "Date: " << airport.get_date() << endl;
	cout << "City: " << airport.get_city() << endl;
	cout << "Country: " << airport.get_country() << endl;
	cout << "Total Transactions: " << airport.get_total_transactions() << endl;
	cout << "Daily Incomes: " << airport.get_daily_incomes() << endl;
	cout << "------------------------" << endl;
	return 0;
}
