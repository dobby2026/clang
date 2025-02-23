/*
파일명: ex99-game.c
*/
#include <stdio.h>     // 표준 입력 및 출력 함수 라이브러리를 포함
#include <conio.h>     // conio.h 라이브러리를 포함 (키 입력을 처리하기 위해)
#include <windows.h>   // Windows API 라이브러리를 포함 (화면 지우기를 위해)

#define WIDTH 40        // 게임 화면의 너비를 정의
#define HEIGHT 20       // 게임 화면의 높이를 정의

int ballX, ballY;         // 공의 현재 위치 좌표
int ballDirX, ballDirY;   // 공의 이동 방향 (X 및 Y 축)
int prevBallX, prevBallY; // 공의 이전 위치를 저장하는 변수
int paddleX, paddleY;     // 패들의 현재 위치 좌표
int prevPaddleX, prevPaddleY; // 패들의 이전 위치를 저장하는 변수
int paddleLength;         // 패들의 길이
int gameOver;             // 게임 오버 여부를 나타내는 변수

char screen[HEIGHT][WIDTH]; // 게임 화면을 나타내는 2D 배열

// 게임 초기화 함수
void initGame() {
    ballX = WIDTH / 2;        // 공의 초기 X 좌표를 설정
    ballY = HEIGHT / 2;       // 공의 초기 Y 좌표를 설정
    ballDirX = 1;             // 공의 초기 X 축 이동 방향을 설정
    ballDirY = -1;            // 공의 초기 Y 축 이동 방향을 설정
    prevBallX = ballX;        // 이전 공 위치 초기화
    prevBallY = ballY;
    paddleX = WIDTH / 2 - 3;  // 패들의 초기 X 좌표를 설정
    paddleY = HEIGHT - 2;     // 패들의 초기 Y 좌표를 설정
    prevPaddleX = paddleX;    // 이전 패들 위치 초기화
    prevPaddleY = paddleY;
    paddleLength = 6;         // 패들의 길이를 설정
    gameOver = 0;             // 게임 오버 여부 초기화

    // 게임 화면을 공백으로 초기화
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            screen[y][x] = ' ';
        }
    }
}

// 게임 화면 그리기 함수
void drawGame() {
    system("cls"); // 화면을 지우고 새로 그림

    // 게임 화면을 순회하며 각 위치에 해당하는 문자 출력
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (y == prevBallY && x == prevBallX) {
                screen[y][x] = ' '; // 이전 공 위치 지우기
            }
            if (y == prevPaddleY && x >= prevPaddleX && x < prevPaddleX + paddleLength) {
                screen[y][x] = ' '; // 이전 패들 위치 지우기
            }

            if (y == ballY && x == ballX) {
                screen[y][x] = 'O'; // 새 공 그리기
            } else if (y == paddleY && x >= paddleX && x < paddleX + paddleLength) {
                screen[y][x] = '#'; // 새 패들 그리기
            }
        }
    }

    // 게임 상단에 공의 현재 좌표값 표시
    printf("Ball: X=%d, Y=%d\n", ballX, ballY);

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            printf("%c", screen[y][x]);
        }
        printf("\n");
    }

    printf("Press 'Q' to quit\n");
}

// 게임 상태 업데이트 함수
void updateGame() {
    prevBallX = ballX; // 현재 공 위치를 이전 위치로 저장
    prevBallY = ballY;
    prevPaddleX = paddleX; // 현재 패들 위치를 이전 위치로 저장
    prevPaddleY = paddleY;

    ballX += ballDirX; // 공을 현재 방향으로 이동
    ballY += ballDirY;

    // 공이 좌우 경계에 닿으면 방향을 바꿈
    if (ballX == 0 || ballX == WIDTH - 1) {
        ballDirX = -ballDirX;
    }

    // 공이 상단 벽에 닿으면 방향을 바꿈
    if (ballY == 0) {
        ballDirY = -ballDirY;
    }

    // 공이 패들과 충돌하면 방향을 바꿈
    if (ballY == paddleY - 1 && ballX >= paddleX && ballX < paddleX + paddleLength) {
        ballDirY = -ballDirY;
    }

    // 공이 화면 하단에 닿으면 게임 종료
    if (ballY == HEIGHT - 1) {
        gameOver = 1;
    }

    // 키 입력을 체크하여 패들의 위치를 업데이트
    if (_kbhit()) {
        char key = _getch();
        if (key == 'a' && paddleX > 0) {
            paddleX--;
        }
        if (key == 'd' && paddleX < WIDTH - paddleLength) {
            paddleX++;
        }
        if (key == 'q') {
            gameOver = 1;
        }
    }
}

// 메인 함수
int main() {
    initGame(); // 게임 초기화 함수 호출

    while (!gameOver) { // 게임이 종료되지 않을 동안 반복
        drawGame();   // 게임 화면 그리기 함수 호출
        updateGame(); // 게임 상태 업데이트 함수 호출
        Sleep(50);    // 일정 시간 동안 대기
    }

    printf("Game over!\n"); // 게임 종료 메시지 출력
    return 0; // 프로그램 종료
}