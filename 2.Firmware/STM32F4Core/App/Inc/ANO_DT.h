#ifndef _ANO_DT_H_
#define _ANO_DT_H_
#include "config.h"
#include <stdint.h>
#include <string.h>
#include "usart.h"
#include <math.h>
#include "imu.h"

typedef enum ANTO_MODE_E{
	ANTO_VER         = 0x00,
	ANTO_STATUS      = 0x01,
	ANTO_MPU_MAGIC   = 0X02,
	ANTO_RCDATA      = 0x03,
	ANTO_GPSDATA     = 0x04,
	ANTO_POWER    = 0x05,
	ANTO_MOTOR    = 0x06,
	ANTO_SENSER2  = 0x07,
	ANTO_RESERD1  = 0x08,
	ANTO_RESERD2  = 0x09,
	ANTO_FLY_MODE = 0x0A,
	ANTO_RATE_PID       = 0x10,
	ANTO_ANGLE_PID      = 0x11,
	ANTO_HEIGHT_PID  = 0x12,
	ANTO_PID4   = 0x13,
	ANTO_PID5    = 0x14,
	ANTO_PID6   = 0x15,
	ANTO_CHECK	 = 0xEF,
}ANTO_MODE_E;


void ANO_Main();

#endif
