# VSCode GCC 컴파일러 설정 가이드

## tasks.json 설정 방법

1. `.vscode` 폴더 안에 `tasks.json` 파일을 다음과 같이 설정합니다:

```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: gcc.exe build active file",
            "command": "C:\\msys64\\ucrt64\\bin\\gcc.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-save-temps",
                "-g",
                "${file}",
                "-o",
                "C:\\clang\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "C:\\clang\\"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "Task generated by Debugger."
        }
    ],
    "version": "2.0.0"
}
```

## 주요 설정 설명

- `command`: GCC 컴파일러의 경로를 지정
- `args`: 컴파일 옵션을 설정
  - `-fdiagnostics-color=always`: 컴파일러 메시지에 색상 표시
  - `-save-temps`: 컴파일 중간 파일 저장
  - `-g`: 디버깅 정보 포함
- `options.cwd`: 작업 디렉토리 설정
- `group.isDefault`: 기본 빌드 작업으로 설정

## 컴파일 중간 파일 안내

컴파일 과정에서 다음과 같은 중간 파일들이 생성됩니다:

- `.i` 파일: 전처리기 출력 파일
- `.s` 파일: 어셈블리 코드 파일
- `.o` 파일: 오브젝트 파일

이러한 중간 파일들은 컴파일 과정의 부산물로, 최종 실행 파일 생성 후에는 삭제하거나 무시해도 됩니다.

## 참고 사항

- `-save-temps` 옵션으로 인해 생성되는 중간 파일들은 컴파일 과정을 이해하는 데 도움이 될 수 있지만, 실제 프로그램 실행에는 영향을 미치지 않습니다.
- 중간 파일들은 디버깅이나 컴파일 과정 학습 목적으로 활용할 수 있습니다.
- 프로젝트를 깔끔하게 유지하고 싶다면, 이러한 중간 파일들을 `.gitignore`에 추가하거나 정기적으로 삭제하는 것을 권장합니다.
