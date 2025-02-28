#pragma once

#include <iostream>
#include <Windows.h>

enum COLOR {
	// Text foreground colors
	// Standard text colors
	GRAY_TEXT = 8, BLUE_TEXT, GREEN_TEXT,
	TEAL_TEXT, RED_TEXT, PINK_TEXT,
	YELLOW_TEXT, WHITE_TEXT,
	// Faded text colors
	BLACK_TEXT = 0, BLUE_FADE_TEXT, GREEN_FADE_TEXT,
	TEAL_FADE_TEXT, RED_FADE_TEXT, PINK_FADE_TEXT,
	YELLOW_FADE_TEXT, WHITE_FADE_TEXT,
	// Standard text background color
	GRAY_BACKGROUND = GRAY_TEXT << 4, BLUE_BACKGROUND = BLUE_TEXT << 4,
	GREEN_BACKGROUND = GREEN_TEXT << 4, TEAL_BACKGROUND = TEAL_TEXT << 4,
	RED_BACKGROUND = RED_TEXT << 4, PINK_BACKGROUND = PINK_TEXT << 4,
	YELLOW_BACKGROUND = YELLOW_TEXT << 4, WHITE_BACKGROUND = WHITE_TEXT << 4,
	// Faded text background color
	BLACK_BACKGROUND = BLACK_TEXT << 4, BLUE_FADE_BACKGROUND = BLUE_FADE_TEXT << 4,
	GREEN_FADE_BACKGROUND = GREEN_FADE_TEXT << 4, TEAL_FADE_BACKGROUND = TEAL_FADE_TEXT << 4,
	RED_FADE_BACKGROUND = RED_FADE_TEXT << 4, PINK_FADE_BACKGROUND = PINK_FADE_TEXT << 4,
	YELLOW_FADE_BACKGROUND = YELLOW_FADE_TEXT << 4, WHITE_FADE_BACKGROUND = WHITE_FADE_TEXT << 4
};

void menuSelecInformation() {
	system("cls");
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|              SNAKETREE GAME              |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY_BACKGROUND | BLUE_TEXT);
	std::cout << "|               Informacion                |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE_FADE_TEXT);
	std::cout << "|               JUGAR AHORA!               |" << std::endl;
	std::cout << "|           Mostrar arbol binario          |" << std::endl;
	std::cout << "|                  Salir                   |" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
}

void menuSelecPlayNow() {
	system("cls");
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|              SNAKETREE GAME              |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|               Informacion                |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY_BACKGROUND | BLUE_TEXT);
	std::cout << "|               JUGAR AHORA!               |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE_FADE_TEXT);
	std::cout << "|           Mostrar arbol binario          |" << std::endl;
	std::cout << "|                  Salir                   |" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
}

void menuSelecShowTree() {
	system("cls");
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|              SNAKETREE GAME              |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|               Informacion                |" << std::endl;
	std::cout << "|               JUGAR AHORA!               |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY_BACKGROUND | BLUE_TEXT);
	std::cout << "|           Mostrar arbol binario          |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE_FADE_TEXT);
	std::cout << "|                  Salir                   |" << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
}


void menuSelecExit() {
	system("cls");
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|              SNAKETREE GAME              |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
	std::cout << "|                                          |" << std::endl;
	std::cout << "|               Informacion                |" << std::endl;
	std::cout << "|               JUGAR AHORA!               |" << std::endl;
	std::cout << "|           Mostrar arbol binario          |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY_BACKGROUND | BLUE_TEXT);
	std::cout << "|                  Salir                   |" << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE_FADE_TEXT);
	std::cout << "|                                          |" << std::endl;
	std::cout << " __________________________________________ " << std::endl;
}

void utilMenu(int selector) {
	switch (selector) {
	case 0:
		menuSelecInformation();
		break;
	case 1:
		menuSelecPlayNow();
		break;
	case 2:
		menuSelecShowTree();
		break;
	case 3:
		menuSelecExit();
		break;
	}
}