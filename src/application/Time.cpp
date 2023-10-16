//
// Created by Arya Rakha on 10/15/2023.
//

#include "Time.h"

std::chrono::steady_clock::time_point arr::Time::lastFrame = std::chrono::steady_clock::now();
float arr::Time::deltaTime = 0;
float arr::Time::unscaledDeltaTime = 0;
float arr::Time::timeScale = 1.0f;
float arr::Time::fixedDeltaTimeRate = 60.0f;

void arr::Time::update() {
    auto now = std::chrono::steady_clock::now();
    unscaledDeltaTime = std::chrono::duration<float, std::chrono::seconds::period>(now - lastFrame).count();
    deltaTime = unscaledDeltaTime * timeScale;
    lastFrame = now;
}

float arr::Time::getDeltaTime() {
    return deltaTime;
}

float arr::Time::getUnscaledDeltaTime() {
    return unscaledDeltaTime;
}

void arr::Time::setTimeScale(float scale) {
    timeScale = scale;
}

float arr::Time::getTimeScale() {
    return timeScale;
}

void arr::Time::setFixedDeltaTimeRate(float rate) {
    fixedDeltaTimeRate = rate;
}

float arr::Time::getFixedDeltaTime() {
    return 1.f / fixedDeltaTimeRate;
}
