#include "raylib.h"
#include <deque>

using namespace std;

struct Segment {
    int x;
    int y;
};

int main() {
    const int cellSize = 25;
    const int cols = 20;
    const int rows = 20;
    const int screenWidth = cols * cellSize;
    const int screenHeight = rows * cellSize;

    InitWindow(screenWidth, screenHeight, "Snake Game");
    SetTargetFPS(10);

    // งูเริ่มต้น
    deque<Segment> snake;
    snake.push_back({10, 10});

    // ทิศทางเริ่มต้น
    int dx = 1;
    int dy = 0;

    // อาหาร
    Segment food = {5, 5};

    bool gameOver = false;

    while (!WindowShouldClose()) {
        // ===== Input =====
        if (IsKeyPressed(KEY_UP) && dy != 1) {
            dx = 0;
            dy = -1;
        }
        if (IsKeyPressed(KEY_DOWN) && dy != -1) {
            dx = 0;
            dy = 1;
        }
        if (IsKeyPressed(KEY_LEFT) && dx != 1) {
            dx = -1;
            dy = 0;
        }
        if (IsKeyPressed(KEY_RIGHT) && dx != -1) {
            dx = 1;
            dy = 0;
        }

        if (!gameOver) {
            // ===== คำนวณตำแหน่งหัวใหม่ =====
            Segment head = snake.front();
            head.x += dx;
            head.y += dy;

            // ===== ชนกำแพง =====
            if (head.x < 0 || head.x >= cols ||
                head.y < 0 || head.y >= rows) {
                gameOver = true;
            }

            // ===== ชนตัวเอง =====
            for (Segment s : snake) {
                if (head.x == s.x && head.y == s.y) {
                    gameOver = true;
                }
            }

            if (!gameOver) {
                // เพิ่มหัวใหม่
                snake.push_front(head);

                // ===== กินอาหาร =====
                if (head.x == food.x && head.y == food.y) {
                    food.x = GetRandomValue(0, cols - 1);
                    food.y = GetRandomValue(0, rows - 1);
                } else {
                    // ไม่กินอาหาร ตัดหางออก
                    snake.pop_back();
                }
            }
        }

        // ===== วาดภาพ =====
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // วาดอาหาร
        DrawRectangle(food.x * cellSize,
                      food.y * cellSize,
                      cellSize,
                      cellSize,
                      RED);

        // วาดงู
        for (Segment s : snake) {
            DrawRectangle(s.x * cellSize,
                          s.y * cellSize,
                          cellSize,
                          cellSize,
                          GREEN);
        }

        // แสดงคะแนน
        DrawText(TextFormat("Score: %i", (int)snake.size() - 1),
                 10, 10, 20, BLACK);

        // Game Over
        if (gameOver) {
            DrawText("GAME OVER",
                     screenWidth / 2 - 80,
                     screenHeight / 2,
                     30,
                     BLACK);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}