//
// Created by Arya Rakha on 6/5/2023.
//

#include "Scene.h"

arr::Scene::Scene() {

}

arr::Scene::~Scene() {
    systemHandler.UnregisterEvents(&registry, &eventListener);
    systemHandler.UnloadSystems();
}

void arr::Scene::Start(std::shared_ptr<IWindow> window, std::shared_ptr<ServiceLocator> serviceLocator) {
    this->window = window;

    RegisterSystems(&systemHandler);
    systemHandler.SortRenderables();
    systemHandler.InjectWindow(window);
    systemHandler.InjectServiceLocator(serviceLocator);
    systemHandler.RegisterEvents(&registry, &eventListener);
    systemHandler.InjectPublisher(&eventPublisher);
    systemHandler.LoadSystems(&registry);

    OnStart();
}

void arr::Scene::Update() {
    systemHandler.UpdateSystems(&registry);
    OnUpdate();
}

void arr::Scene::FixedUpdate() {
    systemHandler.FixedUpdateSystems(&registry);
    OnFixedUpdate();
}

void arr::Scene::Render() {
    systemHandler.RenderSystems(&registry);
    OnRender();
}

void arr::Scene::FinalUpdate() {
    systemHandler.FinalUpdateSystems(&registry);
}

void arr::Scene::EarlyUpdate() {
    systemHandler.EarlyUpdateSystems(&registry);
}

void arr::Scene::LateUpdate() {
    systemHandler.LateUpdateSystems(&registry);
}
