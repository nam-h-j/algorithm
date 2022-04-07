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

#### 6. set

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

#### 7. multiset

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

#### 8. stack

- LIFO(Last in First Out)
- 문자열 폭발, 아름다운 괄호만들기, 짝찾기 등에 쓰면 됨
- 교차하지 않고 라는 문장이 문제에 나오면 고려해볼 만한 자료구조

#### 9. queue

-

#### 10. deque

#### 11. struct(구조체)
