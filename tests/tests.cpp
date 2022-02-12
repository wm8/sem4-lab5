// Copyright 2022 wm8

#include <gtest/gtest.h>
#include "Stack.h"
#include "TestStruct.h"
TEST(unit_test, head_test)
{
  Stack<int> stack{};
  for(int i=0; i !=5; i++)
    stack.push(i);
  ASSERT_EQ(4, stack.head());
}
TEST(unit_test, pop_test1)
{
  Stack<int> stack{};
  for(int i=0; i !=5; i++)
    stack.push(i);
  [[maybe_unused]] auto t = stack.pop();
  ASSERT_EQ(4, t);
}
TEST(unit_test, pop_test2)
{
  Stack<int> stack{};
  for(int i=0; i !=5; i++)
    stack.push(i);
  [[maybe_unused]] auto t = stack.pop();
  ASSERT_EQ(3, stack.head());
}
TEST(unit_test, struct_test)
{
  Stack<TestStruct> stack;
  for(int i=0; i !=5; i++) {
    TestStruct t(i);
    stack.push(t);
  }
  [[maybe_unused]] auto t = stack.pop();
  ASSERT_EQ(3, stack.head().id);
}

