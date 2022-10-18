#include <iostream>
#include <clocale>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleOutputCP(CP_UTF8);

	// ����� ���
	string GameName = "Backbone";
	// ������ ����� ��� (CHF)
	unsigned short int CostOfTheGame = 25;
	// ������ ����� ��� � ������������ (CHF)
	float CostOfTheFullGame = 29.70;
	// ̳���, ��� ���� ������� �� ��� (Gb)
	unsigned short int SpaceForTheGame = 1;
	// ��� ��������� �������
	string GPUNeeded = "Nvidia GTX 950 or equivalent";
	// ���� ��������� �������
	string CPUNeeded = "Multi-core 2.5GHz or faster";
	// ������ ���������� ���'�� ������� (��)
	unsigned short int RAMNeeded = 8;
	// ������������� ���������� �������
	string OSNeeded = "Windows 7";
	// ��� �������� ���
	string GameDevsInfo = "EGGNUT";

	unsigned int totalMemoryInBytes = sizeof(GameName) +
									sizeof(CostOfTheGame) +
									sizeof(CostOfTheFullGame) +
									sizeof(SpaceForTheGame) +
									sizeof(GPUNeeded) +
									sizeof(RAMNeeded) +
									sizeof(OSNeeded) +
									sizeof(GameDevsInfo);

	cout << "����� ���:\t\t\t\t\t" << GameName << endl;
	cout << "������ ����� ��� (CHF):\t\t\t" << CostOfTheGame << endl;
	cout << "������ ����� ��� � ������������ (CHF):\t" << CostOfTheFullGame << endl;
	cout << "̳���, ��� ���� ������� �� ��� (Gb):\t\t" << SpaceForTheGame << endl;
	cout << "��� ��������� �������:\t\t\t" << GPUNeeded << endl;
	cout << "���� ��������� �������:\t\t\t" << RAMNeeded << endl;
	cout << "������ ���������� ���'�� ������� (��):\t" << OSNeeded << endl;
	cout << "��� �������� ���:\t\t\t\t" << GameDevsInfo << endl;
	cout << "��'�� ������������ ���'��i (� ������):\t\t" << totalMemoryInBytes << endl;
	return 0;
}