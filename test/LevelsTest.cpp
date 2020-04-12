#include <iostream>
#include "LevelsTest.h"

LevelsTest::LevelsTest() : sut(NULL){

}

LevelsTest::~LevelsTest() {

}

void LevelsTest::SetUp() {
	sut = new Levels();
}

void LevelsTest::TearDown() {
	delete sut;
}

TEST_F (LevelsTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
