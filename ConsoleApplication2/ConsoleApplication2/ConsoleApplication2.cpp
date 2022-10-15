#include <iostream>
#include <clocale>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleOutputCP(CP_UTF8);

	// ��'� ����'�����
	string PCsName = "DESKTOP-RLMN2Q3";
	// ������ ���� ����'�����
	unsigned short int PCsAge = 1;
	// ��� ���������� �������
	string PCsSystemType = "Windows 10 Home";
	// �� ������ ����'����?
	bool IsComputerWorking = true;
	// ³����������
	string GPU = "NVIDIA GeForce GTX 1080 Ti";
	// ���������
	string CPU = "Intel(R) Core(TM) i8-8700 CPU";
	// ���������� ���'��� (��)
	unsigned short int RAM = 8;
	// HDD
	string HDD = "KINGSTON SA400M8240G 1 Tb";

	unsigned int totalMemoryInBytes = sizeof(PCsName) +
									sizeof(PCsAge) +
									sizeof(PCsSystemType) +
									sizeof(IsComputerWorking) +
									sizeof(GPU) +
									sizeof(CPU) +
									sizeof(RAM) +
									sizeof(HDD);

	cout << "��'� ����'�����:\t\t\t" << PCsName << endl;
	cout << "������ ���� ����'�����:\t\t" << PCsAge << endl;
	cout << "��� ���������� �������:\t\t" << PCsSystemType << endl;
	cout << "�� ������ ����'����?:\t\t\t" << ((IsComputerWorking) ? "���" : "ͳ") << endl;
	cout << "³����������:\t\t\t\t" << GPU << endl;
	cout << "���������:\t\t\t\t" << CPU << endl;
	cout << "���������� ���'��� (��):\t\t" << RAM << endl;
	cout << "SDD:\t\t\t\t\t" << HDD << endl;
	cout << "��'�� ������������ ���'��i (� ������):\t" << totalMemoryInBytes << endl;
	return 0;
}