/** @brief Serial: 913a7526
    file: lab03.c
 *
 */
#include "ghcontrol.h"

int main(void)
{
	time_t now;
	float creadings[SENSORS] = {0.0};
	int tempc;
	int humidc;

	GhControllerInit();

	while (true)
	{
		now = time(NULL);
		GhGetReadings(creadings);
		GhDisplayReadings(now,creadings);
		GhSetControls(&tempc,&humidc,creadings);
		GhDisplayTargets();
		GhDisplayControls(&tempc,&humidc);
		GhDelay(GHUPDATE);
	}

	return EXIT_FAILURE;
}
