#include <stdio.h>

int main()
{
    //int a, b;
    //double result; // 소수점까지 표시하기 위해 double 사용

    //printf("나눗셈을 할 두 정수를 입력하세요 (예: 10 3): ");
    //scanf("%d %d", &a, &b);



    //// 0으로 나누는 오류 방지
    //if (b != 0) {
    //    // (double)로 형변환을 해줘야 소수점 아래까지 정확히 계산됩니다.
    //    result = (double)a / b;
    //    printf("결과: %d / %d = %.2f\n", a, b, result);
    //}
    //else {
    //    printf("에러: 0으로 나눌 수 없습니다.\n");
    //}

    //return 0;

    /////////////////////////////////////////////

}
 else if (op == '/') {      // 입력한 연산자가 `/` 인지 확인
     printf("결과: %.2f\n", divide(a, b));   // divide(a, b) 먼저 실행

}


double divide(double a, double b)  //a ÷ b 를 계산해서 소수(double)로 반환하는 함수
{
    if (b != 0)  // b가 0이 아닐 때만 나눗셈 실행
    {
        double result = (double)a / b;
        printf("결과: %.2f / %.2f = %.2f\n", a, b, result); //`%.2f` 로 소수점 둘째 자리까지 표시
        return result; // 나눗셈 결과 반환
    }
    else
    {
        printf("에러: 0으로 나눌 수 없습니다.\n");

        return 0; // 오류 메시지 출력 후 0 반환
    }

}