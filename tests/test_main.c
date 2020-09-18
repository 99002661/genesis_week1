#include "unity.h"
#include "arraysum.h"
#include "bintodeci.h"
#include "checkarmstrong.h"
#include "checkmagic.h"
#include "checkneon.h"
#include "checkperfect.h"
#include "checkprime.h"
#include "decitobin.h"
#include "largestinarray.h"
#include "missingnoinarray.h"
#include "smallestinarray.h"
int arr_1[] = {1,2,3};
int arr_2[] = {1,3};
void setUp(){}

void tearDown(){}
///ARRAY SUM////
void testarraysum(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(6, arraysum(arr_1,3), "[1,2,3] , 3");
  TEST_ASSERT_EQUAL_MESSAGE(4, arraysum(arr_2,2), "[1,3] , 2");
}
//BIN TO DECI//
void testbintodeci(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(255, bintodeci(11111111), "11111111");
  TEST_ASSERT_EQUAL_MESSAGE(213, bintodeci(11010101), "11010101");
}
//ARMSTRONG NUMBER//
void testarmstrong(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkarmstrong(153), "153");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkarmstrong(200), "200");
}
//MAGIC NUMBER//
/*void testmagic(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkmagic(1234), "1234");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkmagic(12345), "12345");
}*/

//NEON NUMBER//
/*void testneon(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(0, checkneon(111), "111");
  TEST_ASSERT_EQUAL_MESSAGE(1, checkneon(9), "9");
}*/
//PERFECT NUMBER//
void testperfect(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkperfect(496), "496");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkperfect(400), "400");
}
//PRIME NUMBER//
void testprime(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkprime(17), "17");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkprime(400), "400");
}
//DECI TO BIN//
void testdecitobin(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(10001, decitobin(17), "17");
  TEST_ASSERT_EQUAL_MESSAGE(10011100, decitobin(156), "156");
}


int testMain(void)
{
  UNITY_BEGIN();

  RUN_TEST(testarraysum);
  RUN_TEST(testbintodeci);
  RUN_TEST(testarmstrong);
//  RUN_TEST(testmagic);
//  RUN_TEST(testneon);
  RUN_TEST(testperfect);
  RUN_TEST(testprime);
  RUN_TEST(testdecitobin);

  return UNITY_END();
}