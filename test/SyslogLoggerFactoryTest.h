#ifndef SYSLOGLOGGERFACTORYTEST_H_
#define SYSLOGLOGGERFACTORYTEST_H_

#include <gtest/gtest.h>
#include "SyslogLoggerFactory.h"

class SyslogLoggerFactoryTest : public ::testing::Test {
protected:
	SyslogLoggerFactory* sut;
	void SetUp();
	void TearDown();

public:
	SyslogLoggerFactoryTest();
	virtual ~SyslogLoggerFactoryTest();

};

#endif
