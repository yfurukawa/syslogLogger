#ifndef LEVELSTEST_H_
#define LEVELSTEST_H_

#include <gtest/gtest.h>
#include "Levels.h"

class LevelsTest : public ::testing::Test {
protected:
	Levels* sut;
	void SetUp();
	void TearDown();

public:
	LevelsTest();
	virtual ~LevelsTest();

};

#endif
