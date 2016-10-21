#include <stdio.h>
#include "SX3DCreator.h"

int main()
{
	version();
	do{
		printf("Would you like to create a file or add optional values?\n('r' for required, 'o' for optional)\n\nWould you like to edit the file of an existing level? [EXPERIMENTAL]\n('e' to edit)\n\nView the changelog?\n('c' for changelog, SCROLL UP TO SEE)\n\n View the Announcements\n('a' for announcements, SCROLL UP TO SEE)\n\n Or exit?\n('x' to exit): ");
		scanf(" %c", &openingChoice);
	}while(openingChoice != 'r' && openingChoice != 'o' && openingChoice != 'e' && openingChoice != 'c' && openingChoice != 'a' && openingChoice != 'x');

	// required.c
	if(openingChoice == 'r') {
	openFile();
	speedOption();
	trackInOutFlat();
	trackPointLength();
	obstacleSelect();
	obtstacleTrailPass();
	generatorLevelDefine();
	fclose(fp);
	main();

	// optional.c
	} else if(openingChoice == 'o'){
	editFile();
	bonusSelect();
	fclose(fp);
	main();

	// descriptions.c
	} else if(openingChoice == 'c'){
		changelog();

    // optional.c
	} else if(openingChoice == 'e'){
		editValue();
		fclose(fp);

    // descriptions.c
	} else if(openingChoice == 'a'){
		announcements();
	}else{
	return 0;
	}
}
