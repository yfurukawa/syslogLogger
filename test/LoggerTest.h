#ifndef LOGGERTEST_H_
#define LOGGERTEST_H_

#include <gtest/gtest.h>
#include "Logger.h"

class LoggerTest : public ::testing::Test {
protected:
	Logger* sut;
	void SetUp();
	void TearDown();

public:
	LoggerTest();
	virtual ~LoggerTest();

};

#endif
