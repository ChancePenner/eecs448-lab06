/**
*	@file test.h
*	@author Chance Penner
*	@date 2019.11.13
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "Queue.h"

class Test
{

  public:
  Test();

  void runTests();

  private:

    /**
    * @brief Creates an empty Queue and verifies isEmpty() returns true
    **/
    void test01();

    /**
    * @brief Creates an empty Queue, enqueue a value, and verifies isEmpty() returns false
    **/
    void test02();

    /**
    * @brief Creates an empty Queue, enqueue 448, and verifies peekFront() returns 448
    **/
    void test03();

    /**
    * @brief Creates an empty Queue, enqueue 448 then enqueue 268, and verifies peekFront() returns 448
    **/
	  void test04();

    /**
    * @brief
    **/
	  void test05();

    /**
    * @brief
    **/
  	void test06();

    /**
    * @brief
    **/
  	void test07();

    /**
    * @brief
    **/
  	void test08();

    /**
    * @brief
    **/
  	void test09();

    /**
    * @brief
    **/
  	void test10();

    /**
    * @brief
    **/
  	void test11();

    /**
    * @brief
    **/
  	void test12();

    /**
    * @brief
    **/
  	void test13();

    /**
    * @brief
    **/
  	void test14();

    /**
    * @brief
    **/
  	void test15();

};

#endif
