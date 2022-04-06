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
#include <bits/stdc++.h>
using namespace std;
bool compair(int a, int b){
    return a > b;
}
int main(){
    int arr[10] = {0,1,9,2,8,3,7,4,6,5};
    sort(arr, arr+11, compair);
    return 0;
}
```

2. vector

- 동적 요소 할당
- 연속된 메모리 공간, 힙 메모리에 할당
- 런타임 단계에서 크기가 결정됨
- push_back : 뒤에 요소를 추가
- pop_back : 뒤 요소를 지움
- erase : 내용 지움
- find : 요소 탐색(algorithm에서 제공하는 함수)
- clear : 초기화
- emplase_back : push_back과 같은데 조금 더 처리가 빠름

```c++
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    cout << "push_back : " << "\n";
    for(int i = 1; i <= 10; i++)v.push_back(i);
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "pop_back : " << "\n";
    v.pop_back();
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "erase(v.begin(), v.begin()+1) : " << "\n";
    v.erase(v.begin(), v.begin()+1);
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "find(v.begin(), v.end(), 100) : " << "\n";
    auto a = find(v.begin(), v.end(), 100);
    if(a == v.end()) cout << "not found" << "\n";
    cout << "\n";
    cout << "\n";

    cout << "fill(v.begin(), v.end(), 45) : " << "\n";
    fill(v.begin(), v.end(), 45);
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "v.clear() : " << "\n";
    v.clear();
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    return 0;
}
```

3. Array

- 정적배열
- 연속된 메모리 공간, 스택에 할당
- 컴파일 단계에서 크기 결정
- c스타일과 std스타일이 있음
- c스타일 : int arr[10]
- std스타일 : array<int, 10> arr;
- vertor에 비해 사용할 수 있는 메서드가 많이 없음
- fill, memset

  - fill또는 memset으로 초기화 할 수 있다.

- memcpy
  - 어떤 변수의 메모리에 있는 값들을 다른 변수의 "특정 메모리 값"으로 복사할 때 사용
  - 주로 배열 복사할 때 사용

```c++
#include <bits/stdc++.h>
using namespace std;
int arr[10];
int main(){
    cout << "for(int i = i; i<=10; i++) = arr : 값을 할당" << "\n";
    for(int i = 1; i<=10; i++)arr[i-1] = i;
    for(int arrItem : arr) cout << arrItem << " ";
    cout << "\n";
    cout << "\n";

    cout << "find(arr, arr + 10, 100)" << "\n";
    auto a = find(arr, arr + 10, 100);
    if(a == arr+10) cout << "not found" << "\n";
    cout << "\n";
    cout << "\n";

    cout << "fill(arr, arr+10, 4514)" << "\n";
    fill(arr, arr+10, 4514);
    for(int arrItem : arr) cout << arrItem << " ";
    cout << "\n";
    cout << "\n";

    cout << "memcpy(temp, arr, sizeof(arr));" << "\n";
    int temp[10];
    memcpy(temp, arr, sizeof(arr));
    for(int tempItem : temp) cout << tempItem << " ";
    cout << "\n";
    cout << "\n";
}
```

4. 2차원 배열
5. map
6. set
7. multiset
8. stack
9. queue
10. deque
11. struct(구조체)
