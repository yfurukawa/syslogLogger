#ifndef SYSLOGLOGGERTEST_H_
#define SYSLOGLOGGERTEST_H_

#include <gtest/gtest.h>
#include "SyslogLogger.h"

class SyslogLoggerTest : public ::testing::Test {
protected:
	SyslogLogger* sut;
	void SetUp();
	void TearDown();

public:
	SyslogLoggerTest();
	virtual ~SyslogLoggerTest();

};

#endif
