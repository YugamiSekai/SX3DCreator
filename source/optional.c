#include <stdio.h>
#include "SX3DCreator.h"

void editValue()
{
	do{
	printf("What value would you like to edit?\n(1 for speed, 0 to go back to main menu)\n");
	scanf(" %d", &editSelection);
	}while (editSelection < 0 || editSelection > 1);

	if (editSelection == 1){

	fp = fopen("stage_1_1", "a");
	do{

		printf("What would you like the track speed to be? (60-130): ");
		scanf(" %d", &speedChangeValue);

	}while(speed < 60 || speed > 130);
	printf("Re-adding beginning values and Changing speed...\n");
	fprintf(fp, "# speedx 3d\n# stage 1-1\n\nspeed: %d", speedChangeValue);
	main();
	} else {
		main();
	}
}

void editFile()
{
	fp = fopen("stage_1_1", "a");
		if(fp == NULL) {
		printf("File not found...\n");
	}
}

void bonusSelect()
{
	do{

		printf("Would you like to add bonuses (shields, bombs) (y/n)?: ");
		scanf(" %c", &bonusChoice);

	}while(bonusChoice != 'y' && bonusChoice != 'n');
	if(bonusChoice == 'y') {
		do{

			printf("Would you like to add shields, or both?\n('s for shields-only, 'b' for both): ");
			scanf(" %c", &shieldsOrBombs);

		}while(shieldsOrBombs != 's' && shieldsOrBombs != 'b');
		if(shieldsOrBombs == 's') {
			fprintf(fp, "\nbonuses: shields, ");
		} else {
			fprintf(fp, "\nbonuses: all, ");
		}

		do{

			printf("What score would you want the bonuses to initialize? (20-80): ");
			scanf(" %d", &bonusFirstScore);

		}while(bonusFirstScore < 20 || bonusFirstScore > 80);

		printf("Defining bonus initialization...\n");
		fprintf(fp, "%d-", bonusFirstScore);

		do{

			printf("What score would you want the bonuses to first appear?\n(30-90,  make this value 10 more after the last value): ");
			scanf(" %d", &bonusSecondScore);

		}while(bonusSecondScore < 30 || bonusSecondScore > 90);

		printf("Defining bonus appearence...\n");
		fprintf(fp, "%d, 1-1\n", bonusSecondScore);

	} else {
		do{

		printf("Would you like to add zones? (y/n): ");
		scanf(" %c", &zoneOption);

		}while(zoneOption != 'y' && zoneOption != 'n');
		if(zoneOption == 'y') {
			do{

				printf("What zone would you like to add?\n '1' for gravity field\n'2' for nebula zone\n'3' for hueshift\n'4' for plasma zone\n'5' for blackout: ");
				scanf(" %c", &zoneSpecify);

			}while(zoneSpecify < 1 || zoneSpecify > 5);
			printf("Defining zones...\n");
			if(zoneSpecify == 1) {
				fprintf(fp, "zones: gravity@");
			} else if(zoneSpecify == 2) {
				fprintf(fp, "zones: nebula@");
			} else if(zoneSpecify == 3) {
				fprintf(fp, "zones: hueshift@");
			} else if(zoneSpecify == 4) {
				fprintf(fp, "zones: plasma@");
			} else {
				fprintf(fp, "zones: blackout@");
			}

		do{

			printf("What scorewould you like the zone to start? (500-2000): ");
			scanf(" %d", &zoneScore);

		}while(zoneScore < 500 || zoneScore > 2000);
		printf("Defining zone scores...\n");
		fprintf(fp, " %d", zoneScore);
		printf("UNFINISHED AREA");
		main();
		} else {
			printf("UNFINISHED AREA");
			main();
		}

	}
}
