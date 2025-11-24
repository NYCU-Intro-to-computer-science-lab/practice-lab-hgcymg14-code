// p1: Calculator (Function Practice)
#include <iostream>
using namespace std;

// TODO: 實作 calculate 函數
// 參數: opcode (1-4), num1, num2
// 回傳: 根據 opcode 計算的結果
int calculate(int opcode, int num1, int num2) {

    // 在此實作你的程式碼
    switch (opcode) {
        case 1:
            return num1 + num2; // 加法
        case 2:
            return num1 - num2; // 減法
        case 3:
            return num1 * num2; // 乘法
        case 4:
            if (num2 != 0) {
                return num1 / num2; // 除法
            } else {
                cerr << "Error: Division by zero" << endl;
                return 0; // 或其他錯誤處理
            }
        default:
            cerr << "Error: Invalid opcode" << endl;
            return 0; // 或其他錯誤處理
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // TODO: 讀取輸入並呼叫 calculate 函數
    // 提示: 使用 while(cin >> opcode >> num1 >> num2) 來讀取到 EOF
    int opcode, num1, num2;
    while (cin >> opcode >> num1 >> num2) {
        int result = calculate(opcode, num1, num2);
        cout << result << endl;
    }
    
    return 0;
}
