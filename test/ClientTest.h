#ifndef CLIENTTEST_H_
#define CLIENTTEST_H_

#include <gtest/gtest.h>
#include "Client.h"

class ClientTest : public ::testing::Test {
protected:
	Client* sut;
	void SetUp();
	void TearDown();

public:
	ClientTest();
	virtual ~ClientTest();

};

#endif
