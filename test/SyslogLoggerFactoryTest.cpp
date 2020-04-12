#include <iostream>
#include "SyslogLoggerFactoryTest.h"

SyslogLoggerFactoryTest::SyslogLoggerFactoryTest() : sut(NULL){

}

SyslogLoggerFactoryTest::~SyslogLoggerFactoryTest() {

}

void SyslogLoggerFactoryTest::SetUp() {
	sut = new SyslogLoggerFactory();
}

void SyslogLoggerFactoryTest::TearDown() {
	delete sut;
}

TEST_F (SyslogLoggerFactoryTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
