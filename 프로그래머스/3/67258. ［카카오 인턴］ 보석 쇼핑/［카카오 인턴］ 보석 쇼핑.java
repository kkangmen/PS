import java.util.*;

class Solution {
    public int[] solution(String[] gems) {
        int[] answer = new int[]{0, gems.length-1};
        
        Set<String> set = new HashSet<>();
        
        for(String gem : gems){
            set.add(gem);
        }
        
        Map<String, Integer> map = new HashMap<>();
        int start = 0;
        int end = 0;
        map.put(gems[0], 1);
        
        while (true){
            
            // 전체 가짓수 부족할 경우
            if (map.size() < set.size()){
                // System.out.println("부족");
                end++;
                if (end == gems.length){
                    break;
                }
                map.put(gems[end], map.getOrDefault(gems[end], 0) + 1);    
            } else { // 전체 가짓수 충분
                // System.out.println("충분");
                if (end-start < answer[1]-answer[0]){
                    answer[0] = start;
                    answer[1] = end;
                    // System.out.println(answer[0] + " " + answer[1]);
                }
                
                map.put(gems[start], map.get(gems[start]) -1);
                if (map.get(gems[start]) == 0){
                    map.remove(gems[start]);
                }
                start++;
            }
            
            // for (String s : map.keySet()){
            //     // System.out.println("key: " + s + " value: " + map.get(s));
            // }
        }
        answer[0]++;
        answer[1]++;
        return answer;
    }
}