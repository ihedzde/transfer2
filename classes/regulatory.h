//
// Created by Artem on 24.04.2022.
//

#ifndef ARTEMOOP_REGULATORY_H
#define ARTEMOOP_REGULATORY_H

#include "../abstractions/serviceCenter.h"

namespace Models {

    class RegulatoryWarranty: public ServiceCenter {
        int regularityPerYear;
        double amountOfWorkInHours;
    public:
        void printFields() override;

        RegulatoryWarranty();

        RegulatoryWarranty(const string &companyName, int daysToComplete, const string &conditionsOfService,
                           int regularityPerYear, double amountOfWorkInHours);

        int getRegularityPerYear() const;

        void setRegularityPerYear(int regularityPerYear);

        double getAmountOfWorkInHours() const;

        void setAmountOfWorkInHours(double amountOfWorkInHours);
    };

} // Models

#endif //ARTEMOOP_REGULATORY_H
