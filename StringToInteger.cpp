class Solution {
public:
    int atoi(string str) {
        
        int len = str.size();
        int sign = 1;  //�����ű�ǣ�Ĭ��Ϊ����
        int i=0;
        int result = 0;
        
        if(0 == len)
            return 0;
        
        // ɾ���ո�
        while(i<len)
        {
            if(str[i]==' ')
                i++;
            else
                break;
        }
        // �ж�������
        if(str[i]=='+')
            i++;
        else if(str[i]=='-')
        {
            i++;
            sign = -1;
        }
        while(i<len && str[i]>='0' && str[i]<='9')
        {
            if(result > INT_MAX/10)
                return 1==sign?INT_MAX:INT_MIN;
                
            if(1==sign && result == INT_MAX/10)
                return 7<=(str[i]-'0')?INT_MAX:result*10+(str[i]-'0');
                
            if(-1==sign && result == INT_MAX/10)
                return 8<=(str[i]-'0')?INT_MIN:(-result*10-(str[i]-'0'));
                
            result = result*10 + (str[i]-'0');
            ++i;
        }

        return sign*result;
    }
};