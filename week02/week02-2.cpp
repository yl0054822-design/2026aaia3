/// week02-2.cpp 練習  要使用命名空間
/// File-Save As 存檔成 .cpp 檔
#include <iostream> /// 上週教的
#include <string> /// 今天新教的
using namespace std; /// 使用 std 命名空間
int main()
{ /// 不用寫一堆 std ::
    cout << "請輸入你的名字: ";
    string name; /// 使用標準字串
    cin>>name;
    cout<<name<<"你好, 你會用字串了";
}
