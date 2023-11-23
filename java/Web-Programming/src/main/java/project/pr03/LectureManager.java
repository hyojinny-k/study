package project.pr03;

import java.util.ArrayList;
import java.util.List;

public class LectureManager {
	private static final int times = 6;
	private static final int days = 5;
	
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
}