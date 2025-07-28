class Solution {
	static int MIN = Integer.MAX_VALUE;
    
	public static int solution(String s) {
		int answer = 0;
		
		if(s.length()==1) {
			return 1;
		}
		
	
		for(int i=1; i<=s.length()/2; i++) {
			String str = ""; 
			String com = "";
			int cnt = 1;
			

			for(int j=0; j<s.length()/i; j++) {
				
				if(com.equals(s.substring(i*j, (i*j)+i))){
					cnt++;
					continue;
				}
				
				if(cnt>1) {
					str += cnt+com;
					cnt=1; 
				}else {
					str += com;
				}
				
				com = s.substring(i*j, (i*j)+i);
			}
			
			if(cnt>1) {
				str += cnt+com;
			}else {
				str += com;
			}
			
			if(s.length()%i!=0) {
				str += s.substring(s.length()-s.length()%i, s.length());
			}
			
			MIN = Math.min(MIN, str.length());
		}
		
		answer = MIN;
		return answer;
	}
}