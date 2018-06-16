/*
 * google test framework test
 */

#include "gtest/gtest.h"

TEST(BaseTest, Test1)
{
   EXPECT_TRUE(true);
}


/*
 * test fixture test
 */
class FixtureTest : public testing::Test
{
protected:
   virtual void SetUp() override{
      std::cout << "confirm setup run" << std::endl;
   }

   void tool(){
      std::cout << "confirm tool run" << std::endl;
   }
};

TEST_F(FixtureTest, Test1)
{
   EXPECT_TRUE(true);
}

TEST_F(FixtureTest, Test2)
{
   tool();
   EXPECT_TRUE(true);
}




