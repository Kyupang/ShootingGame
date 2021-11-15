#include "console.h"

Console::Window::Window()
{
	system(("mode con cols=" + std::to_string(Width) + " lines=" + std::to_string(Height)).c_str());
	system(("title " + Title).c_str());
}
Console::Window::Window(int width, int height, string title)
{
	system(("mode con cols=" + std::to_string(width) + " lines=" + std::to_string(height)).c_str());
	system(("title " + title).c_str());
	Width = width;
	Height = height;
	Title = title;
}
int Console::Window::GetWidth()
{
	return Width;
}
int Console::Window::GetHeight()
{
	return Height;
}
void Console::Window::SetSize(int width, int height)
{
	system(("mode con cols=" + std::to_string(width) + " lines=" + std::to_string(height)).c_str());
	Width = width;
	Height = height;
}
string Console::Window::GetTitle()
{
	return Title;
}
void Console::Window::SetTitle(string title)
{
	system(("title " + title).c_str());
}
int Console::Window::GetMaxX()
{
	return Width - 1;
}
int Console::Window::GetMaxY()
{
	return Height - 1;
}
void Console::Clear()
{
	system("cls");
}
void Console::SetCursor(int size = 1, bool visible = true)
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = size;
	cursorInfo.bVisible = visible;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void Console::MoveTo(int posX, int posY)
{
	COORD pos = { posX, posY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void Console::Move(int deltaX, int deltaY)
{
	POINT pos{};
	GetCursorPos(&pos);

	COORD newPos = { pos.x + deltaX, pos.y + deltaY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), newPos);
}
