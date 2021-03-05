//
//  main.cpp
//  9440번 숫자 더하기
//
//  Created by 김수진 on 2021/03/04.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    int inNum;
    int num1, num2;
    int result;

    cin >> n;

    while (n != 0) {
        int numOfZero = 0;
        string str1 = "";
        string str2 = "";
        vector<int> vNum;

        for (int i = 0; i < n; i++) {
            cin >> inNum;
            if (inNum == 0) numOfZero++;
            else vNum.push_back(inNum);
        }
        sort(vNum.begin(), vNum.end());
        str1 = to_string(vNum[0]);
        str2 = to_string(vNum[1]);

        if (numOfZero % 2 != 0) str1 += "0";
        for (int i = 0; i < numOfZero / 2; i++) {
            str1 += "0";
            str2 += "0";
        }
        if (numOfZero % 2 == 0) {
            for (int i = 2; i < vNum.size(); i += 2) str1 += to_string(vNum[i]);
            for (int i = 3; i < vNum.size(); i += 2) str2 += to_string(vNum[i]);
        }
        else {
            for (int i = 3; i < vNum.size(); i += 2) str1 += to_string(vNum[i]);
            for (int i = 2; i < vNum.size(); i += 2) str2 += to_string(vNum[i]);
        }
        num1 = stoi(str1);
        num2 = stoi(str2);
        result = num1 + num2;
        cout << result << endl;

        cin >> n;
    }

    return 0;
}
