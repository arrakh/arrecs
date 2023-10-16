//
// Created by Arya Rakha on 10/15/2023.
//

#ifndef ARRECS_TIME_H
#define ARRECS_TIME_H


#include <chrono>

namespace arr {
    class Time {
    public:
        static void update();

        static float getDeltaTime();
        static float getUnscaledDeltaTime();

        static void setTimeScale(float scale);
        static float getTimeScale();

        static void setFixedDeltaTimeRate(float rate);
        static float getFixedDeltaTime();

    private:
        Time() = delete;  // Ensure the class cannot be instantiated

        static std::chrono::steady_clock::time_point lastFrame;
        static float deltaTime;
        static float unscaledDeltaTime;
        static float timeScale;
        static float fixedDeltaTimeRate;
    };
}


#endif //ARRECS_TIME_H
