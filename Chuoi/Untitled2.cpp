#include<iostream>
#include<string.h>
using namespace std;

class ngaythang
{
	private:
	int ngay;
	int thang;
	int nam;
	public:
	ngaythang()
	{
		ngay=0;
		thang=0;
		nam=0;
	}
	~ngaythang()
	{
	}
	friend istream &operator>>(iostream&in,ngaythang &n)
	{
		cout<<"Nhap ngay :";
		in>>n.ngay;
		cout<<"Nhap thang: ";
		in>>n.thang;
		cout<<"Nhap nam: ";
		in>>n.nam;
	}
	friend ostream &operator<<(iostream&out,ngaythang n)
	{
		out<<"ngay "<<n.ngay<<" thang "<<n.thang<<" nam "<<n.nam;
	}
};


class sach
{
	private:
		int masach;
		char tensach[255];
		char nhaxuatban[255];
		char theloai[30];
	public:
		sach()
		{
			masach=0;
			strcpy(tensach,"");
			strcpy(nhaxuatban,"");
			strcpy(theloai,"");
		}
		~sach()
		{
		}
		sach(int _masach, char *_tensach, char *_nhaxuatban, char *_theloai)
		{
			masach = _masach;
			strcpy(tensach,_tensach);
			strcpy(nhaxuatban, _nhaxuatban);
			strcpy(theloai, _theloai);
		}
		void nhap()
		{
			cout<<"Nhap ma sach : ";
			cin>>masach;
			fflush(stdin);
			cout<<"Nhap ten sach : ";
			cin.getline(tensach,255);
		}
		void xuat()
		{
			cout<<masach<<"\t"<<tensach<<"\t"<<nhaxuatban<<"\t"<<theloai;
		}
};



class docgia
{
	private:
		char hoten[255];
		ngaythang ngaysinh;
		sach ds_sachmuon[10];
	public:
		
		docgia()
		{
			strcpy(hoten,"");
		}
		~docgia()
		{
		}
		docgia(char *_ten, ngaythang _ngaysinh)
		{
			strcpy(hoten, _ten);
			ngaysinh = _ngaysinh;
		}
		void nhap()
		{
			int n;
			cout<<"Nhap ten doc gia : ";
			cin.getline(hoten,255);
			cout<<"Nhap so luong sach da muon : ";
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap thong tin cho cuon sach thu "<<i+1<<" : ";
				ds_sachmuon[i].nhap();
			}
			
		}
		void xuat()
		{
			cout<<hoten<<"\t";
			int i=0;
			while(i!=10)
			{
				ds_sachmuon[i].xuat();
				i++;
			}
		}
		void search();
};

int main()
{
	sach sachbaitap;
	docgia tuyen;
	tuyen.nhap();
	tuyen.xuat();
	return 0;
}
