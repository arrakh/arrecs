//
// Created by Arya Rakha on 6/9/2023.
//

#ifndef ARRECS_APPLICATION_H
#define ARRECS_APPLICATION_H


#include <memory>
#include "IWindow.h"
#include "../scenes/Scene.h"
#include "../services/ServicesHandler.h"
#include "../services/ServiceLocator.h"

namespace arr {

    class Application {
    public:
        void Run();

        float fixedTickAccumulator = 0;

        void GameLoop();

        template <typename Scene>
        static void ChangeScene() {
            nextScene = std::make_unique<Scene>();
            currentScene->shouldEnd = true;
        }

    protected:
        virtual std::unique_ptr<Scene> GetInitialScene() = 0;
        virtual void RegisterServices() = 0;
        virtual IWindow* GetWindow() = 0;
        ServicesHandler servicesHandler;


    private:
        std::shared_ptr<ServiceLocator> serviceLocator;
        std::shared_ptr<IWindow> window;

        static std::unique_ptr<Scene> currentScene;
        static std::unique_ptr<Scene> nextScene;

    };
}


#endif //ARRECS_APPLICATION_H
