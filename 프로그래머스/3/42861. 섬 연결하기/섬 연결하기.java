import java.util.*;

class Solution {
    
    int[] parent;
    
    public void union(int node1, int node2){
        int parent1 = findParent(node1);
        int parent2 = findParent(node2);
        
        if (parent1 < parent2){
            parent[parent2] = parent1;
        } else {
            parent[parent1] = parent2;
        }
    }
    
    public int findParent(int node){
        if (parent[node] == node){
            return node;
        }
        return findParent(parent[node]);
    }
    
    public int solution(int n, int[][] costs) {
        int answer = 0;
        
        // init
        parent = new int[n];
        for (int i = 0; i < n; i++){
            parent[i] = i;
        }
        
        // sort
        Arrays.sort(costs, (o1, o2) -> {
            return o1[2] - o2[2];
        });
        
        for (int[] cost : costs){
            if (findParent(cost[0]) != findParent(cost[1])){
                union(cost[0], cost[1]);
                answer += cost[2];
            }
        }
        return answer;
    }
}