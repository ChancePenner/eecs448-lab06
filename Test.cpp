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
  std::cout << "Test03: Enqueue 448 on empty queue then peekFront returns 448: ";
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
  std::cout << "Test04: Enqueue 448 on empty queue then enqueue 268, then peekFront returns 448: ";
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

}

void Test::test06()
{

}

void Test::test07()
{

}

void Test::test08()
{

}

void Test::test09()
{

}

void Test::test10()
{

}

void Test::test11()
{

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
