#ifndef LOGGERFACTORYTEST_H_
#define LOGGERFACTORYTEST_H_

#include <gtest/gtest.h>
#include "LoggerFactory.h"

class LoggerFactoryTest : public ::testing::Test {
protected:
	LoggerFactory* sut;
	void SetUp();
	void TearDown();

public:
	LoggerFactoryTest();
	virtual ~LoggerFactoryTest();

};

#endif
