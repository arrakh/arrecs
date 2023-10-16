//
// Created by Arya Rakha on 6/26/2023.
//

#ifndef ARRECS_IFINALUPDATABLESYSTEM_H
#define ARRECS_IFINALUPDATABLESYSTEM_H

#include <entt/entt.hpp>

namespace arr {
    class IFinalUpdatableSystem {
    public:
        virtual void FinalUpdate(entt::registry* registry) = 0;
    };
}


#endif //ARRECS_IFINALUPDATABLESYSTEM_H
