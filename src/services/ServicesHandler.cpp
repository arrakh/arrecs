//
// Created by Arya Rakha on 7/27/2023.
//

#include "ServicesHandler.h"

void arr::ServicesHandler::Load() {
    for (const auto& service : loadableServices) {
        service->Load();
    }
}

void arr::ServicesHandler::Unload() {
    for (const auto& service : loadableServices) {
        service->Unload();
    }
}

void arr::ServicesHandler::Update(float deltaTime) {
    for (const auto& service : updatableServices) {
        service->Update(deltaTime);
    }
}
