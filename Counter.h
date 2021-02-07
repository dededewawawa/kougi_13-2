#include <limits>

class Counter
{
	private:
		unsigned cnt;
	public:
		Counter(void) { cnt = 0; }

		operator unsigned(void) { return cnt; }
		bool operator!(void){ return cnt==0; }

		Counter operator++(void)	// �O�u�C���N�������g
		{
			if(cnt < UINT_MAX) cnt++;
			return *this;
		}
                
		Counter operator++(int num)	// ��u�C���N�������g
		{
			Counter x = *this;
			if(cnt < UINT_MAX) cnt++;
			return x;
		}
                
		Counter operator--(void)	// �O�u�f�N�������g
		{
			if(cnt > 0) cnt--;
			return *this;
		}
                
		Counter operator--(int num)	// ��u�f�N�������g
		{
			Counter x = *this;
			if(cnt > 0) cnt--;
			return x;
		}



};
