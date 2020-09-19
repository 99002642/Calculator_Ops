#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtra(void);
void test_multi(void);
void test_division(void);
void test_primenum(void);
void test_positivenum(void);
void test_negativenum(void);
void test_iszero(void);
void test_modulo(void);
void test_evennum(void);
void test_oddnum(void);
void test_percent(void);
void test_fact(void);
void test_area_p(void);



/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "addition", test_addition);
  CU_add_test(suite, "subtra", test_subtra);
  CU_add_test(suite, "multi", test_multi);
  CU_add_test(suite, "division", test_division);
  CU_add_test(suite, "primenum", test_primenum);
  CU_add_test(suite, "positivenum", test_positivenum);
  CU_add_test(suite, "negativenum", test_negativenum);
  CU_add_test(suite, "iszero", test_iszero);
  CU_add_test(suite, "modulo", test_modulo);
  CU_add_test(suite, "evennum", test_evennum);
  CU_add_test(suite, "oddnum", test_oddnum);
  CU_add_test(suite, "percent", test_percent);
  CU_add_test(suite, "fact", test_fact);
  CU_add_test(suite, "area_p", test_area_p);
  
  
  


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

/* Write all the test functions */
void test_addition(void) {
  CU_ASSERT(30 == addition(10, 20));

  /* Dummy fail*/
  CU_ASSERT(1500 == addition(750, 7500));
}

void test_subtra(void) {
  CU_ASSERT(-3 == subtra(0, 3));

  /* Dummy fail*/
  CU_ASSERT(1 == subtra(1000, 900));
}

void test_multi(void) {
  CU_ASSERT(0 == multi(1, 0));

  /* Dummy fail*/
  CU_ASSERT(2 == multi(2, 5));
}

void test_division(void) {
  CU_ASSERT(0 == division(1, 0));

  /* Dummy fail*/
  CU_ASSERT(3 == division(2, 2));
}

void test_primenum(void)
 {
   CU_ASSERT(-1==primenum(5));
   CU_ASSERT(1==primenum(4));
 }
void test_positivenum(void)
{
  CU_ASSERT(1== positivenum(1));
}
void test_negativenum(void)
{
  CU_ASSERT(-1== negativenum(-4));
}
void test_iszero(void)
{
  CU_ASSERT(0== iszero(0));
}
void test_modulo(void) {
  CU_ASSERT(0 == modulo(10, 5));

  /* Dummy fail*/
  CU_ASSERT(2 == division(11, 3));
}
void test_evennum(void)
{
  CU_ASSERT(1 == evennum(2));
}
void test_oddnum(void)
{
  CU_ASSERT(1 == oddnum(3));
}
void test_percent(void) 
{
  CU_ASSERT(5 == percent(5, 100));
}
void test_fact(void) 
{
  CU_ASSERT(120 == fact(5));
}
void test_area_p(void) 
{
  CU_ASSERT(66.22 == area_p(30.1, 2.2));
}

            
                                      
     

