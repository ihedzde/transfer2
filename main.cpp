#include <iostream>
#include "abstractions/serviceCenter.h"
#include "classes/regulatory.h"
#include "classes/warrantyRepairShop.h"
#include "container/priorityQueue.h"
#include "ui/ui.h"

using namespace std;
using namespace Models;
using namespace Helpers;

int main() {
    auto queue = UI::mockSetup();
    char choice;
    do {
        choice = UI::printMenu();
        switch (choice) {
            case '1':
                queue->insert(UI::inputRegulatory());
                break;
            case '2':
                queue->insert(UI::inputWarranty());
                break;
            case '3':
                queue->printQueue();
                break;
            case '4': {
                string company;
                cout << "Input Company name: ";
                cin >> company;
                cout << "Found: " << queue->sumRepairsByCompany(company) << " repairs" << endl;
                break;
            }
            case '5':
                cout << "Input id:";
                uint32_t id;
                cin >> id;
                if (queue->deleteNode(id))
                    cout << "Deleted" << endl;
                else
                    cout << "Company not found" << endl;

                break;
        }
    } while (choice != 'q');
    delete queue;
    return 0;
}
