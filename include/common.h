#ifndef __COMMON_H__
#define __COMMON_H__

#include "pico/stdlib.h"
#include "stdio.h"
#include "hardware/adc.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "hardware/dma.h"
#include "hardware/pio.h"
#include "hardware/interp.h"
#include "hardware/timer.h"
#include "hardware/watchdog.h"
#include "hardware/clocks.h"
#include "hardware/vreg.h"

#include "project_config.h"

#ifdef USE_FREERTOS // FreeRTOS is used
#include <FreeRTOS.h>
#include <task.h>
#include <semphr.h>
#include <queue.h>
#include <event_groups.h>
#include "freertos_utils.h"
#endif

#endif // __COMMON_H__