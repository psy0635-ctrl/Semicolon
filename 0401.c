#include <math.h>  --> math.h 라이브러리를 추가하여 pow 함수를 사용할 수 있도록 합니다.(추가)
#include <stdio.h>

// =============================================
// 함수 선언
// =============================================
double add(double a, double b); // 민재 
double subtract(double a, double b); // 가영
double multiply(double a, double b); // 형준
double divide(double a, double b); // 수용
int modulo(int a, int b); // 석현

// =============================================
// main 함수
// =============================================
int main() {
    double a, b;
    char op;

    printf("=== 사칙연산 계산기 ===\n");
    printf("수식을 입력하세요 (예: 10 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    if (op == '+') {
        printf("결과 : %.2lf + %.2lf = %.2lf\n", a, b, add(a, b));   //덧셈식 출력

    } else if (op == '-') { 
        printf("%.2lf - %.2lf = %.2lf\n", a, b, subtract(a, b));   //뺄셈식 출력

    } else if (op == '*') {
        printf("%.2lf * %.2lf = %.2lf\n", a, b, multiply(a, b));   //곱셈식 출력

     } else if (op == '/' && b != 0)       {   // 연산자가 나눗셈이고, b가 0이 아닐 때
       printf("결과: %.2lf\n", divide(a, b));   // divide(a, b) 먼저 실행  , -->.lf로 수정 (double형식으로 출력하기 위해) / b != 0 조건 추가하여 0으로 나누는 경우를 방지
     }
     else if (/* 석현 - 나머지를 위한 조건을 채우세요 */) {
        // 나머지 결과를 출력하는 식을 구성해주세요

    } else {
        printf("오류: 올바른 연산자가 아닙니다 (+, -, *, /, %%)\n");
    }

    return 0;
}

// =============================================
// 민재 - 덧셈 함수
// =============================================
double add(double a, double b) {
    return a + b;
}

// =============================================
// 가영 - 뺄셈 함수
// =============================================
double subtract(double a, double b) {
    return add(a , -b); 
}

// =============================================
// 형준 - 곱셈 함수
// =============================================
double multiply(double a, double b) {
    return a * b;
}

// =============================================
// 수용 - 나눗셈 함수
// =============================================
double divide(double a, double b) {
    
    if (b != 0)  // b가 0이 아닐 때만 나눗셈 실행
    {   
        double result = a / b;   --> (double) a / b 에서 (double) 제거 (a와 b가 이미 double형이므로)
        return result; // 나눗셈 결과 반환
    }
    else
    {
        printf("에러: 0으로 나눌 수 없습니다.\n");

        return 0; // 오류 메시지 출력 후 0 반환
    }
}

// =============================================
// 석현 - 나머지 함수
// =============================================
int modulo(int a, int b) {
    // TODO: if문을 사용해서 b가 0일 때와 아닐 때를 나눠서 처리하세요
    //       b가 0이면 → 오류 메시지 출력 후 0 반환
    //       b가 0이 아니면 → a를 b로 나눈 나머지 반환

    if (/* 조건을 채우세요 */) {

    } else {

    }
}