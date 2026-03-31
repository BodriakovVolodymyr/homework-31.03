#include "Plane.h"
#include <iostream>

int main()
{
    Plane* bObj = new Plane();
    int menu = 0;
    bObj->setFlightNumber(832);
    bObj->setDeparture("Kyiv");
    bObj->setDestination("Odesa");



    do
    {
        cout << "\t\tMenu" << endl;
        cout << "1. Show flight info" << endl;
        cout << "2. Buy ticket" << endl;
        cout << "3. Return ticket" << endl;
        cout << "0. Exit" << endl;
        cin >> menu;



        switch (menu)
        {
        case 1:
        {
            bObj->show_info(); break;
        }
        case 2:
        {
            int sold_ticket;
            cout << "Enter number of tickets you want to buy: ";
            cin >> sold_ticket;
            bObj->buy_ticket(sold_ticket); break;
        }
        case 3:
        {
            int ret_ticket;
            cout << "Enter number of tickets you want to return: ";
            cin >> ret_ticket;
            bObj->return_ticket(ret_ticket); break;
        }
        case 0:
        {
            delete bObj;
            cout << "Good bye!" << endl; break;
        }
        }
        } while (menu != 0);




return 0;
}