//
// Created by Artem on 24.04.2022.
//

#ifndef ARTEMOOP_UI_H
#define ARTEMOOP_UI_H
#include "../container/priorityQueue.h"
#include "../classes/warrantyRepairShop.h"
#include "../classes/regulatory.h"
using namespace Container;
using namespace Models;
namespace Helpers {

    class UI {
    public:
        static char printMenu();

        static PriorityQueue *mockSetup();

        static RegulatoryWarranty *inputRegulatory();

        static WarrantyRepairShop *inputWarranty();
    };

} // Helpers

#endif //ARTEMOOP_UI_H
