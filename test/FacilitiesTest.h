#ifndef FACILITIESTEST_H_
#define FACILITIESTEST_H_

#include <gtest/gtest.h>
#include "Facilities.h"

class FacilitiesTest : public ::testing::Test {
protected:
	Facilities* sut;
	void SetUp();
	void TearDown();

public:
	FacilitiesTest();
	virtual ~FacilitiesTest();

};

#endif
