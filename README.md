# 딱 기억해 바보야 

https://modoocode.com/225

```
.
├── 데이터
│   ├── 값
│   │   └── 정수의 범위
│   └─- 주소
│
├── 입출력
│
├── Vector
│   ├── Vector Iterator
│   └── Vector Container
│
├── Map
│   └── Map Container
│
├── Algorithm
│   ├─- 
│   └── 
│
└── ETC...
```

### 시간복잡도(O)
- O(1) 0차 : i = n / 2; 
- O(n) 1차 : for i <- 1 to n
- O(n^2) 2차 : for i <- 1 to n {for j <- 1 to n}
- O(n^3) 3ck : for i <- 1 to n {for j <- 1 to n {for k <- 1 to n}}


### 정수범위
- uint8_t  : 0 ~ 255                        (char)
- uint16_t : 0 ~ 65,535                     (short)
- uint32_t : 0 ~ 4,294,967,295              (long) **int**
- uint64_t : 0 ~ 18,446,744,073,709,551,615 (long long) **pointer**

### 입출력
##### [라인 입력]
``` c
string line;
getline(cin, line);
for (char c : line){
    cout << c << endl;
}

// 입력버퍼의 내용제거 
cin.ignore();
```
- \n : 줄바꿈
- %o : 8진수
- %d : 10진수
- %x : 16진수
- %u : unsigned 10진수
- %zu : size
- %p: 포인터의 주소

### Vector
#### Vector Interator
- 선언 : vector<data type>::iterator iter
- 초기화 : iter = v.begin();
- 접근 : iter[idx]
- 연산 : iter++, *iter
##### [순방향 접근]
``` c
for (iter = v.begin(); iter != v.end(); iter++){
    cout << *iter << endl;
}
```

#### Vector Container
- 선언 : vector<data type> v
- +2차원 : vector<vector<int>> v(m); // m길이의 vector *추가 study 필요
- v.at(idx);      // idx 참조 (범위 점검 o = 안전)
```
    try {
        cout << v.at(idx);
    }
    catch (out_of_range& e){
        continue;
    }
```
- v[idx];         // idx 참조 (범위 점검 x = 빠름)
- v.front()       // 처음 원소
- v.back()        // 마지막 원소
- v.begin()       // 처음 원소 (iterator)
- v.end()         // 마지막 원소 (iterator)
- v.size()        // 원소의 갯수
- v.capadity()    // 할당된 공간의 크기
- v2.swap(v1)     // v1과 v2의 capacity를 교환, vector<int>().swap(v1)
- v.insert(x,y)   // x번째 위치에 y 삽입 (interator 반환)
- v.erase(iter)   // iter가 가리키는 원소를 제거, size만 줄어들고 capacity는 남음
- v.empty()       // size가 0이면 true 반환

### Map
#### Map Container
- 선언 : map<key, value> m;
- 삽입 : m.insert({key, value});
- 삭제 : m.erase(key); m.clear();
- *정렬 : map<key, value, greater<type>> m;

#### Unorded Map
- 선언 : unordered_map<key, value> um;

##### Search
- m[key]; // key로 Value찾기
- m.find(key); // key로 iterator찾기
``` c
// Tip 
map<string, int> m;
string mapping[100001];

for(int i = 0; i < 100001; i++){
    cin >> input;

    map.insert({input, i});
    mapping[i] = input;
}
/*
입력시
A:0    ----    arr[0] = A
C:1    ----    arr[1] = C
D:2    ----    arr[2] = D   
B:3    ----    arr[3] = B
*/

//Key로 찾기
cout << m[key];
//Value로 찾기
cout << mapping[value];

```

### STL Algorithm
#### 압축
- unique : 중복 정리
``` c
unique(v.begin(), v.end()); // 1 2 2 3 4 -> 1 2 3 4 2
//원본유지 영역의 첫 주소 값을 반환
v.erase(unique(v.begin(), v.end()), v.end()); // 지우기
```

#### 정렬
- sort : 일반 정렬
``` c
sort(v.begin(), v.end()); // 순차정렬

// Custom
struct int_compare {
    bool operator()(const int&a, const int&b) const {return a > b;}
}; // int 전용
sort(v.begin(), v.end(), int_compare()); // 역순정렬

template <typename T>
struct greater_compare {
    bool operator()(const T& a, const T& b) const { return a > b; }
}; // 타입 공용
sort(v.begin(), v.end(), greater_compare()); // 역순정렬

// Osusume
#include <functional>
sort(vec.begin(), vec.end(), less<int>()); // 순차정렬
sort(vec.begin(), vec.end(), greater<int>()); // 역순정렬

```
- stable_sort : 크기가 같은 원소의 순서 보존
- partial_sort : 일부분만 정렬


---
### 부적 
``` c
ios::sync_with_stdio(false); cin.tie(NULL);
cin.exceptions(ios::badbit | ios::failbit);
```
#### cin cout 속도 향상 (endl 사용 금지)
``` c
cout << '\n';
```
