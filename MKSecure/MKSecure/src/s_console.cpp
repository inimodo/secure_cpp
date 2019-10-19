#include "s_header.h"


BOOL __ST
cConsole::vLoadHandle()
{
	o_HwndOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	o_HwndInput = GetStdHandle(STD_INPUT_HANDLE);
	if (o_HwndOutput == NULL || o_HwndInput == NULL) {
		return FALSE;
	}
	return TRUE;
}
BOOL __ST
cConsole::vGetWinUser()
{
	return GetUserNameA(this->c_LUser, (LPDWORD)& this->c_LUser.s_Length);
}
BOOL __ST
cConsole::vGetWinDir()
{
	if (_getcwd(this->c_LDir, this->c_LDir.s_Length) == NULL) {
		return FALSE;
	}
	return TRUE;
}

BOOL __CC 
cConsole::vReadInput(cStr * c_Buffer,LPDWORD dw_pLength) 
{
	return ReadConsoleA(this->o_HwndInput,c_Buffer->c_pStr,c_Buffer->s_Length,dw_pLength,NULL);
}
BOOL __CC
cConsole::vSetTextColor(WORD w_Color) 
{
	return SetConsoleTextAttribute(this->o_HwndOutput, w_Color);
}
BOOL __CC
cConsole::vWriteOutput(c_LPSTR c_pMsg, DWORD dw_Length, LPDWORD dw_OutLength)
{
	return WriteConsoleA(this->o_HwndOutput, c_pMsg, dw_Length, dw_OutLength, NULL);
}