//
// Created by Arya Rakha on 6/8/2023.
//

#ifndef ARRECS_IEVENTPUBLISHERSYSTEM_H
#define ARRECS_IEVENTPUBLISHERSYSTEM_H


#include "EventSystem.h"

class IEventPublisherSystem {
public:
    virtual void OnInjectPublisher(Events::Publisher* publisher) = 0;
};


#endif //ARRECS_IEVENTPUBLISHERSYSTEM_H
