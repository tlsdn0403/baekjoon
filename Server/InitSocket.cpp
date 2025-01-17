#define _CRT_SECURE_NO_WARNINGS // 구형 C 함수 사용 시 경고 끄기
#define _WINSOCK_DEPRECATED_NO_WARNINGS // 구형 소켓 API 사용 시 경고 끄기

#include <winsock2.h> // 윈속2 메인 헤더
#include <ws2tcpip.h> // 윈속2 확장 헤더

#include <tchar.h> // _T(), ...
#include <stdio.h> // printf(), ...
#include <stdlib.h> // exit(), ...
#include <string.h> // strncpy(), ...
#include<iostream>

#pragma comment(lib, "ws2_32") // ws2_32.lib 링크

int main() {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa))
		return 1;
	std::cout << "윈속 초기화 성공" << std::endl;

	WSACleanup();
	return 0;
}