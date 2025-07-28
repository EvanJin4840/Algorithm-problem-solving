class Solution {
        public int countPrimes(int n) {
    if (n <= 2) return 0;
    
    boolean[] isNotPrime = new boolean[n];
    int count = 1; 
    
    for (int i = 3; i < n; i += 2) {
        if (!isNotPrime[i]) {
            count++;
            if (i <= Math.sqrt(n)) {
            for (int j = i * i; j < n; j += i * 2) {
                isNotPrime[j] = true;
            }
            }
        }
    }
    
    return count;
}
}