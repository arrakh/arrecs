//
// Created by Arya Rakha on 6/5/2023.
//

#include "SystemsHandler.h"
#include "EventSystem.h"

void arr::SystemsHandler::UpdateSystems(entt::registry* registry) {
    for (const auto& system : updatables) {
        system->Update(registry);
    }
}

void arr::SystemsHandler::RenderSystems(entt::registry* registry) {
    for (const auto& system : renderables) {
        system->Render(registry);
    }
}

void arr::SystemsHandler::LoadSystems(entt::registry* registry) {
    for (const auto& system : loadables) {
        system->Load(registry);
    }
}

void arr::SystemsHandler::UnloadSystems() {
    for (const auto& system : loadables) {
        system->Unload();
    }
}

void arr::SystemsHandler::FixedUpdateSystems(entt::registry *registry) {
    for (const auto& system : fixedUpdatables) {
        system->FixedUpdate(registry);
    }
}

void arr::SystemsHandler::RegisterEvents(entt::registry *registry, arr::Events::Subscriber* listener) {
    for (const auto& system : eventRegistrables) {
        system->SubscribeEvents(registry, listener);
    }
}

void arr::SystemsHandler::UnregisterEvents(entt::registry *registry, arr::Events::Subscriber* listener) {
    for (const auto& system : eventRegistrables) {
        system->UnsubscribeEvents(registry, listener);
    }
}

void arr::SystemsHandler::SortRenderables() {
    std::sort(renderables.begin(), renderables.end(), [](const auto& a, const auto& b) {
        return a->GetRenderOrder() < b->GetRenderOrder();
    });
}

void arr::SystemsHandler::InjectPublisher(arr::Events::Publisher *publisher) {
    for (const auto& system : eventPublishers) {
        system->OnInjectPublisher(publisher);
    }
}

void arr::SystemsHandler::FinalUpdateSystems(entt::registry *registry) {
    for (const auto& system : finalUpdatables) {
        system->FinalUpdate(registry);
    }
}

void arr::SystemsHandler::EarlyUpdateSystems(entt::registry *registry) {
    for (const auto& system : earlyUpdatables) {
        system->EarlyUpdate(registry);
    }
}

void arr::SystemsHandler::LateUpdateSystems(entt::registry *registry) {
    for (const auto& system : lateUpdatables) {
        system->LateUpdate(registry);
    }
}

void arr::SystemsHandler::InjectServiceLocator(const std::shared_ptr<ServiceLocator>& serviceLocator) {
    for (const auto& system : locateServicesSystem) {
        system->LocateServices(serviceLocator);
    }
}

void arr::SystemsHandler::InjectWindow(std::shared_ptr<IWindow> window) {
    for (const auto& system : windowInjectableSystem) {
        system->OnInject(window);
    }
}
