/*이스케이프(escape) 문자-> 문장을 원하는 형식에 맞추어 출력하기
'\n'(new line을 의미)을 줄을 바꿀 위치에 넣어야 한다.
'\t'는 탭(tab),
'\c'은 캐리지리턴(carriage return, 그 줄의 맨 앞으로 커서를 보냄)
*/

#include <stdio.h>

int main(void){
    printf("Hello\nWorld ");
    return 0;
}
