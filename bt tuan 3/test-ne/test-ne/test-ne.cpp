#include <iostream>
#include"hoangtuyen.h"
using namespace std;
#define max 100

void in(int arr[], int& n);
void out(int arr[], int n);
void RadixSort(int a[], int n);

int main()
{
	int n;
	int arr[max];
	in(arr, n);
	RadixSort(arr, n);
	out(arr, n);
	return 0;
}



void in(int arr[], int& n)
{
	cout << "Nhap so luong phan tu trong mang : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}


void out(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
// sap xep theo Radix Sort

void RadixSort(int arr[], int n)
{
	int i, b[max], exp = 1;
	int m = arr[0];
	// tim phan tu co gia tri lon nhat de thuc hien so lan lap lai
	for (i = 0; i < n; i++)
	{
		if (arr[i] > m)
			m = arr[i];
	}

	while (m / exp > 0)
	{

		// dem so chu so giong nhau
		int O_nho[10] = { 0 };
		for (i = 0; i < n; i++)
		{
			O_nho[arr[i] / exp % 10]++;
			cout << "O_nho[" << arr[i] / exp % 10<<"] = "<< O_nho[arr[i] / exp % 10] << endl;
		}
		cout << endl;
		// cong tat ca cac gia tri phan tu cua O_nho
		for (i = 1; i < 10; i++)
		{
			O_nho[i] += O_nho[i - 1];
			cout << "O_nho[" << i << "] = " << O_nho[i] << endl;
		}
		cout << endl;

		// chuyen cac phan tu trang mang a vao mang b, tu tren xuong duoi
		for (i = n - 1; i >= 0; i--)
		{
			b[--O_nho[arr[i] / exp % 10]] = arr[i];
			cout << "b[" << O_nho[arr[i] / exp % 10] << "] = " << arr[i];
			cout << endl;
		}

		// chuyen cac phan tu b vao mang a
		for (i = 0; i < n; i++)
		{
			arr[i] = b[i];
			cout << arr[i] << " ";
		}
		cout << " \n------------------------------------------" << endl;
		exp *= 10;
	}

	
}


