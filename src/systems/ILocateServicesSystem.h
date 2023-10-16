//
// Created by Arya Rakha on 7/27/2023.
//

#ifndef ARRECS_ILOCATESERVICESSYSTEM_H
#define ARRECS_ILOCATESERVICESSYSTEM_H


#include <memory>
#include "../services/ServiceLocator.h"

class ILocateServicesSystem {
public:
    virtual void LocateServices(std::shared_ptr<arr::ServiceLocator> serviceLocator) = 0;
};


#endif //ARRECS_ILOCATESERVICESSYSTEM_H
