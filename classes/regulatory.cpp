//
// Created by Artem on 24.04.2022.
//

#include "regulatory.h"

namespace Models {
    int RegulatoryWarranty::getRegularityPerYear() const {
        return regularityPerYear;
    }

    void RegulatoryWarranty::setRegularityPerYear(int regularityPerYear) {
        RegulatoryWarranty::regularityPerYear = regularityPerYear;
    }

    double RegulatoryWarranty::getAmountOfWorkInHours() const {
        return amountOfWorkInHours;
    }

    void RegulatoryWarranty::setAmountOfWorkInHours(double amountOfWorkInHours) {
        RegulatoryWarranty::amountOfWorkInHours = amountOfWorkInHours;
    }

    RegulatoryWarranty::RegulatoryWarranty(const string &companyName, int daysToComplete, const string &conditionsOfService,
                                           int regularityPerYear, double amountOfWorkInHours) : ServiceCenter(companyName,
                                                                                              daysToComplete,
                                                                                              conditionsOfService),
                                                                                regularityPerYear(regularityPerYear),
                                                                                amountOfWorkInHours(
                                                                                        amountOfWorkInHours) {}

    RegulatoryWarranty::RegulatoryWarranty(): ServiceCenter() {}

    void RegulatoryWarranty::printFields() {
        ServiceCenter::printFields();
        cout << regularityPerYear << " fixes per year \n";
        cout << "Amount of work: " << amountOfWorkInHours << "h\n";
    }
} // Models