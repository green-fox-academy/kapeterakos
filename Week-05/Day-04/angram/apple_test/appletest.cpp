//
// Created by Akos on 2018. 11. 22..
//

#include <gtest/gtest.h>
#include "apple.h"

TEST(apple_check, test_apple){
    ASSERT_EQ(getApple(), "apple");
}

TEST(apple_check , test_anagram){
    ASSERT_EQ(anagram("worda","aword"), true);
}