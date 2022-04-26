//
// Created by Artem on 24.04.2022.
//

#include "warrantyRepairShop.h"

namespace Models {
    int WarrantyRepairShop::getWarrantyPeriodDays() const {
        return warrantyPeriodDays;
    }

    void WarrantyRepairShop::setWarrantyPeriodDays(int warrantyPeriodDays) {
        WarrantyRepairShop::warrantyPeriodDays = warrantyPeriodDays;
    }

    string WarrantyRepairShop::getOfferType() const {
        switch (offerType) {
            case Offers::Basic:
                return "Basic";
            case Offers::Premium:
                return "Premium";
            case Offers::Elite:
                return "Elite";
            default:
                return "";
        }
    }

    void WarrantyRepairShop::setOfferType(Offers offerType) {
        WarrantyRepairShop::offerType = offerType;
    }

    WarrantyRepairShop::WarrantyRepairShop(const string &companyName, int daysToComplete,
                                           const string &conditionsOfService, int warrantyPeriodDays, Offers offerType)
            : ServiceCenter(companyName, daysToComplete, conditionsOfService), warrantyPeriodDays(warrantyPeriodDays),
              offerType(offerType) {}

    WarrantyRepairShop::WarrantyRepairShop() : ServiceCenter() {}

    void WarrantyRepairShop::printFields() {
        ServiceCenter::printFields();
        cout << "Warranty period: " << warrantyPeriodDays << " days \n";
        cout << "Current plan:" << getOfferType() << endl;
    }
} // Models