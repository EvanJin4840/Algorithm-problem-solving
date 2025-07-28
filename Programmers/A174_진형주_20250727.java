import java.util.*;

class Solution {
    public int[] solution(int k, int[] score) {
        int[] answer = new int[score.length];
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();
        int temp = 0;

        for(int i = 0; i < score.length; i++) {
            priorityQueue.add(score[i]);
            
            if (priorityQueue.size() > k) {
                priorityQueue.poll();
            }

            answer[i] = priorityQueue.peek();
        }
        return answer;
    }
}
/*
생각정리
priority Queue를 사용하여 해결하자. 
만약 priority queue의 크기가 k보다 크다면, 하나를 poll한다.
return 할 배열 answer의 인덱스 값 i에 우선순위 queue의 peek값을 넣어서
answer를 완성시킨 후 return한다.
*/