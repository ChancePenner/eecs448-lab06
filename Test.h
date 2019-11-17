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
    * @brief Creates an empty Queue, enqueue 448, enqueue 268, then dequeue, and verifies peekFront() returns 448
    **/
	  void test05();

    /**
    * @brief Creates an empty Queue and verifies dequeue() throws a std::runtime_error
    **/
  	void test06();

    /**
    * @brief Enqueue 448 on empty queue, verfify peekFront returns 448, enqueue 268 verfiy peekFront returns 448, and enqueue 168, and verify peekFront returns 448: ";
    **/
  	void test07();

    /**
    * @brief Verify peekFront throws std::runtime_error on empty queue
    **/
  	void test08();

    /**
    * @brief verifies that isEmpty returns true after dequeing a queue of size 1
    **/
  	void test09();

    /**
    * @brief verifies peekFront returns correct value after enqueing, dequeing, and then enqueing again
    **/
  	void test10();

    /**
    * @brief verifies that enqueue cannot take in a char by checking if the queue is still empty
    **/
  	void test11();

    /**
    * @brief Verifies peekFront does not alter any values
    **/
  	void test12();

};

#endif
