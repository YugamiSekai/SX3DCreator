#include <stdio.h>
#include "SX3DCreator.h"


// The first text shown in the program
void version()
{
	printf("\n-------------------------------------\n");
	printf("SX3D Stage Creator ---- V4\n");
	printf("Created by kprovost7314 of GBAtemp\n");
	printf("V4 ----- Split files\n");
	printf("-------------------------------------\n\n");
}

// The text shown in the changelog option
void changelog()
{
    	printf("\n-------------------------------------\n");
    	printf("V4 ----- Split Files\n");
	printf("\n-------------------------------------\n");
	printf("V3 ----- Added Zones, Added Changelog, Added Edit File Feature, but still experimental,\nAdded Announcements\n");
	printf("\n-------------------------------------\n");
	printf("V2 ----- Code Fix, added random/all selections, added all bonuses\n");
	printf("\n-------------------------------------\n");
	printf("V1 ----- Initial Version\n");
	printf("\n-------------------------------------\n");
	main();
}

// The text shown in the announcements option
void announcements()
{
	printf("1: Once I learn the Windows API in C, this program will (possibly) be a GUI program\n\n");
	printf("Generators may be implemented in a seperate program until I figure out #2\n\n");
	main();

}
