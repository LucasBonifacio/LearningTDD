#include <iostream>
#include <gtest/gtest.h>

// FizzBuzz Code Kata:
// Write a function that receives and prints a passed in numbers.
// But for multiples of three print "Fizz"
// instead of the number and the multiples of five prints "Buzz".
// For numbers which are multiples of
// both three and five print "FizzBuzz".

//  To do
//x Can I call the fizzBuzz function?
//x Get "1" when I pass in 1.
//x Get "2" when I pass in 2.
//x Get "Fizz" when I pass in 3.
//x Get "Buzz" when I pass in 5.
//x Get "Fizz" when I pass in 6 (a multiple of 3).
//x Get "Buzz" when I pass in 10 (a multiple of 5).
//x Get "FizzBuzz" when I pass in 15 (a multiple of 3 and 5).

bool isMultiple(int value,int base){
    return (0 == (value % base));
}

std::string fizzBuzz(int value){
    if (isMultiple(value,3) && isMultiple(value,5)){
        return "FizzBuzz";
    }
    if (isMultiple(value,3)){
        return "Fizz";
    }
    if (isMultiple(value,5)){
        return "Buzz";
    }
    return std::to_string(value);
}

void checkFizzBuzz(int value, std::string expectedResult){
    std::string result = fizzBuzz(value);
    ASSERT_STREQ(expectedResult.c_str(),result.c_str());
}

/* Removido por ser uma duplicata, já que o  teste abaixo já realiza o chamado da funcao fizzBuzz
TEST(FizzBuzzTest, canCallFizzBuzz){
    std::string result = fizzBuzz(1);
}*/

TEST(FizzBuzzTest, returns1With1PassedIn){
    checkFizzBuzz(1,"1");
}

TEST(FizzBuzzTest, returns2With2PassedIn){
    checkFizzBuzz(2,"2");
}

TEST(FizzBuzzTest, returnFizzWith3PassedIn){
    checkFizzBuzz(3,"Fizz");
}

TEST(FizzBuzzTest, returnBuzzWith5PassedIn){
    checkFizzBuzz(5,"Buzz");
}

TEST (FizzBuzzTest, returnFizzWith6PassedIn){
    checkFizzBuzz(6,"Fizz");
}

TEST (FizzBuzzTest, returnsBuzzWith10PassedIn){
    checkFizzBuzz(10,"Buzz");
}

TEST (FizzBuzzTest, returnsFizzBuzzWith15PassedIn){
    checkFizzBuzz(15,"FizzBuzz");
}