package jspbook.pr35;

import java.util.ArrayList;
import java.util.List;

public class LectureManager {
	ArrayList<LectureBean> lecture = new ArrayList<LectureBean>();
	
	public List<LectureBean> getLectureList() {
		return lecture;
	}
	
	public void add(LectureBean lbean) {
		lecture.add(lbean);
	}
}
