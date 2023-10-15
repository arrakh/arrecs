//
// Created by Arya Rakha on 8/19/2023.
//

#ifndef ARRECS_IWINDOWINJECTABLESYSTEM_H
#define ARRECS_IWINDOWINJECTABLESYSTEM_H


class IWindowInjectableSystem {
public:
    virtual void OnInject(std::shared_ptr<IWindow> window) = 0;
};


#endif //ARRECS_IWINDOWINJECTABLESYSTEM_H
