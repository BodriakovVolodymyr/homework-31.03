#include "Plane.h"

Plane::Plane()
{
	flight_number = 0;
	departure = new char[8] {"NO INFO"};
	destination = new char[8] {"NO INFO"};
	plane_mark = new char[11] {"Boeing 737"};
	number_of_seats = 170;
	avaible_seats = 170;
	number_of_solden_seats = 0;
}

Plane::~Plane()
{
	delete[] departure;
	delete[] destination;
	delete[] plane_mark;
	cout << "Plane with flight number: " << flight_number << " is canceled\n";
}

int Plane::getFlightNumber()
{
	return flight_number;
}

const char* Plane::getDeparture()
{
	return departure;
}

const char* Plane::getDestination()
{
	return destination;
}

const char* Plane::getPlaneMark()
{
	return plane_mark;
}

int Plane::getTotalSeats()
{
	return number_of_seats;
}

int Plane::getAvailableSeats()
{
	return avaible_seats;
}

int Plane::getSoldSeats()
{
	return number_of_solden_seats;
}

void Plane::setFlightNumber(int num)
{
	flight_number = num;
}

void Plane::setDeparture(const char* dep)
{
	delete[] departure;
	departure = new char[strlen(dep) + 1];
	strcpy_s(departure,strlen(dep)+1, dep);
}

void Plane::setDestination(const char* dest)
{
	delete[] destination;
	destination = new char[strlen(dest) + 1];
	strcpy_s(destination, strlen(dest) + 1, dest);
}

void Plane::setPlaneMark(const char* mark)
{
	delete[] plane_mark;
	plane_mark = new char[strlen(mark) + 1];
	strcpy_s(plane_mark, strlen(mark) + 1, mark);
}

void Plane::buy_ticket(int sold_ticket)
{
	if (sold_ticket < 0)
	{
		cout << "Invalid number of tickets\n";
	}
	else if (sold_ticket > avaible_seats)
	{
		cout << "Not enough seats\n";
	}
	else
	{
		number_of_solden_seats += sold_ticket;
		avaible_seats = number_of_seats - number_of_solden_seats;
	}
}

void Plane::return_ticket(int ret_ticket)
{
	if (ret_ticket > number_of_solden_seats)
	{
		cout << "Not enough sold tickets\n";
	}
	else if (ret_ticket < 0)
	{
		cout << "Invalid number of tickets\n";
	}
	else
	{
		number_of_solden_seats -= ret_ticket;
		avaible_seats = number_of_seats - number_of_solden_seats;
	}
}

void Plane::show_info()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Flight number: " << flight_number <<endl ; 
	cout << "Departure: " << departure <<endl ;
	cout << "Destination: " << destination <<endl ;
	cout << "Mark of plane: " << plane_mark <<endl ;
	cout << "All seats: " << number_of_seats <<endl ;
	cout << "Avaible seats: " << avaible_seats <<endl ;
	cout << "Occupied seats: " << number_of_solden_seats <<endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

}
