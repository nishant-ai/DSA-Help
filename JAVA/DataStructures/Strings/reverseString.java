public class StringFormatter {  
public static String reverseString(String str){  
    char ch[]=str.toCharArray();  
    String rev="";  
    for(int i=ch.length-1;i>=0;i--){  
        rev+=ch[i];  
    }  
    return rev;  
}  
}  
