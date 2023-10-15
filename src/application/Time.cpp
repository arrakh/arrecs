//
// Created by Arya Rakha on 10/15/2023.
//

#include "Time.h"

std::chrono::high_resolution_clock::time_point Time::lastFrame = std::chrono::high_resolution_clock::now();
float Time::deltaTime = 0;
float Time::unscaledDeltaTime = 0;
float Time::timeScale = 1.0f;
float Time::fixedDeltaTimeRate = 60.0f;

void Time::update() {
    auto now = std::chrono::high_resolution_clock::now();
    unscaledDeltaTime = std::chrono::duration<float, std::chrono::seconds::period>(now - lastFrame).count();
    deltaTime = unscaledDeltaTime * timeScale;
    lastFrame = now;
}

float Time::getDeltaTime() {
    return deltaTime;
}

float Time::getUnscaledDeltaTime() {
    return unscaledDeltaTime;
}

void Time::setTimeScale(float scale) {
    timeScale = scale;
}

float Time::getTimeScale() {
    return timeScale;
}

void Time::setFixedDeltaTimeRate(float rate) {
    fixedDeltaTimeRate = rate;
}

float Time::getFixedDeltaTime() {
    return 1.f / fixedDeltaTimeRate;
}
