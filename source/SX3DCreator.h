	#ifndef SX3DCreator_H_
	#define SX3DCreator_H_

	int worldDefiner;
	int stageDefiner;
	int speed;
	int trackLength;
	char trackType;
	int obstacle;
	int obstacleTrail;
	int obstaclePass;
	int generatorLevel;
	char optionalDecision;
	int shieldStart;
	char openingChoice;
	char bonusChoice;
	char shieldsOrBombs;
	int bonusFirstScore;
	int bonusSecondScore;
	char zoneOption;
	int zoneSpecify;
	int zoneScore;
	int editSelection;
	int speedChangeValue;
	FILE *fp;

	void version();
	void changelog();
	void announcements();
	void editFile();
    void openFile();
	void speedOption();
	void trackInOutFlat();
	void trackPointLength();
	void obstacleSelect();
	void obtstacleTrailPass();
	void generatorLevelDefine();
	void bonusSelect();
	void editFile();

	#endif // SX3DCreator_H_
