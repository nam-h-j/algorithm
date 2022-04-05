## C++ 코딩 테스트를 위한 C++ 기초

### C++ 코드 구성

```
#include <bits/stdc++.h> // --- 1
using namespace std;// --- 2
string text;// --- 3
int main(){
cin >> text;// --- 4
cout << text;// --- 5
return 0; // - 6
}
```

1. 헤더파일, STL라이브러리 import

- bits/stdc++.h는 모든 표준 라이브러리가 포함된 헤더

2. 네임스페이스
3. 변수선언
4. 입력 : cin, scanf
5. 출력 : cout, printf
6. 프로세스 종료

### C++ 타입

```
void, char, string, bool, int, long long, double, unsigned long long
```

1. void : 리턴값이 없음

```
#include <bits/stdc++.h>
using namespace std;
int num = 1;
void func_a(){
  num = 7;
  cout << num << "\n";
  return;
}
int main(){
  func_a();
  return 0;
}
```

- 함수 리턴 값 없으면 void로 선언
- 함수를 선언할때는 호출되는 상단에 해야함.
- 형과 인자만 선언해서 하단에서 모듈화 할 수도 있음.(코테에선 굳이 할 필요 없음)

2. char

- 1byte
- ''으로 할당 ex) char a = 'a';

3. string

- ""안에 할당

* 아스키코드
  - 1964년 미국 ANSI에서 표준화한 정보교환용 7비트 부호체계
  - 000(0x00)부터 127(0x7F)까지 총 128개의 부호가 사용
  - 1바이트를 구성하는 8비트 중에서 7비트를 사용, 나머지 1비트는 통신 에러 검출을 위한 용도(패리티 비트).
  - 문자열에서 + 하는 연산은 “아스키코드”를 기반
  - A = 089
  - a = 121

4. bool

- boolean, 1byte

5. int

- 4byte 정수
- 약 +-21억까지 (-2,147,483,648 ~ 2,147,483,647)

6. long long

- 8byte 정수
- 약 +-922경까지 (–9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807)

7. float, double

- 실수형
- float 보다 double이 정확도가 높기 때문에 double을 사용한다.

8. unsigned long long

- 8바이트 양수
- 약 1844경까지 (0 ~ 18,446,744,073,709,551,615)

### C++ 형식지정자

```
scanf("%d.%d", num1, num2);
```

- 입출력 할때 형식지정자를 사용하는 것이 안정성이 높다.
- 실수형 연산은 되도록 정수형 연산으로 변경하는 것이 좋다.
  - %d(digit) : int
  - %c(character) : char
  - %s(string) : string
  - %lf(long float) : double
  - %ld(long double): long long

### C++ 입력처리

- cout문법

  1. cout << "출력할 대상" << "출력할 대상2"
  2. cout로 출력할때는 형태를 지정하지 않고 바로 값만 작성해도 된다.

- cin문법

1. 숫자를 한자리씩 끊어서 입력 받기

- cin을 사용하면 스페이스, 개행까지 함께 받기 때문에 string으로 변환해서 입력 받는다.

```c++
cin >> n >> m;
for(int i = 0; i < n; i++){
cin >> s;
}
```

- scanf를 사용할때 아래 코드와 같이 형식지정자("%1d")를 사용하면 string으로 변환하지 않아도 한자리씩 끊어서 받을 수 있다.

```c++
scanf("%1d", &a[i][j]);
```
