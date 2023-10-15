//
// Created by Arya Rakha on 7/27/2023.
//

#ifndef ARRECS_ILOADABLESERVICE_H
#define ARRECS_ILOADABLESERVICE_H


class ILoadableService {
public:
    virtual void Load() = 0;
    virtual void Unload() = 0;
};


#endif //ARRECS_ILOADABLESERVICE_H
