## C++ 코딩 테스트를 위한 C++ 기초

### C++ 형변환 / 문자열

#### 형변환(casting)

1. 숫자의 캐스팅

- int로 casting을 한다면?

```c++
short a=2000;
int b;
b = (int) a; // c-like cast notation <= 이게 좀더 common 한 방법 같음
b = int (a); // functional notation
```

- double과 int를 연산하면 결과는 = double
- 연산하는 순서나 타입간의 관계에 따라 타입이 결정 됨
- 하지만 정합성을 위해서 같은 타입으로 캐스팅하고 연산을 진행하는 것이 좋음(고려해야 하는 것이 하나 늘어나기 때문에 버그를 만들 수 있음)

2. 문자의 캐스팅

- 문자열을 숫자로 바꾸는 로직이 필요할때가 있음
- A(65)와 a(97)의 아스키코드는 외워놓고 있는게 좋음(a에서 z까지 1씩 더하면 되므로)

```c++
//두 코드는 같은 결과가 나옴
char a = 'a';
cout << (int)a - 97 << "\n";
cout << (int)a - 'a' << "\n";
```

#### 문자열(string)

- 알아두면 유용한 문자열관련 함수

1. reverse

- 순서를 뒤집는다

```c++
  reverse(str.begin(), str.end())
```

- 특정 부분만 뒤집고 싶다면 아래와 같이 사용 가능

```c++
  reverse(str.begin(), str.begin()+10)
```

2. substr

- 지정한 수(배열)의 자리에 있는 문자열을 뽑아낸다.

```c++
int startVal = 0;
int endVal = 20;
substr(startVal, endVal)
```

3. find

- 지정한 문자열이 대상 문자열에 있는지 탐색
- 없으면 "string::npos(문자열 끝 위치를 의미)"를 반환

```c++
string str = "this is c++!"
if(str.find("c++") != string::npos){
  cout << "We have c++!!" << std::endl;
}else{
  cout << "There is no c++.." << std::endl;
}
```

4. split

- c++은 split이 없다..(ㅇㅁㅇ!!!)
- 그래서 직접 구현 해야함 아래 스플릿 로직 숙지해두기

```c++
#include <bits/stdc++.h>
using namespace std;

//여기서 부터 split 함수
//vector를 쓰는 이유는 스플릿한 값의 스택을 쌓기 위해서
vector<string> split(string input, string delimiter) {
  vector<string> ret;//result
  long long pos = 0;//position
  string token = "";//substr 결과를 담기 위한 변수(tmp)
  //1. delimiter가 있으면 delimiter 위치를 pos에 대입
  while ((pos = input.find(delimiter)) != string::npos) {
    //2. 위에서 취득한 pos를 가지고 원본에서 substr로 뽑아냄
    token = input.substr(0, pos);
    //3. 결과를 담음
    ret.push_back(token);
    //4. 중복 탐색이 일어나지 않도록 방금 추출한 부분을 input 에서 지움
    input.erase(0, pos + delimiter.length());
  }
  //5. 스플릿이 끝난 벡터배열을 리턴
  ret.push_back(input);
  return ret;
}
int main(){
  string s = "unfortunately, Split Function is have not included in C++ then we have to make our own ";
  string d = " ";
  vector<string> a = split(s, d);
for(string b : a) cout << b << "\n";\

```
