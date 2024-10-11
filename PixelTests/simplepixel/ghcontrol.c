/** @brief Gh control functions
*   @file ghcontrol.c
*/
#include "ghcontrol.h"
time_t now;

void GhDisplayHeader(const char * sname)
{
	fprintf(stdout,"%s's CENG153 Greenhouse Controller\n", sname);
}

int GhGetRandom(int range)
{
	return rand() % range;
}

void GhDelay(int milliseconds)
{
	long wait;
	clock_t now,start;

	wait = milliseconds*(CLOCKS_PER_SEC/1000);
	start = clock();
	now = start;
	while( (now-start) < wait )
	{
		now = clock();
	}
}

void GhControllerInit(void)
{
	GhDisplayHeader("Rohan Trikha");
	//GhSetTargets();
	srand((unsigned) time(NULL));
}

void GhDisplayControls(int * heater,int * humidifier)
{
	fprintf(stdout, "Controls\tHeater:%s\tHumidifier:%s\n",(*heater == ON) ? "1" : "0", (*humidifier == ON) ? "1" : "0");
}

void GhDisplayReadings(time_t rtime,float dreads[SENSORS])
{
	fprintf(stdout,"\nUnit: %LX %sReadings\tT: %5.1fC\tH: %5.1f%%\tP: %6.1fmb\n", ShGetSerial(),ctime(&rtime),dreads[TEMPERATURE],dreads[HUMIDITY],dreads[PRESSURE]);
}

void GhDisplayTargets(void)
{
	fprintf(stdout, "Setpoints\tT: %5.1fC\tH: %5.1f%%\n",STEMP,SHUMID );
}

void GhSetControls(int * heater,int * humidifier,float readings[SENSORS])
{
	if (readings[TEMPERATURE] < STEMP) {
		*heater = ON;
	} else {
		*heater = OFF;
	}

	if (readings[HUMIDITY] < SHUMID) {
		*humidifier = ON;
	} else {
		*humidifier = OFF;
	}
}
/*
void GhSetTargets(void)
{
	fprintf(stderr, "\n%s not implemented.\n","GhSetTargets");
}
*/
float GhGetHumidity(void)
{
#if SIMULATE
	return GhGetRandom(USHUMID - LSHUMID) + LSHUMID;
#else
	return 55.0;
#endif
}

float GhGetPressure(void)
{
#if SIMULATE
	return GhGetRandom(USPRESS - LSPRESS) + LSPRESS;
#else
	return 1013.0;
#endif
}

float GhGetTemperature(void)
{
#if SIMULATE
	return GhGetRandom(USTEMP - LSTEMP) + LSTEMP;
#else
	return 20.0;
#endif
}

void GhGetReadings(float readings[SENSORS])
{
	readings[TEMPERATURE] = GhGetTemperature();
	readings[HUMIDITY] = GhGetHumidity();
	readings[PRESSURE] = GhGetPressure();
}
