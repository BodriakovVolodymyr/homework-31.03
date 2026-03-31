#pragma once
#include <iostream>
#include <cstring>
using namespace std;



class Plane
{
	int flight_number = 0;
	char* departure=nullptr;
	char* destination=nullptr;
	char* plane_mark = nullptr;
	int number_of_seats = 0;
	int avaible_seats = 0;
	int number_of_solden_seats = 0;



public:
	Plane();
	
	~Plane();

	int getFlightNumber();
	const char* getDeparture();
	const char* getDestination();
	const char* getPlaneMark();
	int getTotalSeats();
	int getAvailableSeats();
	int getSoldSeats();

	void setFlightNumber(int num);
	void setDeparture(const char* dep);
	void setDestination(const char* dest);
	void setPlaneMark(const char* mark);

	void buy_ticket(int sold_ticket);
	void return_ticket(int ret_ticket);



	void show_info();
};

