//
// Created by Arya Rakha on 6/4/2023.
//

#ifndef ARRECS_IUPDATABLESYSTEM_H
#define ARRECS_IUPDATABLESYSTEM_H

#include "entt/entt.hpp"

namespace arr {
    class IUpdatableSystem {
    public:
        virtual void Update(entt::registry* registry) = 0;
    };
}


#endif //ARRECS_IUPDATABLESYSTEM_H
