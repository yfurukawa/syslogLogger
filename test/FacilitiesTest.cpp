#include <iostream>
#include "FacilitiesTest.h"

FacilitiesTest::FacilitiesTest() : sut(NULL){

}

FacilitiesTest::~FacilitiesTest() {

}

void FacilitiesTest::SetUp() {
	sut = new Facilities();
}

void FacilitiesTest::TearDown() {
	delete sut;
}

TEST_F (FacilitiesTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
