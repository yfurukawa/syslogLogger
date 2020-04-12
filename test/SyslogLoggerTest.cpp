#include <iostream>
#include "SyslogLoggerTest.h"

SyslogLoggerTest::SyslogLoggerTest() : sut(NULL){

}

SyslogLoggerTest::~SyslogLoggerTest() {

}

void SyslogLoggerTest::SetUp() {
	sut = new SyslogLogger();
}

void SyslogLoggerTest::TearDown() {
	delete sut;
}

TEST_F (SyslogLoggerTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
