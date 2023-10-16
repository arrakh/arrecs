//
// Created by Arya Rakha on 6/5/2023.
//

#ifndef ARRECS_SCENE_H
#define ARRECS_SCENE_H


#include "../systems/SystemsHandler.h"
#include "../systems/EventSystem.h"
#include "../services/ServiceLocator.h"
#include "../application/IWindow.h"

namespace arr {
    class Scene {
    public:
        Scene();
        virtual ~Scene();
        void Start(std::shared_ptr<IWindow> window, std::shared_ptr<ServiceLocator> serviceLocator);
        void Update();
        void FixedUpdate();
        void FinalUpdate();
        void EarlyUpdate();
        void LateUpdate();
        void Render();

        template<typename EventType> void PublishEvent(const EventType& event) { eventPublisher.Publish(event); }

        bool shouldEnd = false;

    protected:
        virtual void RegisterSystems(SystemsHandler* handle) = 0;
        virtual void OnStart() { }
        virtual void OnUpdate() { }
        virtual void OnFixedUpdate() { }
        virtual void OnRender() { }

        entt::registry registry;
        std::shared_ptr<IWindow> window;

    private:
        std::shared_ptr<ServiceLocator> serviceLocator;
        SystemsHandler systemHandler;
        EventMap eventMap;
        Events::Subscriber eventListener {&eventMap };
        Events::Publisher eventPublisher { &eventMap };
    };
}


#endif //ARRECS_SCENE_H
