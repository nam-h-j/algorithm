# C++ 코딩 테스트를 위한 C++ 기초

## C++ 자료구조의 복잡도

- 자주 쓰는 자료 구조의 시간 복잡도
- 평균과 최악의 시간 복잡도를 고려하면서 작성

### 자주 사용하는 자료구조의 시간복잡도

| 자료구조                             | 접근                             | 탐색                             | 삽입                             | 삭제                             |
| ------------------------------------ | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- |
| Array, 배열                          | 평균: O(1) <br> 최악: O(1)       | 평균: O(n) <br> 최악: O(n)       | 평균: O(n) <br> 최악: O(n)       | 평균: O(n) <br> 최악: O(n)       |
| Stack, 스택                          | 평균: O(n) <br> 최악: O(n)       | 평균: O(n) <br> 최악: O(n)       | 평균: O(1) <br> 최악: O(1)       | 평균: O(1) <br> 최악: O(1)       |
| Queue, 큐                            | 평균: O(n) <br> 최악: O(n)       | 평균: O(n) <br> 최악: O(n)       | 평균: O(1) <br> 최악: O(1)       | 평균: O(1) <br> 최악: O(1)       |
| Doubly linked list, 이중 연결 리스트 | 평균: O(n) <br> 최악: O(n)       | 평균: O(n) <br> 최악: O(n)       | 평균: O(1) <br> 최악: O(1)       | 평균: O(1) <br> 최악: O(1)       |
| hash table, 해시 테이블              | 평균: O(1) <br> 최악: O(n)       | 평균: O(1) <br> 최악: O(n)       | 평균: O(1) <br> 최악: O(n)       | 평균: O(1) <br> 최악: O(n)       |
| BST, 이진 탐색 트리                  | 평균: O(logn) <br> 최악: O(n)    | 평균: O(logn) <br> 최악: O(n)    | 평균: O(logn) <br> 최악: O(n)    | 평균: O(logn) <br> 최악: O(n)    |
| AVL tree, AVL 트리                   | 평균: O(logn) <br> 최악: O(logn) | 평균: O(logn) <br> 최악: O(logn) | 평균: O(logn) <br> 최악: O(logn) | 평균: O(logn) <br> 최악: O(logn) |
| Red-Black Tree, 레드블랙트리         | 평균: O(logn) <br> 최악: O(logn) | 평균: O(logn) <br> 최악: O(logn) | 평균: O(logn) <br> 최악: O(logn) | 평균: O(logn) <br> 최악: O(logn) |
