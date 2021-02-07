#include <limits>

class Counter
{
	private:
		unsigned cnt;
	public:
		Counter(void) { cnt = 0; }

		operator unsigned(void) { return cnt; }
		bool operator!(void){ return cnt==0; }

		Counter operator++(void)	// 前置インクリメント
		{
			if(cnt < UINT_MAX) cnt++;
			return *this;
		}
                
		Counter operator++(int num)	// 後置インクリメント
		{
			Counter x = *this;
			if(cnt < UINT_MAX) cnt++;
			return x;
		}
                
		Counter operator--(void)	// 前置デクリメント
		{
			if(cnt > 0) cnt--;
			return *this;
		}
                
		Counter operator--(int num)	// 後置デクリメント
		{
			Counter x = *this;
			if(cnt > 0) cnt--;
			return x;
		}



};
