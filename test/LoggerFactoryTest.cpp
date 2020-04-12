#include <iostream>
#include "LoggerFactoryTest.h"

LoggerFactoryTest::LoggerFactoryTest() : sut(NULL){

}

LoggerFactoryTest::~LoggerFactoryTest() {

}

void LoggerFactoryTest::SetUp() {
	sut = new LoggerFactory();
}

void LoggerFactoryTest::TearDown() {
	delete sut;
}

TEST_F (LoggerFactoryTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
