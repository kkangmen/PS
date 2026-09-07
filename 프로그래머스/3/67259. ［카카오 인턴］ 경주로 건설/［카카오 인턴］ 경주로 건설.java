import java.util.*;

class Solution {
    
    int[] dx = {0, 1, 0, -1};
    int[] dy = {1, 0, -1, 0};
    Queue<int[]> q = new LinkedList<>();
    int[][][] distance;
    
    public void bfs(int n, int[][] board){
        // 시작점
        q.offer(new int[]{0, 0, 0});
        q.offer(new int[]{0, 0, 1});
        distance[0][0][0] = 0;
        distance[0][0][1] = 0;
        
        while (!q.isEmpty()){
            int[] point = q.poll();
            
            // System.out.println("포인트 : " + point[0] + " " + point[1] + " " + point[2]);
            int prev = distance[point[0]][point[1]][point[2]];
            for (int i = 0; i < 4; i++){
                int nx = point[0] + dx[i];
                int ny = point[1] + dy[i];
                int cost = 0;
                if (0 <= nx && nx < n && 0 <= ny && ny < n 
                   && board[nx][ny] == 0){
                    // 같은 방향일 경우
                    if (point[2] == i){
                        cost = 100;
                    } else { // 수직일 경우
                        cost = 600;
                    }
                    
                    // 값 갱신 후 큐에 추가
                    if (distance[nx][ny][i] >= (prev + cost)){
                        distance[nx][ny][i] = prev + cost;
                        q.offer(new int[]{nx, ny, i});
                    }
                }
            }
        }
    }
    
    public int solution(int[][] board) {
        int answer = Integer.MAX_VALUE;
        
        // 초기화
        int n = board.length;
        distance = new int[n][n][4];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                Arrays.fill(distance[i][j], Integer.MAX_VALUE);
            }
        }
        
        bfs(n, board);
            
        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < n; j++){
        //         System.out.print(distance[i][j]+ " ");
        //     }
        //     System.out.println();
        // }
        
        for (int i = 0; i < 4; i++){
            answer = Math.min(answer, distance[n-1][n-1][i]);
        }
        return answer;
    }
}