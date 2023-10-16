//
// Created by Arya Rakha on 7/27/2023.
//

#ifndef ARRECS_IUPDATABLESERVICE_H
#define ARRECS_IUPDATABLESERVICE_H

namespace arr {
    class IUpdatableService {
    public:
        virtual void Update(float deltaTime) = 0;
    };
}

#endif //ARRECS_IUPDATABLESERVICE_H
