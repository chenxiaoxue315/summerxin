/*给k个字符串，求出他们的最长公共前缀(LCP)
样例在 "ABCD" "ABEF" 和 "ACEF" 中,  LCP 为 "A"
在 "ABCDEFG", "ABCEFG", "ABCEFA" 中, LCP 为 "ABC"
解题思路1：
两两比较得出临时前缀结果，再用这个结果去比较下一个字符串得出又一个前缀结果，直到比较完所有字符串，这个前缀结果即为最终结果。*/
public class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder();
        
        int p = 0;  //指向字符串中的字符位置
        int times = 0;  //当前字符存在于多少str中
        Character c = null; //strs[i].charAt(p)
        
        for(int i=0; i<strs.length && p<strs[i].length(); i++){
            if(i == 0){                         //首字符
                c = strs[i].charAt(p);
                times++;
            }else if(c == strs[i].charAt(p))    //相等则继续遍历     
                times++;
            else                                //不等则退出
                break;
            
            if(times == strs.length){           //若相同字符次数==strs长度，表明为公共前缀
                sb.append(c);
                times = 0;
                p++;
                i = -1;
            }
        }
        
        return sb.toString();
    }
} 
