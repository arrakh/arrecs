//
// Created by Arya Rakha on 6/26/2023.
//

#ifndef ARRECS_ILATEUPDATABLESYSTEM_H
#define ARRECS_ILATEUPDATABLESYSTEM_H


#include "entt/entity/registry.hpp"

namespace arr {
    class ILateUpdatableSystem {
    public:
        virtual void LateUpdate(entt::registry* registry) = 0;
    };
}


#endif //ARRECS_ILATEUPDATABLESYSTEM_H
