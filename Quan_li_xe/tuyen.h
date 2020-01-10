#pragma once
class xe
{
	protected:
			int namsx;
			int trongluong;
	public:
			xe();
			xe(int _namsx, int _trongluong);
			virtual float giathanh();
			void xuat();
};

class xetai : public xe
{
	private:
		int trongtai;
	public:
		xetai();
		xetai(int _namsx, int _trongluong, int _trongtai);
		float giathanh();
		void xuat();
};
