//
// Created by Arya Rakha on 6/5/2023.
//

#include "SystemsHandler.h"

void SystemsHandler::UpdateSystems(entt::registry* registry) {
    for (const auto& system : updatables) {
        system->Update(registry);
    }
}

void SystemsHandler::RenderSystems(entt::registry* registry) {
    for (const auto& system : renderables) {
        system->Render(registry);
    }
}

void SystemsHandler::LoadSystems(entt::registry* registry) {
    for (const auto& system : loadables) {
        system->Load(registry);
    }
}

void SystemsHandler::UnloadSystems() {
    for (const auto& system : loadables) {
        system->Unload();
    }
}

void SystemsHandler::FixedUpdateSystems(entt::registry *registry) {
    for (const auto& system : fixedUpdatables) {
        system->FixedUpdate(registry);
    }
}

void SystemsHandler::RegisterEvents(entt::registry *registry, Events::Subscriber* listener) {
    for (const auto& system : eventRegistrables) {
        system->SubscribeEvents(registry, listener);
    }
}

void SystemsHandler::UnregisterEvents(entt::registry *registry, Events::Subscriber* listener) {
    for (const auto& system : eventRegistrables) {
        system->UnsubscribeEvents(registry, listener);
    }
}

void SystemsHandler::SortRenderables() {
    std::sort(renderables.begin(), renderables.end(), [](const auto& a, const auto& b) {
        return a->GetRenderOrder() < b->GetRenderOrder();
    });
}

void SystemsHandler::InjectPublisher(Events::Publisher *publisher) {
    for (const auto& system : eventPublishers) {
        system->OnInjectPublisher(publisher);
    }
}

void SystemsHandler::FinalUpdateSystems(entt::registry *registry) {
    for (const auto& system : finalUpdatables) {
        system->FinalUpdate(registry);
    }
}

void SystemsHandler::EarlyUpdateSystems(entt::registry *registry) {
    for (const auto& system : earlyUpdatables) {
        system->EarlyUpdate(registry);
    }
}

void SystemsHandler::LateUpdateSystems(entt::registry *registry) {
    for (const auto& system : lateUpdatables) {
        system->LateUpdate(registry);
    }
}

void SystemsHandler::InjectServiceLocator(const std::shared_ptr<ServiceLocator>& serviceLocator) {
    for (const auto& system : locateServicesSystem) {
        system->LocateServices(serviceLocator);
    }
}

void SystemsHandler::InjectWindow(std::shared_ptr<IWindow> window) {
    for (const auto& system : windowInjectableSystem) {
        system->OnInject(window);
    }
}
