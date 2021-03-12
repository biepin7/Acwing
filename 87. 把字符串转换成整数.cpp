class Solution {
public:
    int strToInt(string str) {
        int k=0;
        // 空格处理
        while (k<str.size() && str[k] == ' ') k++;
        long long num=0;
        bool flag = false; //flag：num是否为负数
        // 处理接下来一位的+-号
        if(k<str.size()&&str[k]=='-') {
            flag = true;
            k++;
        }else if(k<str.size()&&str[k] == '+') k++;
        //处理接下来的连续数字
        while(k<str.size()&&str[k]>='0'&&str[k]<='9'){
            num=num*10+str[k]-'0'; // 注意 -'0'
            k++;
        }
        if(flag == true) num*=-1;
        if(num>INT_MAX) num=INT_MAX;
        if(num<INT_MIN) num=INT_MIN;
        return num;
    }
};