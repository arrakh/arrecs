cmake_minimum_required(VERSION 3.24)
project(arrecs)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("extern/entt")
include_directories("extern/entt")

add_library(arrecs arrecs.h src/application/Application.cpp src/application/Application.h src/application/IWindow.h
        src/scenes/Scene.cpp src/scenes/Scene.h src/services/ILoadableService.h src/services/ILocatableService.h
        src/services/IUpdatableService.h src/services/ServiceLocator.h src/services/ServicesHandler.cpp
        src/services/ServicesHandler.h src/application/Time.cpp src/application/Time.h src/systems/EventSystem.h
        src/systems/IEarlyUpdatableSystem.h src/systems/IEventPublisherSystem.h
        src/systems/IEventSubscriberSystem.h src/systems/IFinalUpdatableSystem.h src/systems/IFixedUpdatableSystem.h
        src/systems/ILateUpdatableSystem.h src/systems/ILoadableSystem.h src/systems/ILocateServicesSystem.h
        src/systems/IUpdatableSystem.h src/systems/IRenderableSystem.h src/systems/IWindowInjectableSystem.h
        src/systems/SystemsHandler.cpp)

target_link_libraries(arrecs PRIVATE EnTT)
