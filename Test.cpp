/**
*	@file test.hpp
*	@author Chance Penner
*	@date 2019.11.13
*/
#include "Test.h"
#include "Queue.h"

Test::Test()
{}

void Test::runTests()
{
  test01();
	test02();
	test03();
	test04();
	test05();
	test06();
	test07();
	test08();
	test09();
	test10();
	test11();
	test12();
	test13();
	test14();
	test15();
}

void Test::test01()
{
  std::cout << "Test 01: New Queue is empty: ";
  Queue testerQueue;

  if(testerQueue.isEmpty())
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test02()
{
  std::cout << "Test 02: Enqueing an empty Queue makes it not empty: ";
  Queue testerQueue;
  testerQueue.enqueue(4);

  if(!testerQueue.isEmpty())
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test03()
{
  std::cout << "Test 03: Enqueue 448 on empty queue then peekFront returns 448: ";
  Queue testerQueue;
  testerQueue.enqueue(448);

  if(testerQueue.peekFront() == 448)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test04()
{
  std::cout << "Test 04: Enqueue 448 on empty queue then enqueue 268, then peekFront returns 448: ";
  Queue testerQueue;
  testerQueue.enqueue(448);
  testerQueue.enqueue(268);

  if(testerQueue.peekFront() == 448)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test05()
{
  std::cout << "Test 05: Enqueue 448 on empty queue, enqueue 268, dequeue, then peekFront returns 448: ";
  Queue testerQueue;
  testerQueue.enqueue(448);
  testerQueue.enqueue(268);
  testerQueue.dequeue();

  if(testerQueue.peekFront() == 268)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}


void Test::test06()
{
  std::cout << "Test 06: Dequeue on empty queue throws std::runtime_error: ";
  Queue testerQueue;

  try
  {
    testerQueue.dequeue();
    std::cout << "FAILED\n";
  }
  catch(std::runtime_error& rte)
  {
    std::cout << "PASSED\n";
  }
}

void Test::test07()
{
  std::cout << "Test 07: Enqueue 448 on empty queue, verfify peekFront returns 448, enqueue 268 verfiy peekFront returns 448, and enqueue 168, and verify peekFront returns 448: ";
  Queue testerQueue;
  bool is448_1 = false;
  bool is448_2 = false;
  bool is448_3 = false;

  testerQueue.enqueue(448);
  if(testerQueue.peekFront() == 448)
  {
    is448_1 = true;
  }

  testerQueue.enqueue(268);
  if(testerQueue.peekFront() == 448)
  {
    is448_2 = true;
  }

  testerQueue.enqueue(168);
  if(testerQueue.peekFront() == 448)
  {
    is448_3 = true;
  }

  if(is448_1 && is448_2 && is448_3)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test08()
{
  std::cout << "Test 08: peekFront on empty Queue throws std::runtime_error: ";
  Queue testerQueue;

  try
  {
    testerQueue.peekFront();
    std::cout << "FAILED\n";
  }
  catch(std::runtime_error& rte)
  {
    std::cout << "PASSED\n";
  }
}

void Test::test09()
{
  std::cout << "Test 09: isEmpty returns true after dequeing a queue of size 1: ";
  Queue testerQueue;
  testerQueue.enqueue(448);
  testerQueue.dequeue();
  if(testerQueue.isEmpty())
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test10()
{
  std::cout << "Test 10: Verifies peekFront returns correct value after enqueing, dequeing, and then enqueing again: ";
  Queue testerQueue;
  testerQueue.enqueue(448);
  testerQueue.dequeue();
  testerQueue.enqueue(268);
  if(testerQueue.peekFront() == 268)
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test11()
{
  std::cout << "Test 11: Verifies that enqueue cannot take in a char: ";
  Queue testerQueue;
  testerQueue.enqueue('d');
  if(testerQueue.isEmpty())
  {
    std::cout << "PASSED\n";
  }
  else
  {
    std::cout << "FAILED\n";
  }
}

void Test::test12()
{
  
}

void Test::test13()
{

}
void Test::test14()
{

}
void Test::test15()
{

}
