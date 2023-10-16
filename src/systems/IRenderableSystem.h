//
// Created by Arya Rakha on 6/4/2023.
//

#ifndef ARRECS_IRENDERABLESYSTEM_H
#define ARRECS_IRENDERABLESYSTEM_H

#include "entt/entt.hpp"

namespace arr {
    class IRenderableSystem {
    public:
        virtual void Render(entt::registry* registry) = 0;
        virtual int GetRenderOrder() = 0;
    };
}


#endif //ARRECS_IRENDERABLESYSTEM_H
