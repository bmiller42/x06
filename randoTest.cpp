/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WITHIN RANDO CLASS:

	bool isDivisibleBy(int,int);
		
	bool isPalindrome(string);

	unsigned int mostPopularDigit(unsigned int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, notDivisible)
{
	Rando rando;
	bool actual = rando.isDivisibleBy(2, 5);
	ASSERT_FALSE(actual);
}

TEST(RandoTest, firstNotDivisibleBySecond)
{
	Rando rando;
	bool actual = rando.isDivisibleBy(5, 2);
	ASSERT_FALSE( actual );
}

TEST(RandoTest, mostPopularDigit)
{
	Rando rando;
	unsigned int test = 000055521;
	int output;
	output = rando.mostPopularDigit(test);
	ASSERT_EQ(output, 0);
}

TEST(RandoTest, checkifTies)
{
	Rando rando;
	unsigned int test = 5551554321111;
	int output;
	output = rando.mostPopularDigit(test);
	ASSERT_EQ(output, -1);
}

TEST(RandoTest, sanityCheck)
{
	Rando rando;
	ASSERT_TRUE( true );
}
