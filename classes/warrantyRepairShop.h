//
// Created by Artem on 24.04.2022.
//

#ifndef ARTEMOOP_WARRANTYREPAIRSHOP_H
#define ARTEMOOP_WARRANTYREPAIRSHOP_H

#include "../abstractions/serviceCenter.h"

namespace Models {
    enum Offers {
        Basic,
        Premium,
        Elite
    };
    class WarrantyRepairShop: public ServiceCenter{
        int id;
        int warrantyPeriodDays;
        Offers offerType;
    public:

        WarrantyRepairShop();
        WarrantyRepairShop(const string &companyName, int daysToComplete, const string &conditionsOfService,
                           int warrantyPeriodDays, Offers offerType);

        void printFields() override;

    public:
        int getWarrantyPeriodDays() const;

        void setWarrantyPeriodDays(int warrantyPeriodDays);

        string getOfferType() const;

        void setOfferType(Offers offerType);
    };

} // Models

#endif //ARTEMOOP_WARRANTYREPAIRSHOP_H
