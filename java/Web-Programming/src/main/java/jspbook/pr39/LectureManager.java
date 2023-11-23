package jspbook.pr39;

import java.util.ArrayList;
import java.util.List;

public class LectureManager {
	private static final int times = 6;
	private static final int days = 5;
	private static int[][] typeMatrix = new int[times][days];
	private static int[][] titleMatrix = new int[times][days];
	private static int[][] spanMatrix = new int[times][days];
	
	static ArrayList<LectureBean> lecture = new ArrayList<LectureBean>();
	
	public List<LectureBean> getLectureList() {
		return lecture;
	}
	
	public void add(LectureBean lbean) {
		lecture.add(lbean);
	}
	
	public static void printMatrix(int[][] matrix) {
		for (int i = 0; i < times; i++) {
			for (int j = 0; j < days; j++)
				System.out.print(matrix[i][j] + " ");
			System.out.println();
		}
		System.out.println();
	}
	
	public static void buildMatrix() {
		int i, j, c;
		for (i = 0; i < times; i++)
			for (j = 0; j < days; j++) {
				typeMatrix[i][j] = 0;
				titleMatrix[i][j] = -1;
				spanMatrix[i][j] = 1;
			}
		
		for (LectureBean lbean : lecture) {
			if (lbean.getTime() > 0) {
				typeMatrix[lbean.getTime() - 1][lbean.getDay()] = lbean.getType() + 1;
				titleMatrix[lbean.getTime() - 1][lbean.getDay()] = lbean.getTitle();
				spanMatrix[lbean.getTime() - 1][lbean.getDay()] = lbean.getConsecutive();
				for (i = 1; i < lbean.getConsecutive(); i++) 
					spanMatrix[lbean.getTime() - 1 + i][lbean.getDay()] = 0;
			}
		}
		
		printMatrix(typeMatrix);
		printMatrix(titleMatrix);
		printMatrix(spanMatrix);
	}
}