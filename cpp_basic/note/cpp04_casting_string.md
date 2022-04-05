## C++ 코딩 테스트를 위한 C++ 기초

### C++ 형변환 / 문자열

#### 형변환

1. 숫자를 한자리씩 끊어서 입력 받기

- cin을 사용하면 공백, 개행을 구분해서 받기 때문에 string으로 변환해서 입력 받는다.

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

2. 개행, 공백 포함한 문자열 받기

- getline 함수를 사용하면 문자열 전체를 받을 수 있다.

```c++
#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
  getline(cin, s);
  return 0;
}
```

3. 입력을 계속해서 받을 때

- while 문을 사용해서 입력 받는다.
- 특정 조건이 만족 될때까지 계속 입력을 받아야 하는 경우 사용한다.

```c++
//입력 값이 없을때 끝내는 경우
//scanf의 경우
while (scanf("%d", &n) != EOF)
//cin의 경우
while (cin >> n)
```

---

#### 출력

1. cout

- cout << "출력1" << "출력2" 와 같이 사용
- "\n" 또는 endl을 마지막에 추가하면 개행된다
- 출력 값에 따로 타입을 지정해주지 않아도 된다.
- 만약 특정 타입을 지정 해주고 싶으면 값을 변수에 담아 출력한다.

2. printf

- c의 printf와 같다.
- 형태지정자를 사용해서 타입 지정해서 출력하기에 편함
- c의 문법이므로 string 타입 지원을 안한다. 그래서 string 출력시에 c_str()함수를 사용해야 한다.

```c++
//c_str()
string str = "hello c++";
int main(){
  printf("%s\n",str.c_str());
  return 0;
}
```
