#include "SystemClass.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pScmdline, int iCmdshow)
{
	SystemClass* System;
	bool result;

	//System 객체 생성
	System = new SystemClass;
	if (!System)
	{
		return 0;
	}

	//System 객체를 초기화하고 Run 호출
	result = System->Initialize();
	//제대로 초기화되면
	if (result)
	{
		//Run
		System->Run();
	}

	//유저가 종료하여 Run 이 종료되면 Shutdown 하고 객체 삭제, 메모리 반환
	System->Shutdown();
	delete System;
	System = 0;

	return 0;
}