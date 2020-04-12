#include <iostream>
#include "LoggerTest.h"

LoggerTest::LoggerTest() : sut(NULL){

}

LoggerTest::~LoggerTest() {

}

void LoggerTest::SetUp() {
	sut = new Logger();
}

void LoggerTest::TearDown() {
	delete sut;
}

TEST_F (LoggerTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
