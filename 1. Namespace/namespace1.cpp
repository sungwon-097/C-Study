//
// Created by sungwon on 23. 7. 10.
//

#include "namespace1.h"
#include "namespace2.h"

/**
 * @brief namespace 명시해 사용
 */
namespace namespace_example {
    int func1() {
        namespace_example1::foo();
        namespace_example2::foo();

        namespace_example1::bar();
        namespace_example2::bar();
        return 0;
    }
}

/**
 * @brief namespace_example1에 정의된 모든 정의를 namespace 없이 사용
 */
using namespace namespace_example1;

int func2() {
    foo();
    namespace_example2::foo();

    bar();
    namespace_example2::bar();
    return 0;
}

/**
 * @brief namespace_example1에 정의된 foo()만을 namespace 없이 사용
 */
using namespace_example1::foo;

int func3() {
    foo();
    namespace_example2::foo();

    bar();
    namespace_example2::bar();
    return 0;
}

/**
 * @brief anonymous namespace 는 선언된 파일 내 에서만 접근 가능
 */
namespace{
    int foo();
    int bar();
}