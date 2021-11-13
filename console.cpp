#include "console.h"

int Width = 80;
int Height = 25;

void Console::SetSize(const int width, const int height)
{
	system(("mode con cols=" + std::to_string(width) + " lines=" + std::to_string(height)).c_str());
	Width = width;
	Height = height;
}
void Console::SetTitle(const string title)
{
	system(("title " + title).c_str());
}
void Console::Clear()
{
	system("cls");
}
void Console::MoveCursorTo(int posX, int posY)
{
	COORD pos = { posX, posY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void Console::MoveCursor(int deltaX, int deltaY)
{
	POINT pos{};
	GetCursorPos(&pos);

	COORD newPos = { pos.x + deltaX, pos.y + deltaY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), newPos);
}
int Console::GetMaxX()
{
	return Width - 1;
}
int Console::GetMaxY()
{
	return Height - 1;
}
