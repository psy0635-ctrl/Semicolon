# 🧮 C언어 사칙연산 계산기 팀 프로젝트

---

## 📌 프로젝트 개요

C언어를 이용하여 사칙연산 계산기를 구현하는 팀 프로젝트입니다.
각 팀원이 하나의 연산 기능을 맡아 Git & GitHub 협업 방식으로 개발합니다.

---

## 👥 팀원 및 역할

| 이름 | 담당 기능   |
| -- | ------- |
| 민재 | 덧셈 (+)  |
| 가영 | 뺄셈 (-)  |
| 형준 | 곱셈 (*)  |
| 수용 | 나눗셈 (/) |
| 석현 | 나머지 (%) |

---

## 🛠️ 개발 환경

* Language: C
* Compiler: GCC
* IDE: Visual Studio / VSCode

---

## 📂 프로젝트 구조

```
calculator.c
README.md
```

---

## 🚀 실행 방법

### 1️⃣ 컴파일

```bash
gcc calculator.c -o calculator
```

### 2️⃣ 실행

```bash
./calculator
```

---

## ✨ 프로그램 기능

* 두 개의 숫자와 연산자를 입력받아 결과 출력
* 지원 연산자: `+`, `-`, `*`, `/`, `%`
* 0으로 나누기 예외 처리 포함

---

## 🔧 구현 내용 (수용 - 나눗셈)

---

### ✅ main 함수 조건

```c
else if (op == '/') {   //--> main 함수 내  // 사용자가 '/' 입력했을 때만 실행  // 나눗셈식 출력
    if (b == 0) {   // 1️. 1차 방어 (입력 단계에서 검사)
        // 0으로 나누려고 하면 바로 에러 출력
        printf("에러: 0으로 나눌 수 없습니다.\n");
    } else {
        // 2️. 정상적인 경우 → divide 함수 호출
        // a / b 계산 결과를 받아서 출력
        printf("%.2lf / %.2lf = %.2lf\n", a, b, divide(a, b));
        //double -> %.2f(x), %.2lf(o) : 소수점 둘째 자리까지 출력  
    }
}
```

---

### ✅ divide 함수 구현

```c
double divide(double a, double b) {    // divide 함수

    // 3️. 2차 방어 (함수 내부에서 한 번 더 검사) --> 이중안전장치 
    // (== 이 함수를 나중에 다른 곳에서도 사용할 수있기 때문)
      if (b == 0) {    // 0으로 나누는 경우 처리
        printf("에러: 0으로 나눌 수 없습니다.\n");
        return 0;  // 오류이므로 0 반환
    } 
    else {
        // 4. 정상적인 나눗셈 수행
        return a / b;
}
```

---

### ⚠️ 주의사항

* 0으로 나누기 방지 필수
* double 타입이므로 형변환 불필요

---

## 🌿 Git 협업 방법 (PR 포함)

---

## 💡 전체 흐름

👉 **clone → branch 생성 → 작업 → commit → push → PR → merge**

---

## 1️⃣ 레포지토리 클론

```bash
git clone <레포지토리 주소>
cd <프로젝트 폴더>
```

---

## 2️⃣ 최신 코드 가져오기 (작업 전 필수🔥)

```bash
git pull origin main
```

---

## 3️⃣ 브랜치 생성

```bash
git checkout -b feature/이슈번호/기능
```

### 예시

```bash
git checkout -b feature/4/divide
```

---

## ❗ 주의

* main 브랜치에서 작업 금지
* 항상 브랜치에서 작업

---

## 4️⃣ 코드 작성 후 커밋

```bash
git add .
git commit -m "feat: divide 기능 구현"
```

---

## 5️⃣ 원격 저장소에 push

```bash
git push origin feature/4/divide
```

---

## 6️⃣ Pull Request(PR) 생성

### 📍 방법

1. GitHub 접속
2. `Pull requests` 탭 클릭
3. `New pull request` 클릭
4. 아래와 같이 설정

| 항목      | 설정               |
| ------- | ---------------- |
| base    | main             |
| compare | feature/4/divide |

5. `Create pull request` 클릭

---

### ✍️ PR 제목 & 내용 예시

#### 제목

```
feat: divide 기능 구현
```

#### 내용

```
- 나눗셈 기능 구현
- 0으로 나누기 예외 처리 추가
```

---

## 7️⃣ merge

* 팀장이 확인 후 merge 진행
* 본인은 merge하지 않음

---

## 🔄 최신 코드 유지 방법

다른 팀원이 merge 했을 경우:

```bash
git checkout main
git pull origin main
git checkout feature/4/divide
git merge main
```

---

## ⚠️ 자주 발생하는 문제

---

### ❌ push 거절 (rejected)

```bash
git pull origin main
git push origin 브랜치이름
```

---

### ❌ 0으로 나누기 오류

👉 반드시 if문으로 방지

---

## 🎯 프로젝트 목표

* Git 협업 경험 습득
* C언어 함수 구조 이해
* 팀 프로젝트 흐름 익히기

---

## 💡 핵심 요약

👉 main에서 작업 ❌
👉 브랜치에서 작업 ✔
👉 PR로 코드 합치기 ✔

---

## 😎 한 줄 정리

👉 **"브랜치 → 작업 → PR → merge"**


