/*
 * sensor.h
 *
 *  Created on: Mar 11, 2024
 *      Author: kezia
 */

#ifndef INC_SENSOR_H_
#define INC_SENSOR_H_

#include "main.h"

extern volatile _Bool tim6_activate;
extern volatile _Bool tim6_active;
extern volatile uint32_t rising_edge_count;

void startMeasure();
_Bool isMeasuring();
void measure();

#endif /* INC_SENSOR_H_ */
