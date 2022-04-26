//
// Created by Artem on 24.04.2022.
//

#include "priorityQueue.h"
#include "../abstractions/serviceCenter.h"

using namespace std;
using namespace Models;
namespace Container {
    void PriorityQueue::swap(ServiceCenter *first, ServiceCenter *second) {
        ServiceCenter temp = *second;
        *second = *first;
        *first = temp;
    }

    void PriorityQueue::heapify(int index) {
        int size = heapTree.size();

        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        if (left < size && heapTree[left] > heapTree[largest])
            largest = left;
        if (right < size && heapTree[right] > heapTree[largest])
            largest = right;

        if (largest != index) {
            swap(heapTree[index], heapTree[largest]);
            heapify(largest);
        }
    }

    void PriorityQueue::insert(ServiceCenter *newNum) {
        int size = heapTree.size();
        if (size == 0) {
            heapTree.push_back(newNum);
        } else {
            heapTree.push_back(newNum);
            for (int i = size / 2 - 1; i >= 0; i--) {
                heapify(i);
            }
        }
    }

    bool PriorityQueue::deleteNode(int id) {
        int size = heapTree.size();
        int i;
        bool found = false;
        for (i = 0; i < size; i++) {
            if (id == heapTree[i]->getId())
            {
                found = true;
                break;
            }
        }
        if (!found)
            return found;
        swap(heapTree[i], heapTree[size - 1]);

        heapTree.pop_back();
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(i);
        }
        return found;
    }

    void PriorityQueue::printQueue() {
        for (int i = 0; i < heapTree.size(); ++i) {
            heapTree[i]->printFields();
            cout << endl;
        }
    }

    int PriorityQueue::sumRepairsByCompany(string company) {
        int counter = 0;
        for (int i = 0; i < heapTree.size(); ++i)
            if (heapTree[i]->getCompanyName() == company)
                counter++;
        return counter;
    }
} // Container