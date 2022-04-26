//
// Created by Artem on 24.04.2022.
//

#include "ui.h"

namespace Helpers {
    char UI::printMenu() {
        char choice;
        cout << endl;
        cout << "Please choose :" << endl;
        cout << "q. Quit program" << endl;
        cout << "1. Add new warranty repair to the queue" << endl;
        cout << "2. Add new regulatory to the list" << endl;
        cout << "3. List all service shops" << endl;
        cout << "4. Count all repairs by company name" << endl;
        cout << "5. Delete by id" << endl;
        cin >> choice;
        cout << "\r" << endl;
        return choice;
    }

    PriorityQueue *UI::mockSetup() {
        auto serviceCenterQueue = new PriorityQueue();
        serviceCenterQueue->insert(new WarrantyRepairShop( "Yabko", 7, "no scratches", 30, Offers::Elite));
        serviceCenterQueue->insert(
                new WarrantyRepairShop("Nokia", 14, "check and warranty bill", 365, Offers::Basic));
        serviceCenterQueue->insert(
                new RegulatoryWarranty("MinistryOfCommunication", 35, "budget money", 40, 39.34));
        serviceCenterQueue->insert(
                new RegulatoryWarranty("MinistryOfCommunication", 314, "order of CM", 42, 23.42));
        serviceCenterQueue->insert(
                new RegulatoryWarranty("MinistryOfDefence", 43, "order and money", 13, 34.34));
        return serviceCenterQueue;
    }

    RegulatoryWarranty *UI::inputRegulatory() {
        string company;
        cout << "Company: " << endl;
        cin >> company;
        int daysToComplete;
        cout << "Days to complete: " << endl;
        cin >> daysToComplete;
        string conditionsOfService;
        cout << "Conditions of service: " << endl;
        getline(cin, conditionsOfService);
        int regularityPerYear;
        cout << "Regularity checks per year: " << endl;
        cin >> regularityPerYear;
        double amountOfWorkInHours;
        cout << "Amount of work in hours: " << endl;
        cin >> amountOfWorkInHours;

        return new RegulatoryWarranty(company, daysToComplete, conditionsOfService, regularityPerYear,
                                      amountOfWorkInHours);
    }

    WarrantyRepairShop *UI::inputWarranty() {
        string company;
        cout << "Company: " << endl;
        cin >> company;
        int daysToComplete;
        cout << "Days to complete: " << endl;
        cin >> daysToComplete;
        string conditionsOfService;
        cout << "Conditions of service: " << endl;
        cin >> conditionsOfService;
        int warrantyPeriod;
        cout << "Warranty period in days: " << endl;
        cin >> warrantyPeriod;
        Offers offerType;
        short offer = 0;
        do {
            cout << "Offer type" << endl;
            cout << "1 - Basic" << endl;
            cout << "2 - Elite" << endl;
            cout << "3 - Premium" << endl;
            cin >> offer;
        } while (offer < 1 || offer > 3);
        offerType = (Offers) offer;
        return new WarrantyRepairShop(company, daysToComplete, conditionsOfService, warrantyPeriod, offerType);
    }
} // Helpers