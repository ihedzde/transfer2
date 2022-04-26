//
// Created by Artem on 24.04.2022.
//

#include "serviceCenter.h"
using namespace std;
namespace Models {
    uint32_t ServiceCenter::currentId;
    const string &ServiceCenter::getCompanyName() const {
        return companyName;
    }

    void ServiceCenter::setCompanyName(const string &companyName) {
        ServiceCenter::companyName = companyName;
    }

    int ServiceCenter::getDaysToComplete() const {
        return daysToComplete;
    }

    void ServiceCenter::setDaysToComplete(int daysToComplete) {
        ServiceCenter::daysToComplete = daysToComplete;
    }

    const string &ServiceCenter::getConditionsOfService() const {
        return conditionsOfService;
    }

    void ServiceCenter::setConditionsOfService(const string &conditionsOfService) {
        ServiceCenter::conditionsOfService = conditionsOfService;
    }

    ServiceCenter::ServiceCenter(const string &companyName, int daysToComplete, const string &conditionsOfService)
            : id(currentId++), companyName(companyName), daysToComplete(daysToComplete), conditionsOfService(conditionsOfService) {}

    ServiceCenter::ServiceCenter(): id(currentId++) {}

    void ServiceCenter::printFields() {
        cout << "Id: " << id << endl;
        cout << "Company name: " << companyName << endl;
        cout << "Time on repair: " << daysToComplete << " days \n";
        cout << "Condition of service: " << conditionsOfService << endl;
    }

    int ServiceCenter::getId() const {
        return id;
    }

    ServiceCenter::~ServiceCenter() {

    }
} // Models