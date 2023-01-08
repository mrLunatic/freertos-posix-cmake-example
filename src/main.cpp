#include <iostream>

#include "FreeRTOS.h"
#include "timers.h"

#define mainTIMER_SEND_FREQUENCY_MS pdMS_TO_TICKS(500UL)

static void timerCallback(TimerHandle_t xTimerHandle) {
  std::cout << "tik-tac\n";
}

int main(void) {
  static TimerHandle_t xTimer = xTimerCreate(
      "Timer", mainTIMER_SEND_FREQUENCY_MS, pdTRUE, NULL, timerCallback);

  if (xTimer != NULL) {
    if (xTimerStart(xTimer, 0) != pdPASS) {
      std::cout << "Timer not started :(\n";
    } else {
      std::cout << "Timer started\n";
    }
  }

  // Start FreeRTOS scheduler.
  vTaskStartScheduler();

  // Should never reach this point.
  while (true)
    ;
}