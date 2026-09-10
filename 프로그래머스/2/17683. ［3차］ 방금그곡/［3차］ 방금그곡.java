import java.util.*;

class Solution {
    
    public String convert(String s){
        return s.replace("C#", "c").replace("D#", "d")
            .replace("F#", "f").replace("G#", "g")
            .replace("A#", "a");
    }
    
    public int toMinute(String time){
        int hour = Integer.parseInt(time.split(":")[0]);    
        int min = Integer.parseInt(time.split(":")[1]);
        
        return hour*60 + min;
    }
    
    public String solution(String m, String[] musicinfos) {
        String melody = convert(m);
        String answer = "(None)";
        int maxDuration = 0;
        
        for (String musicinfo : musicinfos){
            String[] arr = musicinfo.split(",");
            String startTime = arr[0];
            String endTime = arr[1];
            String title = arr[2];
            String info = convert(arr[3]);
            
            int duration = toMinute(endTime) - toMinute(startTime);
        
            // 재생 시간만큼 악보 생성
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < duration; i++){
                sb.append(info.charAt(i % info.length()));
            }
            
            // System.out.println(sb.toString());
            if (sb.toString().contains(melody) && duration > maxDuration){
                maxDuration = duration;
                answer = title;       
            }
        }
        return answer;
    }
}