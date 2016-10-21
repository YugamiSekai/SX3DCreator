#include <stdio.h>
#include "SX3DCreator.h"

void openFile()
{
	fp = fopen("stage_1_1", "w");
		if(fp == NULL) {
		printf("Something went wrong...\n");
	}
	printf("Adding first 3 lines...\n\n");
	fprintf(fp, "# speedx 3d\n# stage 1-1\n\n");

}

void speedOption()
{
	do{

		printf("What would you like the track speed to be? (60-130): ");
		scanf("%d", &speed);

	}while(speed < 60 || speed > 130);
	printf("\nAdding speed...\n\n");
	fprintf(fp, "speed: %d\n", speed);
}

void trackInOutFlat()
{
	do{

	printf("Would you like it to be inside the circle, outside it, or flat?\n(insert 'i' for inside, 'o' for outside, 'f' for flat stage, or 'r' for random): ");
	scanf(" %c", &trackType);

	}while (trackType != 'i' && trackType != 'o' && trackType != 'f' && trackType != 'r');

	if (trackType == 'i') {
		fprintf(fp, "track: in:");
	} else if (trackType == 'o') {
		fprintf(fp, "track: out:");
	} else if (trackType == 'f') {
		fprintf(fp, "track: flat:");
	} else {
		fprintf(fp, "track: random:");
	}

	printf("\nDefining Track Type...\n");
}

void trackPointLength()
{
	do{

	printf("\nHow long would you like the track to be (in points, 500-2700): ");
	scanf("%d", &trackLength);

	}while(trackLength < 500 || trackLength > 2700);

	printf("\nDefining Track Length...\n\n");
	fprintf(fp, "%d\n", trackLength);

}

void obstacleSelect()
{
	do{

	printf("What obstacle would you like?\n(insert 1 for cubes, 2 for beams, 3 for spikes, 4 for rollers, 5 bouncers, or 6 for all): ");
	scanf(" %d", &obstacle);

	}while(obstacle < 1 || obstacle > 6);
	if(obstacle == 1) {
		fprintf(fp, "obstacles: cubes, ");
	} else if(obstacle == 2) {
		fprintf(fp, "obstacles: beams, ");
	} else if(obstacle == 3) {
		fprintf(fp, "obstacles: spiikes, ");
	} else if(obstacle == 4) {
		fprintf(fp, "obstacles: rollers, ");
	} else if(obstacle == 5) {
		fprintf(fp, "obstacles: bouncers, ");
	} else {
		fprintf(fp, "obstacles: all, ");
	}

	printf("Adding obstacles...\n\n");
}

void obtstacleTrailPass()
{
	do{

		printf("What score would you like to see the obstacle trails start? (20-80): ");
		scanf("%d", &obstacleTrail);

	}while(obstacleTrail < 20 || obstacleTrail > 80);

	printf("\nDefining obstacle trail scores...\n\n");
	fprintf(fp, "%d-", obstacleTrail);

	do{

		printf("What score would you like to pass by the first obstacle(s)\n(30-90, make this value 10 more after the last value): ");
		scanf("%d", &obstaclePass);

	}while(obstaclePass < 30 || obstaclePass > 90);

	printf("\nDefining obstacle pass scores...\n\n");
	fprintf(fp, "%d, ", obstaclePass);

}

void generatorLevelDefine()
{
	do{

		printf("What level of the generator would you like to use? (4-15)\n(Recommended you keep this at 4 until this value is known): ");
		scanf("%d", &generatorLevel);

	}while(generatorLevel < 4 || generatorLevel > 15);

	printf("\nDefining generator level...\n");
	fprintf(fp, "%d\n", generatorLevel);
	printf("Level complete!\n\n");
	main();
}
