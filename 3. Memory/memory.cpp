//
// Created by sungwon on 23. 7. 12.
//
#include "iostream"
/**
 * @summary stack 에서는 컴파일시 주소값이 확정되어 컴파일러에 의해 안정성이 보장. heap 영역은 런타임에 자유롭게 할당하고 해제할 수 있음
 */
int main(){
    int *p = new int;
    *p = 10;

    std::cout << *p << std::endl;

    /**
     * @brief new 키워드로 선언한 객체만 delete 가능, 지역변수 및 스택에 존재하는 메모리는 delete 할 수 없음
     */
    delete p;

    return 0;
}