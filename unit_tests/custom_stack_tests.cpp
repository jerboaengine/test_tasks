
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../ccustomstack.h"

using namespace testing;

TEST(CustomStackTests, PushEmpty)
{
    CCustomStack<int> stack;
    EXPECT_TRUE(stack.empty());
    stack.push(8);
    EXPECT_FALSE(stack.empty());
}

TEST(CustomStackTests, PushMin)
{
    CCustomStack<int> stack;
    stack.push(8);
    ASSERT_THAT(stack.min(), Eq(8));
    stack.push(9);
    ASSERT_THAT(stack.min(), Eq(8));
    stack.push(3);
    ASSERT_THAT(stack.min(), Eq(3));
    stack.push(4);
    ASSERT_THAT(stack.min(), Eq(3));
    stack.push(7);
    ASSERT_THAT(stack.min(), Eq(3));
    stack.push(11);
    ASSERT_THAT(stack.min(), Eq(3));
    stack.push(6);
    ASSERT_THAT(stack.min(), Eq(3));
}

TEST(CustomStackTests, PopMin)
{
    CCustomStack<int> stack;
    stack.push(9);
    stack.push(3);
    stack.push(4);
    stack.push(7);
    stack.push(11);
    stack.push(6);

    ASSERT_THAT(stack.min(), Eq(3));
    stack.pop();
    ASSERT_THAT(stack.min(), Eq(3));
    stack.pop();
    ASSERT_THAT(stack.min(), Eq(3));
    stack.pop();
    ASSERT_THAT(stack.min(), Eq(3));
    stack.pop();
    ASSERT_THAT(stack.min(), Eq(3));
    stack.pop();
    ASSERT_THAT(stack.min(), Eq(9));
}

TEST(CustomStackTests, PushPopTopEmpty)
{
    CCustomStack<int> stack;
    stack.push(9);
    ASSERT_THAT(stack.top(), Eq(9));
    stack.push(3);
    ASSERT_THAT(stack.top(), Eq(3));
    stack.push(4);
    ASSERT_THAT(stack.top(), Eq(4));
    stack.push(7);
    ASSERT_THAT(stack.top(), Eq(7));
    stack.push(11);
    ASSERT_THAT(stack.top(), Eq(11));
    stack.push(6);
    ASSERT_THAT(stack.top(), Eq(6));

    stack.pop();
    ASSERT_THAT(stack.top(), Eq(11));
    stack.pop();
    ASSERT_THAT(stack.top(), Eq(7));
    stack.pop();
    ASSERT_THAT(stack.top(), Eq(4));
    stack.pop();
    ASSERT_THAT(stack.top(), Eq(3));
    stack.pop();
    ASSERT_THAT(stack.top(), Eq(9));
    stack.pop();

    EXPECT_TRUE(stack.empty());
}
