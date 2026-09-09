import java.util.*;

class Solution {
    
    boolean[] isUsed;
    Set<List<String>> set = new HashSet<>();
    
    public boolean isPossible(String user_id, String banned_id){
        if (user_id.length() != banned_id.length()){
            return false;
        } 
        
        for (int i = 0; i < user_id.length(); i++){
            char user_id_char = user_id.charAt(i);
            char banned_id_char = banned_id.charAt(i);
            
            // 글자가 같거나 둘중 하나라도 별이라면 참 -> 글자가 다르고, 별이 아니면 거짓
            if (user_id_char != banned_id_char &&
               banned_id_char != '*'){
                return false;
            }
        }
        return true;
    }
    
    public void bTracking(String[] user_id, String[] banned_id, List<String> cur_id){
        if (cur_id.size() == banned_id.length){
            List<String> copy = new ArrayList<>(cur_id);
            Collections.sort(copy);
            set.add(copy);
            return;
        }    
        
        for (int i = 0; i < user_id.length; i++){
            if (!isUsed[i] && isPossible(user_id[i], banned_id[cur_id.size()])){
                isUsed[i] = true;
                cur_id.add(user_id[i]);
                bTracking(user_id, banned_id, cur_id);
                isUsed[i] = false;
                cur_id.remove(user_id[i]);
            }
        }
    }
    
    public int solution(String[] user_id, String[] banned_id) {
        
        isUsed = new boolean[user_id.length];
        List<String> cur_id = new ArrayList<>();
    
        bTracking(user_id, banned_id, cur_id);
        
        // for (List<String> list : set){
        //     for (String s : list){
        //         System.out.print(s + " ");
        //     }
        //     System.out.println();
        // }
        return set.size();
    }
}