//
// Created by Artem on 24.04.2022.
//

#include "iostream"
#ifndef ARTEMOOP_SERVICECENTER_H
#define ARTEMOOP_SERVICECENTER_H
using namespace std;
namespace Models {
    enum ServiceType {
        Warranty,
        Regulatory
    };
    class ServiceCenter {
        static uint32_t currentId;
    protected:
        int id;
        string companyName;
        int daysToComplete;
        string conditionsOfService;
    public:
        ServiceCenter();
        ServiceCenter(const string &companyName, int daysToComplete, const string &conditionsOfService);
        virtual ~ServiceCenter();

        virtual void printFields();
        int getId() const;
        const string &getCompanyName() const;

        void setCompanyName(const string &companyName);

        int getDaysToComplete() const;

        void setDaysToComplete(int daysToComplete);

        const string &getConditionsOfService() const;

        void setConditionsOfService(const string &conditionsOfService);
    };

} // Models

#endif //ARTEMOOP_SERVICECENTER_H
