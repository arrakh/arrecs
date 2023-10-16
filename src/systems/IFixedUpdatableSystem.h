//
// Created by Arya Rakha on 6/4/2023.
//

#ifndef ARRECS_IFIXEDUPDATABLESYSTEM_H
#define ARRECS_IFIXEDUPDATABLESYSTEM_H


#include "entt/entity/registry.hpp"

namespace arr {
    class IFixedUpdatableSystem {
    public:
        virtual void FixedUpdate(entt::registry* registry) = 0;
    };
}


#endif //ARRECS_IFIXEDUPDATABLESYSTEM_H
