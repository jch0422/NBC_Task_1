#include <iostream>
using namespace std;

void inputnum(double arr[], int size) {
	cout << size << "���� ���ڸ� �Է����ּ���. : ";
	for (int x = 0; x < size; x++) {
		cin >> arr[x];
	}
}
double scoresum(double arr[], int size) {
	double sum = 0;
	for (int x = 0; x < size; x++) {
		sum += arr[x];
	}
	return sum;
}
double scoreaverage(double sum, int size) {
	return sum / size;
}
void scoresorting(double arr[], int size) {
	double	sorting = 0;
	double temp = 0;
	cout << "�Է��� ���� ���� : �������� = 1, �������� = 2" << endl;
	cin >> sorting;
	if (sorting == 1)
	{
		for (int x = 0; x < size; x++) {
			for (int y = x + 1; y < size; y++) {
				if (arr[x] > arr[y])
				{
					temp = arr[x];
					arr[x] = arr[y];
					arr[y] = temp;
				}
			}
		}
		cout << "�������� ���� : ";
	}
	else if (sorting == 2)
	{
		for (int x = 0; x < size; x++) {
			for (int y = x + 1; y < size; y++) {
				if (arr[x] < arr[y])
				{
					temp = arr[x];
					arr[x] = arr[y];
					arr[y] = temp;
				}
			}
		}
		cout << "�������� ���� : ";
	}
	for (int z = 0; z < size; z++) {
		cout << arr[z] << " ";
	}
}



int main()
{
	const int size = 5;
	double numbers[size];

	inputnum(numbers, size);
	double sum = scoresum(numbers, size);
	double average = scoreaverage(sum, size);

	cout << "���ڵ��� �� �� : " << sum << endl;
	cout << "���ڵ��� ��� : " << average << endl;

	scoresorting(numbers, size);


	return 0;
}
