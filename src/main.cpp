#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif


int main(void){
    stdio_init_all();

    #ifdef USE_FREERTOS
    // Start FreeRTOS scheduler if using FreeRTOS
        #ifdef ENABLE_FREERTOS_TASK_STATS
            xTaskCreate(FreeRTOS_TaskList_Task, "TaskList", 4096, NULL, tskIDLE_PRIORITY + 1, NULL);
        #endif
    vTaskStartScheduler();
    #endif

    while(1){
        printf("Hello World.\n");
        sleep_ms(1500);
    }
}

#ifdef __cplusplus
}
#endif