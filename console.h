#pragma once

#include <iostream>
#include <Windows.h>
#include "types.h"

// 콘솔창과 관련된 기본적인 함수들을 담고 있는 namespace 입니다.
// 콘솔창은 세로가 가로보다 2 배 정도 더 길다는 것 참고해주세요. (가로 5, 세로 5인 사각형이 정사각형이 아님)
namespace Console
{
	class Window
	{
	private:
		int Width = 80;
		int Height = 25;
		string Title = "ConsoleProgram";
	public:
		// 생성자 : 콘솔창을 초기화합니다.
		Window();
		Window(int width, int height, string title);
		// 콘솔창의 가로 길이를 가져옵니다.
		int GetWidth();
		// 콘솔창의 세로 길이를 가져옵니다.
		int GetHeight();
		// 콘솔창의 크기를 지정합니다.
		void SetSize(int Width, int Height);
		// 콘솔창의 제목을 가져옵니다.
		string GetTitle();
		// 콘솔창의 제목을 지정합니다.
		void SetTitle(string title);
		// 커서의 최대 가동 가로 범위를 가져옵니다.
		int GetMaxX();
		// 커서의 최대 가동 세로 범위를 가져옵니다.
		int GetMaxY();
	};
	// 화면의 모든 요소를 지웁니다.
	void Clear();

	// 커서를 가리거나 보입니다.
	void SetCursor(int size, bool visible);

	// 지정된 x, y 좌표로 커서 좌표가 바뀝니다.
	void MoveTo(int posX, int posY);

	// 지정된 x, y 값만큼 현재 커서 좌표에서 이동합니다.
	void Move(int deltaX, int deltaY);
}
