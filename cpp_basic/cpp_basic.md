## C++ 코딩 테스트를 위한 C++ 기초

### C++로 코딩 테스트를 하면 좋은 점

- 속도에 이점이 있음(런타임이 빠름)
- STL(Standard Template Library)로 문제풀기 좋음
- 고수준의 해설코드 자료가 압도적으로 많다, 알고리즘 공부에 좋음

### C++ 설치(MAC)

1. gcc 컴파일러 설치

- gcc..란? GNU Compiler Colletion, 컴파일러 모음
  - 1987년 GNU 프로젝트의 컴파일로로 작성, (리처드 스톨만)
  - 1997년 공개, 1999년 릴리스
  - 시스템 자체 컴파일러 보다 이식성이 좋음
  - C(gcc), C++(g++), 오브젝티브C, 오브젝티브C++, 포트란(gfortran), 자바(gcj), 에이다(gnat), 고(gccgo) 등 지원
- brew install gcc

1. ##bits/stdc++.h 라이브러리 include

₩₩₩
// C++ includes used for precompiling -_- C++ -_-

// Copyright (C) 2003-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library. This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively. If not, see
// <http://www.gnu.org/licenses/>.

/\*\* @file stdc++.h

- This is an implementation file for a precompiled header.
  \*/

// 17.4.1.2 Headers

// C
#ifndef \_GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if \_\_cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if \_\_cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
₩₩₩
