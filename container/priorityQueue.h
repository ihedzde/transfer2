//
// Created by Artem on 24.04.2022.
//

#ifndef ARTEMOOP_PRIORITYQUEUE_H
#define ARTEMOOP_PRIORITYQUEUE_H
#include <iostream>
#include <vector>
#include "../abstractions/serviceCenter.h"
using namespace std;
using namespace Models;
namespace Container {

    class PriorityQueue {
        vector<ServiceCenter*> heapTree;
    private:
        void swap(ServiceCenter *first, ServiceCenter *second);
        void heapify(int index);
        public:
            void insert(ServiceCenter* newNum);
            bool deleteNode(int id);
            void printQueue();
            int sumRepairsByCompany(string company);
    };

} // Container

#endif //ARTEMOOP_PRIORITYQUEUE_H
