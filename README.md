# CppNet2
.NET Standard Implementation for C++17

CppNet2는 [CppNet](https://github.com/kmc7468/CppNet)의 후속작으로, .NET Standard의 네이티브 구현체입니다. .NET Standard를 있는 그대로 옮기면서도 C++의 실정에 맞게 일부 개선했습니다.

## 설치
1. include/CppNet2 디렉터리를 원하는 곳으로 복사(이동)하신 후 이 디렉토리를 컴파일러의 포함(Include) 디렉터리로 설정해 주세요.
2. CppNet2의 바이너리를 원하는 곳으로 복사(이동)하신 후 CppNet2.lib를 컴파일러의 링크(Link) 라이브러리로 설정해 주세요.

[이곳](https://github.com/kmc7468/CppNet2/releases)에서 최신 릴리즈의 바이너리(Windows용 바이너리만 제공됩니다.)를 설치하시거나 아래를 참고하시어 직접 바이너리를 컴파일 하실 수 있습니다.

## 컴파일
### 준비물
1. C++17을 제대로 지원하는 컴파일러 (테스트 된 컴파일러 목록은 아래에서 확인하실 수 있습니다.)
2. Git
3. CMake
4. Makefile (Visual Studio가 설치된 Windows 시스템에서는 필요하지 않습니다.)

### 소스 코드 복제
```
$ git clone -b stable https://github.com/kmc7468/CppNet2.git
```
위 명령어를 실행하면 가장 최신 버전의 안정화 버전의 소스 코드를 여러분의 시스템으로 복제하게 됩니다. 만약 비안정화 버전을 포함하여 가장 최신 버전의 소스 코드를 복제하고 싶다면 `-b stable`을 `-b unstable`로 수정하시면 됩니다. 만약 개발 버전의 소스 코드를 복제하고 싶다면 `-b stable`을 삭제하시면 됩니다.

### 솔루션/Makefile 생성
- 솔루션 생성:<br>
```
$ cd CppNet2
$ cmake -g "Visual Studio 버전" -DMAKE_SHARED=ON CMakeLists.txt
```
- Makefile 생성:<br>
```
$ cd CppNet2
$ cmake -DMAKE_SHARED=ON CMakeLists.txt
```
위 명령어들을 순서대로 실행하면 여러분이 솔루션/Makefile을 만들게 됩니다. 올바른 Visual Studio 버전 값은 아래에서 확인하실 수 있습니다. 만약 동적 라이브러리로 컴파일 하고 싶지 않다면 `-DMAKE_SHARED=ON`을 삭제하시면 됩니다.

### 컴파일
```
$ make
```
만약 솔루션/Makefile 생성 단계에서 솔루션을 만드셨다면 Visual Studio를 이용하셔서 컴파일 하시고, 그렇지 않다면 위 명령어를 실행하셔서 소스 코드를 컴파일 하면 됩니다.

## 테스트 된 컴파일러
컴파일러 | CMake 버전 값 | 비고
-|-|-
Microsoft Visual Studio 2019 | Visual Studio 16 2019 |
Microsoft Visual Studio 2017 | Visual Studio 15 2017 | 동적 라이브러리 빌드 불가

## 라이선스
```
MIT License

Copyright (c) 2019 kmc7468

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```