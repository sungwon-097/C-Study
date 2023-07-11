//
// Created by sungwon on 23. 7. 11.
//

#include <iostream>
#include "reference.h"

/**
 * @brief number 주소값 전달, *p 를 통해 number 참조
 */
void pointer(){
    int number = 5;
    std::cout << number << std::endl;
    reference::change_val(&number);
    std::cout << number << std::endl;
}

/**
 * @brief a의 참조자로 another_a를 정의
 * @consider 상수의 래퍼런스, 래퍼런스의 래퍼런스, 래퍼런스의 배열, 래퍼런스의 포인터는 존재 할 수 없음
 */
void ref(){
    int a = 3;
    int& another_a = a;

    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;
}

/**
 * @brief x,y,z 모두 같은 변수를 가리키게 됨
 */
void advance(){
    int x;
    int& y = x;
    int& z = y;

    x = 1;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
}
/**
 * @brief 포인터는 가리키고자 하는 대상을 자유롭게 변경 가능, 레퍼런스는 선언 이후 변경 불가능하며 값 대입만 가능
 */
int main(){
    pointer();
    ref();
    advance();
    return 0;
}