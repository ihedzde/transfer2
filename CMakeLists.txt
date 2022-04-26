cmake_minimum_required(VERSION 3.22)
project(ArtemOOP)

set(CMAKE_CXX_STANDARD 23)

add_executable(ArtemOOP main.cpp abstractions/serviceCenter.cpp abstractions/serviceCenter.h classes/warrantyRepairShop.cpp classes/warrantyRepairShop.h classes/regulatory.cpp classes/regulatory.h container/priorityQueue.cpp container/priorityQueue.h ui/ui.cpp ui/ui.h)
