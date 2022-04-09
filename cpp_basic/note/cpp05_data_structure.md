# C++ 코딩 테스트를 위한 C++ 기초

## C++ 자료구조

### 형변환(casting)

- [1. Pair, Tuple](#1-pair-tuple)
- [2. Vector](#2-vector)
- [3. Array](#3-array)
- [4. 2차원 배열](#4-2차원-배열)
- [5. Map](#5-map)
- [6. Set](#6-set)
- [7. Multiset](#7-multiset)
- [8. Stack](#8-stack)
- [9. Queue](#9-queue)
- [10. Deque](#10-deque)
- [11. Struct](#11-struct구조체)

#### 1. Pair, Tuple

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

#### 2. Vector

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

#### 3. Array

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

#### 4. 2차원 배열

- 기존 배열에서 차원을 하나 늘린다.
- 첫번째 차원에서 탐색하고 2번째 차원순으로 탐색하는 것이 좋다.
- C++에서 캐시를 첫번째 차원을 기준으로 하기 때문에 캐시 효율을 위해서 순서대로 탐색하는 것이 유리하다.

```c++
using namespace std;
const int mxy = 3;
const int mxx = 4;
int a[mxy][mxx];
int main(){
  for(int i = 0; i < mxy; i++){
    for(int j = 0; j < mxx; j++){
      a[i][j] = (i + j);
    }
  }
  //good
  for(int i = 0; i < mxy; i++){
    for(int j = 0; j < mxx; j++){
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
  //bad
  for(int i = 0; i < mxx; i++){
    for(int j = 0; j < mxy; j++){
      cout << a[j][i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
```

#### 5. Map

- Key, Value 형태의 자료구조
- 레드-블랙트리 구조
- 정렬된 위치에 삽입
- "map<string, int>"로 선언
- clear, size, erase 사용가능
- map과 unordered_map 두종류가 있다.
  - map
    - 정렬 됨
    - 레드블랙트리 기반
    - 탐색, 삽입, 삭제에 O(logN)이 걸림
  - unordered_map
    - 정렬 안됨
    - 해시테이블 기반
    - 탐색, 삽입, 삭제에 O(1), 최악의 경우 O(N)이 걸림
  - 되도록이면 map을 사용하는 것이 좋다. unordered_map의 경우 O(N)이 걸릴 수가 있기 때문에 시간 초과가 날 수가 있음.

```c++
//map.cpp
#include <bits/stdc++.h>
using namespace std;
int v[10];
int main(){
    //선언
    map<string, int> _map;
    unordered_map<string, int> umap;

    //할당1
    _map.insert({"test1", 1});
    umap.insert({"test1", 11});
    //할당2
    _map.emplace("test2", 2);
    umap.emplace("test2", 22);
    //할당3 및 수정
    _map["test3"] = 3;
    _map["test2"] = 2*2;
    umap["test3"] = 33;
    umap["test2"] = 22*2;

    //출력 : first = key, second = val
    cout << "print '_map' : " << "\n";
    for(auto elem : _map){
        cout << elem.first << " :: " << elem.second << '\n';
    }
    cout << "\n";

    //출력
    cout << "print 'umap' : " << "\n";
    for(auto elem : umap){
        cout << elem.first << " :: " << elem.second << '\n';
    }
    cout << "\n";

    //find
    //find는 찾지 못하면 end()이터레이터를 반환
    cout << "umap.find('test4') : " << "\n";
    auto search = umap.find("test4");
    if(search != umap.end()){
        cout << "found :" << search -> first << " " << (*search).second << '\n';
    }else{
        cout << "not found.." << '\n';
    }
    cout << "\n";

    //int형의 증감연산
    cout << "umap['test1']++ : " << "\n";
    umap["test1"]++;
    cout << umap["test1"] << "\n";
    cout << "\n";

    //size
    cout << "umap.size()" << "\n";
    cout <<umap.size() <<"\n";
    cout << "\n";

    //erase
    cout << "umap.erase('test1');" << "\n";
    umap.erase("test1");
    for(auto elem : umap){
        cout << elem.first << " :: " << elem.second << '\n';
    }
    cout << "\n";
return 0;
}
```

#### 6. Set

- 중복 값 허용 안함
- 나머지는 map과 유사함

```c++
//set.cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<pair<string,int>> _set;
    //할당
    cout << "할당" << "\n";
    _set.insert({"test1",1});
    _set.insert({"test2",2});
    _set.insert({"test3",3});
    for(pair<string, int> elem : _set) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";

    //중복값 넣기
    cout << "중복값 넣기" << "\n";
    _set.insert({"test2",2});
    for(pair<string, int> elem : _set) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";
}
```

#### 7. Multiset

- 중복된 원소도 넣을 수 있는 자료 구조
- 값만 넣으면 자동적으로 정렬되는 편리한 자료구조
- erase, find, insert가 가능.

```c++
//multiset.cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<pair<string,int>> _ms;
    //할당, 무작위로 넣어도 정렬이 됨
    cout << "할당" << "\n";
    _ms.insert({"test5",5});
    _ms.insert({"test2",2});
    _ms.insert({"test4",4});
    _ms.insert({"test1",1});
    _ms.insert({"test3",3});
    for(pair<string, int> elem : _ms) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";

    //find, erase
    cout << "find, erase" << "\n";
    auto test1 = _ms.find({"test1", 1});
    _ms.erase(test1);
    for(pair<string, int> elem : _ms) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";
}
```

#### 8. Stack

- LIFO(Last in First Out)
- 문자열 폭발, 아름다운 괄호만들기, 짝찾기 등에 쓰면 됨
- 교차하지 않고 라는 문장이 문제에 나오면 고려해볼 만한 자료구조

```c++
#include <bits/stdc++.h>
using namespace std;
stack<string> stk;
int main(){
    cout << "push stack to 'STACK'" << "\n";
    stk.push("S");
    stk.push("T");
    stk.push("A");
    stk.push("C");
    stk.push("K");
    int strLen = stk.size();
    for (int i = 1; i <= strLen; i++){
        cout << stk.top() <<"";
        stk.pop();
    }
    cout<<"\n";
}
```

#### 9. Queue

- FIFO(First In First Out)
- BFS에서 주로 사용함

```c++
#include <bits/stdc++.h>
using namespace std;
queue<string> q;
int main(){
    cout << "push queue to 'QUEUE'" << "\n";
    q.push("Q");
    q.push("U");
    q.push("E");
    q.push("U");
    q.push("E");
    int strLen = q.size();
    for (int i = 1; i <= strLen; i++){
        cout << q.front() <<"";
        q.pop();
    }
    cout<<"\n";
}
```

#### 10. Deque

- queue 는 앞에서만 꺼낼수 있지만 deque는 앞뒤로 참조가 가능하다.

```c++
#include <bits/stdc++.h>
using namespace std;
deque<string> dq;
int dqLen;
int main(){
    cout << "push_back deque to 'DEQUE' pop_front" << "\n";
    dq.push_back("D");
    dq.push_back("E");
    dq.push_back("Q");
    dq.push_back("U");
    dq.push_back("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_front();
    }
    cout<<"\n";
    cout<<"\n";

    cout << "push_front deque to 'DEQUE' pop_front" << "\n";
    dq.push_front("D");
    dq.push_front("E");
    dq.push_front("Q");
    dq.push_front("U");
    dq.push_front("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_front();
    }
    cout<<"\n";
    cout<<"\n";

    cout << "push_back deque to 'DEQUE' pop_back" << "\n";
    dq.push_back("D");
    dq.push_back("E");
    dq.push_back("Q");
    dq.push_back("U");
    dq.push_back("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_back();
    }
    cout<<"\n";
    cout<<"\n";

    cout << "push_front deque to 'DEQUE' pop_back" << "\n";
    dq.push_front("D");
    dq.push_front("E");
    dq.push_front("Q");
    dq.push_front("U");
    dq.push_front("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_back();
    }
    cout<<"\n";
}
```

#### 11. Struct(구조체)

- C++에서는 구조체 생성에 class와 struct를 쓰는데, 코딩테스트에서는 구조체를 자주 사용한다.
- 구조체 생성자
  - 구조체 생성자를 따로 선언하지 않을 경우 구조체 생성을 위한 임시변수선언 -> 자료구조에 맞게 값 할당 의 과정을 거치는 번거로움이 필요하다.
  - 구조체 생성자를 사용하면 위의 과정 없이 생성이 가능해진다.

```c++
//1. 구조체 생성자를 따로 선언하지 않고 사용하는 경우
#include <bits/stdc++.h>
using namespace std;
//구조체 선언
typedef struct S{
    int x, y, z;
};

int main()
{
    vector<S> v;

    // **** Example 1 ****
    // 구조체 객체 생성
    S struct_var;

    // 구조체 변수 값 대입
    struct_var.x = 1;
    struct_var.y = 3;
    struct_var.z = 5;

    // vector에 push
    v.push_back(struct_var);


    // **** Example 2 ****
    // 구조체 객체 생성 및 변수 값 대입
    S struct_var2 = {10, 30, 50};

    // vector에 push
    v.push_back(struct_var2);


    cout << "v[0] : " <<  v[0].x << " " << v[0].y << " " << v[0].z << endl;
    cout << "v[1] : " <<  v[1].x << " " << v[1].y << " " << v[1].z << endl;
    // v[0] : 1 3 5
    // v[1] : 10 30 50
}
```

```c++
//2. 구조체 생성자를 사용하는 경우
#include <bits/stdc++.h>
using namespace std;

//구조체 선언 밎 구조체 생성자 정의
typedef struct S{
    int x, y, z;
    S(int X, int Y, int Z) : x(X), y(Y), z(Z) {}
};

int main()
{
    vector<S> v;

    // 구조체 값 대입 및 vector에 push
    v.push_back(S(1,3,5));
    v.push_back(S(10,30,50));

    cout << "v[0] : " <<  v[0].x << " " << v[0].y << " " << v[0].z << endl;
    cout << "v[1] : " <<  v[1].x << " " << v[1].y << " " << v[1].z << endl;
    // v[0] : 1 3 5
    // v[1] : 10 30 50
}
}
```

- 구조체 생성자의 오버로딩
  - 구조체 생성자도 다른 함수들과 같이 오버로딩이 적용된다.
  - 상황에 따라 초기화를 하고 싶다면 아래와 같이 작성할 수 있다.

```c++

#include <bits/stdc++.h>
using namespace std;
typedef struct S{
    int x, y, z;

    // Overloading
    S() { x = 100; y = 300; z = 500; }
    S(int X, int Y, int Z) : x(X), y(Y), z(Z) {}
};

int main()
{
    vector<S> v;

    v.push_back(S(1,3,5));
    v.push_back(S(10,30,50));
    v.push_back(S());

    cout << "v[0] : " << v[0].x << " " << v[0].y << " " << v[0].z << endl;
    cout << "v[1] : " << v[1].x << " " << v[1].y << " " << v[1].z << endl;
    cout << "v[2] : " << v[2].x << " " << v[2].y << " " << v[2].z << endl;
    // v[0] : 1 3 5
    // v[1] : 10 30 50
    // v[2] : 100 300 500

```

- C++에서 커스텀한 무언가를 진행하고 싶다면 구조체를 통해서 하면 된다.
- 커스텀한 정렬이 필요하면 구조체를 사용하는것이 좋다.
- 커스텀한 정렬의 예 : x를 1순위로 오름차순, y을 2순위로 내림차순 등

```c++
//정렬이 필요한 경우
struct Point{
  int y, x;
  Point(int y, int x) : y(y), x(x){}
  Point(){y = -1; x = -1; }
  bool operator < (const Point & a) const{
    if(x == a.x) return y < a.y;
    return x < a.x;
  }
};
```

#### 12. Priority Queue
