#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>

using namespace std;

struct Point {
    int x, y;
};

class SnakeGame {
private:
    vector<Point> snake;
    Point food;
    int width, height;
    char direction;
    bool gameOver;

public:
    SnakeGame(int w, int h) : width(w), height(h), direction('d'), gameOver(false) {
        snake.push_back({width / 2, height / 2});
        generateFood();
    }

    void generateFood() {
        do {
            food.x = rand() % (width - 2) + 1;
            food.y = rand() % (height - 2) + 1;
        } while (isFoodOnSnake());
    }

    bool isFoodOnSnake() {
        for (auto &p : snake) {
            if (p.x == food.x && p.y == food.y)
                return true;
        }
        return false;
    }

    void draw() {
        system("cls");
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    cout << "#";
                } else if (i == food.y && j == food.x) {
                    cout << "X";
                } else {
                    bool printed = false;
                    for (auto &p : snake) {
                        if (p.x == j && p.y == i) {
                            cout << "O";
                            printed = true;
                            break;
                        }
                    }
                    if (!printed) cout << " ";
                }
            }
            cout << endl;
        }
    }

    void input() {
        if (_kbhit()) {
            char ch = _getch();
            if (ch == 'w' && direction != 's') direction = 'w';
            else if (ch == 's' && direction != 'w') direction = 's';
            else if (ch == 'a' && direction != 'd') direction = 'a';
            else if (ch == 'd' && direction != 'a') direction = 'd';
        }
    }

    void logic() {
        Point newHead = snake.front();
        if (direction == 'w') newHead.y--;
        else if (direction == 's') newHead.y++;
        else if (direction == 'a') newHead.x--;
        else if (direction == 'd') newHead.x++;

        if (newHead.x == 0 || newHead.x == width - 1 || newHead.y == 0 || newHead.y == height - 1) {
            gameOver = true;
            return;
        }

        for (auto &p : snake) {
            if (p.x == newHead.x && p.y == newHead.y) {
                gameOver = true;
                return;
            }
        }

        snake.insert(snake.begin(), newHead);
        if (newHead.x == food.x && newHead.y == food.y) {
            generateFood();
        } else {
            snake.pop_back();
        }
    }

    bool isGameOver() { return gameOver; }
};

int main() {
    SnakeGame game(30, 15);
    while (!game.isGameOver()) {
        game.draw();
        game.input();
        game.logic();
        Sleep(100);
    }
    
    cout << "Game Over!\n";
    return 0;
}
