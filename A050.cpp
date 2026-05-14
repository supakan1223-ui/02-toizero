#include "raylib.h"

int main () {
    const int screenWidth = 850;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "apple eater game ");

    Texture2D PlayerTexture = LoadTexture("worm01.png");

    float posX = screenWidth / 2;
    float posY = screenHeight / 2;
    float speed = 5.0f;

    int score = 0;
    int AppleSize = 30; //คะแนนและแอปเปิ้ล

    float appleX = GetRandomValue(0, screenWidth - AppleSize);
    float appleY = GetRandomValue(0, screenHeight - AppleSize); //สุ่มตำแหน่งแรกของแอปเปิ้ล

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        if(IsKeyDown(KEY_W)) posY -= speed;
        if(IsKeyDown(KEY_A)) posX -= speed;
        if(IsKeyDown(KEY_S)) posY += speed;
        if(IsKeyDown(KEY_D)) posX += speed;

        if (posX < 0) posX = 0; //กันชนขอบจอซ้าย
        if (posY < 0) posY = 0; //กันชนขอบจอบน
        if (posX > screenWidth - PlayerTexture.width) posX = screenWidth - PlayerTexture.width; //กันชนขอบจอขวา
        if (posY > screenHeight - PlayerTexture.height) posY = screenHeight - PlayerTexture.height; //กันชนขอบจอล่าง

        //ระบบกินแอปเปิ้ล
        Rectangle playerBox = { posX, posY,(float)PlayerTexture.width,(float)PlayerTexture.height };
        Rectangle appleBox = { appleX, appleY, (float)AppleSize, (float)AppleSize };

        //ถ้ากล่องสองอันชนกัน = กิน

        if (CheckCollisionRecs(playerBox,appleBox)) {
            score += 10;

            //สุ่มตำแหน่งใหม่

            appleX = GetRandomValue(0, screenWidth - AppleSize);
            appleY = GetRandomValue(0, screenHeight - AppleSize);

            //การวาดผลลงจอ

            BeginDrawing();
                ClearBackground(BLACK);

                DrawRectangle(appleX, appleY, AppleSize, AppleSize, RED);

                DrawTexture(PlayerTexture, posX, posY, WHITE);

                DrawText(TextFormat("SCORE:%d",score), 20, 20, 30, GREEN);

            EndDrawing();

        }
    }

    UnloadTexture(PlayerTexture);
    CloseWindow();
    return 0;

}