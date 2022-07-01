#include "common.h"
#include "freertos_utils.h"

void FreeRTOS_TaskList_Task(void *p)
{
    char ptrTaskList[2048];
    while (1)
    {
        vTaskList(ptrTaskList);
        printf("\033[2J");
        printf("\033[0;0HTask\t\tState\tPrio\tStack\tNum\n%s\n", ptrTaskList);
        printf("==================================================\n");
        printf("B = Blocked, R = Ready, D = Deleted, S = Suspended\n\n");
        printf("Milliseconds since boot: %d\n", xTaskGetTickCount() * portTICK_PERIOD_MS);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}