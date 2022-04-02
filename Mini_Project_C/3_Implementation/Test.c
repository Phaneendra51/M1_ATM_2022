

#include "unity.h"
#include "login.h"
#include "mainmenu.h"
#include "checkBalance.h"
#include "moneyDeposite.h"
#include "moneyWithdraw.h"
#include "meniExit.h"
#include "errorMassage.h"

 #define ATM_Management_System
 void test_login(void);
 void test_mainMenu(void);
 void test_checkBalance(void);
 void test_moneyDeposite(void);
 void test_moneyWithdraw(void);
 void test_meniExit(void);
 void test_errorMassage(void);
 
 void setUp(){}
 void tearDown(){} 
  
 int main(){
 UNITY_BEGIN();
  
 RUN_TEST(test_login);
 RUN_TEST(test_mainMenu);
 RUN_TEST(test_checkBalance);
 RUN_TEST(test_moneyDeposite);
 RUN_TEST(test_moneyWithdraw);
 RUN_TEST(test_menuExit);
 RUN_TEST(test_errorMassage);

 return UNITY_END();
 }

    
 void test_login(void){
 Test_ASSERT_EQUAL1,enterDetails());
 } 
      
 void test_mainMenu(void){
 TEST_ASSERT_EQUAL(1,clickMenu());
 }
 
 void test_checkBalance(void){
 TEST_ASSERT_EQUAL(1,checkBalance());
 }
 
 void test_moneyDeposite(void){
 TEST_ASSERT_EQUAL(1,moneyDeposite());
 }
 
 void test_moneyWithdraw(void){
 TEST_ASSERT_EQUAL(1,moneyWithdraw());
 }
 
 void test_menuExit(void){
 TEST_ASSERT_EQUAL(1,exitMenu());
 }
 
 void test_errorMassage(void){
 TEST_ASSERT_EQUAL(1,wrongEntry());
 }
 
