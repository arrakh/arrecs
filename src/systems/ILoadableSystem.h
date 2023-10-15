//
// Created by Arya Rakha on 6/4/2023.
//

#ifndef ARRECS_ILOADABLESYSTEM_H
#define ARRECS_ILOADABLESYSTEM_H


#include "entt/entity/registry.hpp"

class ILoadableSystem {
public:
    virtual void Load(entt::registry* registry) = 0;
    virtual void Unload() = 0;
};


#endif //ARRECS_ILOADABLESYSTEM_H
