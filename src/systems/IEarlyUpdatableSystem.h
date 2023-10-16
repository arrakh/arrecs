//
// Created by Arya Rakha on 10/8/2023.
//

#ifndef ARRECS_IEARLYUPDATABLESYSTEM_H
#define ARRECS_IEARLYUPDATABLESYSTEM_H

#include <entt/entt.hpp>

namespace arr {
    class IEarlyUpdatableSystem {
    public:
        virtual void EarlyUpdate(entt::registry* registry) = 0;
    };
}

#endif //ARRECS_IEARLYUPDATABLESYSTEM_H
