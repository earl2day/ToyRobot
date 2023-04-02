#ifndef _ROBOT_TEST_
#define _ROBOT_TEST_

class RobotTest : public CppUnit::TestCase
{
  CPPUNIT_TEST_SUITE(RobotTest);
  CPPUNIT_TEST(runTest);
  CPPUNIT_TEST_SUITE_END();
 public:
   RobotTest();
   ~RobotTest();

   void runTest();
};

#endif

