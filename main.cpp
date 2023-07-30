#include<iostream>
#include<gtest/gtest.h>

int sum(int a, int b)
{
	return a + b;
}

TEST(SumTest, Positive) 
{ 
    ASSERT_EQ(6, sum(4, 2));
}

TEST(SumTest, Nagative) 
{ 
    ASSERT_NE(6, sum(5, 2));
}
