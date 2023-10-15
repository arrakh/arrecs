//
// Created by Arya Rakha on 8/2/2023.
//

#ifndef ARRECS_IWINDOW_H
#define ARRECS_IWINDOW_H

#include "../services/ServiceLocator.h"

class IWindow {
public:
    virtual ~IWindow() {}

    virtual bool TryInitialize(ServiceLocator& serviceLocator) = 0;
    virtual bool IsOpen() const = 0;
    virtual void End() = 0;
    virtual void PollEvents() = 0;
    virtual void Clear() = 0;
    virtual void Render() = 0;
};


#endif //ARRECS_IWINDOW_H
