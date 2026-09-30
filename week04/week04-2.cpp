/// week04-2good.cpp 這程式是對的, 用進階 c++迴圈
/// 但在CodeBlock 出錯, warning: range-based for only available with...
/// 2011年後, 只有在 -std=c++00 或 -std=gnu++11 才能用
/// 所以需要改一下設定
/// 下面是 week04 的小考題目 SOIT106_ADVANCE_012
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> a;
    int now;
    for (int i=0; i<20; i++){
        cin >> now;
        if (now==0) break;
        a.push_back(now);
    }
    cin >> now;
    int ans = 0;
    for (int num : a){ /// 在 CodeBlock 設定出錯時, 永遠跑不出答案
        if (num==now) ans++;
    }
    cout << ans << "\n";
} /// 截圖時, 請把 Build message 裡面藍色的 warning 也截圖進來
