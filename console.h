#pragma once

#include <iostream>
#include <Windows.h>
#include "Utils.h"

// 콘솔창과 관련된 기본적인 함수들을 담고 있는 namespace 입니다.
// 콘솔창은 세로가 가로보다 2 배 정도 더 길다는 것 참고해주세요. (가로 5, 세로 5인 사각형이 정사각형이 아님)
namespace Console
{
	// 콘솔창의 크기를 지정합니다.
	void SetSize(const int width, const int height);

	// 콘솔창의 제목을 지정합니다.
	void SetTitle(const string title);

	// 화면의 모든 요소를 지웁니다.
	void Clear();

	// 지정된 x, y 좌표로 커서 좌표가 바뀝니다.
	void MoveCursorTo(int posX, int posY);

	// 지정된 x, y 값만큼 현재 커서 좌표에서 이동합니다.
	void MoveCursor(int deltaX, int deltaY);

	// 커서의 최대 가동 가로 범위를 가져옵니다.
	int GetMaxX();

	// 커서의 최대 가동 세로 범위를 가져옵니다.
	int GetMaxY();
}
