import java.util.*;

class Solution {
    Map<String, List<String>> graph = new HashMap<>();
    Map<String, boolean[]> used = new HashMap<>();
    List<String> answer = new ArrayList<>();
    boolean flag = false;
    int total;
    
    public void bTracking(String cur, List<String> path) {
        path.add(cur);
        
        // 티켓을 모두 썼다면 = 방문한 공항이 티켓 수 + 1
        if (path.size() == total + 1) {
            answer = new ArrayList<>(path);   // 복사본 저장
            flag = true;
            return;
        }
        
        List<String> nexts = graph.getOrDefault(cur, Collections.emptyList());
        boolean[] check = used.get(cur);
        
        for (int i = 0; i < nexts.size(); i++) {
            if (!check[i]) {
                check[i] = true;
                bTracking(nexts.get(i), path);
                if (flag) return;
                check[i] = false;          // 백트래킹
            }
        }
        
        path.remove(path.size() - 1);      // 실패 → 자기가 추가한 것 되돌리기
    }
    
    public String[] solution(String[][] tickets) {
        total = tickets.length;
        
        for (String[] t : tickets) {
            graph.computeIfAbsent(t[0], k -> new ArrayList<>()).add(t[1]);
        }
        for (String key : graph.keySet()) {
            Collections.sort(graph.get(key));              // 사전순
            used.put(key, new boolean[graph.get(key).size()]);
        }
        
        bTracking("ICN", new ArrayList<>());
        return answer.toArray(new String[0]);
    }
}