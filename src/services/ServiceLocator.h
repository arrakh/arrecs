//
// Created by Arya Rakha on 7/27/2023.
//

#ifndef ARRECS_SERVICELOCATOR_H
#define ARRECS_SERVICELOCATOR_H


#include "ServicesHandler.h"

namespace arr {
    class ServiceLocator {
    private:
        ServicesHandler *handler;
    public:
        ServiceLocator() {}

        explicit ServiceLocator(ServicesHandler *handler) : handler(handler) {}

        template<class T>
        std::shared_ptr<T> Locate() {
            return handler->template Locate<T>();
        }

        virtual ~ServiceLocator() {
            delete handler;
        }
    };
}

#endif //ARRECS_SERVICELOCATOR_H
