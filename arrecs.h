//
// Created by Arya Rakha on 10/14/2023.
//

#ifndef ARRECS_ARRECS_H
#define ARRECS_ARRECS_H

#include "extern/entt/single_include/entt/entt.hpp"

// Application-related files
#include "src/application/Application.h"
#include "src/application/IWindow.h"
#include "src/application/Time.h"

// Scenes
#include "src/scenes/Scene.h"

// Services
#include "src/services/ILoadableService.h"
#include "src/services/IUpdatableService.h"
#include "src/services/ILocatableService.h"
#include "src/services/ServiceLocator.h"
#include "src/services/ServicesHandler.h"

// Systems
#include "src/systems/EventSystem.h"
#include "src/systems/IEarlyUpdatableSystem.h"
#include "src/systems/IEventPublisherSystem.h"
#include "src/systems/IEventSubscriberSystem.h"
#include "src/systems/IFinalUpdatableSystem.h"
#include "src/systems/IFixedUpdatableSystem.h"
#include "src/systems/ILateUpdatableSystem.h"
#include "src/systems/IRenderableSystem.h"
#include "src/systems/IUpdatableSystem.h"
#include "src/systems/IWindowInjectableSystem.h"
#include "src/systems/SystemsHandler.h"


#endif //ARRECS_ARRECS_H
