/*��k���ַ�����������ǵ������ǰ׺(LCP)
������ "ABCD" "ABEF" �� "ACEF" ��,  LCP Ϊ "A"
�� "ABCDEFG", "ABCEFG", "ABCEFA" ��, LCP Ϊ "ABC"
����˼·1��
�����Ƚϵó���ʱǰ׺���������������ȥ�Ƚ���һ���ַ����ó���һ��ǰ׺�����ֱ���Ƚ��������ַ��������ǰ׺�����Ϊ���ս����*/
public class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder();
        
        int p = 0;  //ָ���ַ����е��ַ�λ��
        int times = 0;  //��ǰ�ַ������ڶ���str��
        Character c = null; //strs[i].charAt(p)
        
        for(int i=0; i<strs.length && p<strs[i].length(); i++){
            if(i == 0){                         //���ַ�
                c = strs[i].charAt(p);
                times++;
            }else if(c == strs[i].charAt(p))    //������������     
                times++;
            else                                //�������˳�
                break;
            
            if(times == strs.length){           //����ͬ�ַ�����==strs���ȣ�����Ϊ����ǰ׺
                sb.append(c);
                times = 0;
                p++;
                i = -1;
            }
        }
        
        return sb.toString();
    }
} 
