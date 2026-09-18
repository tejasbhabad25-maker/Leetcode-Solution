class Solution {
    public int countKeyChanges(String s) {

        int ct = 0;
        for (int i = 1; i < s.length(); i++) {
            if (Character.toLowerCase(s.charAt(i)) != Character.toLowerCase(s.charAt(i - 1))) {
                ct++;
            }
        }
        return ct;
    }
}