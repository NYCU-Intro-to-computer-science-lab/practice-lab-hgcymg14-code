// p4: McCarthy 91 函數 (F91)
#include <iostream>
using namespace std;

// TODO: 實作 f91 遞迴函數
// 參數: n (正整數)
// 回傳: f91(n) 的值
// 提示: if (n >= 101) return n - 10;
//       else return f91(f91(n + 11));
int f91(int n) {
    // 在此實作你的程式碼
    if(n>=101){
        return n-10;
    }else{
        return f91(f91(n+11));
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // TODO: 讀取 n 並呼叫 f91 函數，輸出結果
    int n;
    cin>>n;
    cout<<f91(n)<<endl;
    
    return 0;
}
