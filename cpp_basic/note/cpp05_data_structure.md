## C++ 코딩 테스트를 위한 C++ 기초

### C++ 자료구조

#### 형변환(casting)

1. pair, tuple

- pair : 두개의 값을 담을 때
- tuple : 세가지 이상의 값을 담을 때
- tie : pair과 tuple에서 두개 이상의 값을 빼낼때

```c++
//tie를 사용하지 않은 코드
#include<bits/stdc++.h>
using namespace std;
pair<int, int> pi;
tuple<int, int, int> ti;
int a, b, c;
int main(){
  pi = {1, 2};
  a = pi.first;
  b = pi.second;
  cout << a << " : " << b << "\n";
  ti = make_tuple(1, 2, 3);
  a = get<0>(ti);
  b = get<1>(ti);
  c = get<2>(ti);
  cout << a << " : " << b << " : "<< c << "\n";
  return 0;
}

//tie를 사용한 코드
#include<bits/stdc++.h>
using namespace std;
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;
int main(){
  pi = make_pair(1, 2);
  tl = make_tuple(1, 2, 3);
  tie(a, b) = pi;
  cout << a << " : " << b << "\n";
  tie(a, b, c) = tl;
  cout << a << " : " << b << " : "<< c << "\n";
return 0;
}
```

- sort : 정렬하는 함수
  - sort(처음부분, 마지막부분, 커스텀 오퍼레이터)
  - 만약 배열을 비교한다고 했을 때, 마지막 값에는 마지막 배열의 다음 값을 넣어야 함(인자로 받는 마지막 값은 소팅에 포함 시키지 않기 때문에)

```c++
//Array의 sort
int a[5];
int main(){
  sort(a, a + 5);//이렇게 인자를 넘기면 a[0] ~ a[0]+4 범위를 정렬한다.
  return 0;
}
```

```c++
//ASC(오름차순), DESC(내림차순)
int a[5];
int main(){
  //ASC(오름차순)
  sort(a, a + 5);
  sort(a, a + 5, less<int>());

  //DESC(내림차순)
  sort(a, a + 5, greater<int>());
  return 0;
}
```

```c++
//커스텀 오퍼레이터 사용
int a[5];
int main(){
  //ASC(오름차순)
  sort(a, a + 5);
  sort(a, a + 5, less<int>());

  //DESC(내림차순)
  sort(a, a + 5, greater<int>());
  return 0;
}
```
