//
// Created by brayanrv on 14/3/20.
//

#include "gtest/gtest.h"
#include "calculator.h"

TEST(addTest, test1){
    EXPECT_EQ(calculator::add(1,2),3);
    EXPECT_EQ(calculator::add(1,1),2);
}

TEST(substractTest, test2){
    EXPECT_EQ(calculator::substract(2,2),0);
    EXPECT_EQ(calculator::substract(1,2),-1);
}

TEST(multiplyTest, test3){
    EXPECT_EQ(calculator::multiply(2,2),4);
    EXPECT_EQ(calculator::multiply(1,2),2);
}

TEST(divideTest, test4){
    EXPECT_EQ(calculator::divide(2,2),1);
    EXPECT_EQ(calculator::divide(1,2),0.5);
}

