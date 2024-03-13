/*
 * sensor.c
 *
 *  Created on: Mar 11, 2024
 *      Author: kezia
 */

#include "sensor.h"

// Starts a measure on next tim6 overflow
void startMeasure()
{
	tim6_activate = 1;
	rising_edge_count = 0;
}

// Check if the system is currently measuring
_Bool isMeasuring()
{
	return (tim6_activate || tim6_active);
}

void measure()
{
	startMeasure();
	while(isMeasuring()) {};
}
