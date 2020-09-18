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
}

int testMain(void)
{
  UNITY_BEGIN();

  RUN_TEST(testarraysum);

  return UNITY_END();
}