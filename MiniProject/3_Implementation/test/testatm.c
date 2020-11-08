#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <head.h>
#define PROJECT_NAME    "AutomatedTellerMachine"

/* Prototypes for all the test functions */

void test_checkBalance();
void test_moneyDeposit();
void test_moneyWithdraw();

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/

  CU_add_test(suite, "checkBalance", test_checkBalance);
  CU_add_test(suite, "moneyDeposit", test_moneyDeposit);
  CU_add_test(suite, "moneyWithdraw", test_moneyWithdraw);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions
void test_checkBalance();
void test_moneyDeposit();
void test_moneyWithdraw();
*/

void test_checkBalance() {
  CU_ASSERT(10000.00 == checkBalance(10000.00));

  /* Dummy fail*/
  CU_ASSERT(9500.00 != checkBalance(10000.00));
}
void test_moneyWithdraw(){
 CU_ASSERT( 10000.00 >= moneyWithdraw(10000.00));

  /* Dummy fail*/
  CU_ASSERT( 9500.00 < moneyWithdraw(10000.00));
}
void test_moneyDeposit(){
 CU_ASSERT( 10000.00+200.00 == moneyDeposit(10200.00));

  /* Dummy fail*/
  CU_ASSERT( 9000.00+500.00 != moneyDeposit(10000.00));
}
