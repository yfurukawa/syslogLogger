#include <iostream>
#include "ClientTest.h"

ClientTest::ClientTest() : sut(NULL){

}

ClientTest::~ClientTest() {

}

void ClientTest::SetUp() {
	sut = new Client();
}

void ClientTest::TearDown() {
	delete sut;
}

TEST_F (ClientTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
