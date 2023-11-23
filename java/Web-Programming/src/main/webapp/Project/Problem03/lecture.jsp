<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*" import="project.pr03.*" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/tml4/loose.dtd">
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="lec" class="project.pr03.LectureBean" />
<jsp:setProperty name="lec" property="*" />
<jsp:useBean id="lm" class="project.pr03.LectureManager" scope="page" />

<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>시간표 작성</title>
<style>
	table {
		border-collapse: collapse;
		font-family: "굴림";
	}
	th {
		font-size: 25px;
	}
	.yellow {
		background-color: #ffe08c;
	}
	.blue {
		background-color: #b2ccff;
	}
	.gray {
		background-color: #bdbdbd;
	}
</style>
</head>
<body>
<div align="center">
	<%
	lm.add(lec);

	String[] typeNames = {"전공필수", "전공선택", "교양", "자유선택"};
	String[] titleNames = {"웹프로그래밍", "운영체제", "소프트웨어프로그래밍", "데이터베이스개론", "자료구조", "네트워크", "창의와감성", "사회봉사" };
	String[] days = {"월", "화", "수", "목", "금"};
	int i, j;
	
	int[][] lectureType = new int[6][5];
	int[][] lectureTitle = new int[6][5];
	int[][] consecutive = new int[6][5];
	for (i = 0; i < 6; i++)
		for (j = 0; j < 5; j++) {
			lectureType[i][j] = -1;
			lectureTitle[i][j] = -1;
			consecutive[i][j] = 1;
		}
	
	%>
	<form name="frm1" action="lecture.jsp" method="post">
		과목타입 : 
		<select name="lectureType">
			<%
				for (i = 0; i < 4; i++)
					out.print("<option value=" + i + ">" + typeNames[i] + "</option>");
			%>
		</select>
		과목명 : 
		<select name="lectureTitle">
			<%
				for (i = 0; i < 8; i++)
					out.print("<option value=" + i + ">" + titleNames[i] + "</option>");
			%>
		</select>
		요일 :
		<select name="days">
			<%
				for (i = 0; i < 5; i++)
					out.print("<option value=" + i + ">" + days[i] + "</option>");
			%>
		</select>
		시간 :
		<select name="time">
			<%
				for (i = 1; i <= 6; i++)
					out.print("<option value=" + i + ">" + i + "</option>");
			%>
		</select>
		연강여부 :
		<select name="consecutive">
			<%
				for (i = 1; i <= 6; i++)
					out.print("<option value=" + i + ">" + i + "</option>");
			%>
		</select>
		&nbsp;&nbsp;&nbsp;
		<input type="submit" value="등록" class="button">
		<hr>
		<%
		request.setCharacterEncoding("UTF-8");
		String type = request.getParameter("lectureType");
		String title = request.getParameter("lectureTitle");
		String day = request.getParameter("days");
		int time;
		
		if (!(type == null || title == null || day == null)) {
			lec.setType(Integer.parseInt(type));
			lec.setTitle(Integer.parseInt(title));
			lec.setDay(Integer.parseInt(day));
			time = Integer.parseInt(request.getParameter("time"));
		}
		
		for (LectureBean lbean : lm.getLectureList()) 
			if (lbean.getTime() > 0) {
				lectureType[lbean.getTime() - 1][lbean.getDay()] = lbean.getType();
				lectureTitle[lbean.getTime() - 1][lbean.getDay()] = lbean.getTitle();
				consecutive[lbean.getTime() - 1][lbean.getDay()] = lbean.getConsecutive();
				for (i = 1; i < lbean.getConsecutive(); i++) 
					consecutive[lbean.getTime() - 1 + i][lbean.getDay()] = 0;
			}
		
		out.print("<h3>강의 시간표</h3>");
		out.print("<table border=2px solid black>");
		out.print("<tr>");
		out.print("<th width=100px height=60px>2학년</th>");
		out.print("<th width=100px>월</th>");
		out.print("<th width=100px>화</th>");
		out.print("<th width=100px>수</th>");
		out.print("<th width=100px>목</th>");
		out.print("<th width=100px>금</th>");
		out.print("</tr>");
		
		for (i = 0; i < 6; i++) {
			out.print("<tr>");
			out.print("<th align=center height=60px>" + (i + 1) + "</th>");
			for (j = 0; j < 5; j++) {
				if (consecutive[i][j] == 1) {
					if (lectureTitle[i][j] == -1)
						out.print("<td>&nbsp;</td>");
					else {
						if (lectureType[i][j] == 0)
							out.print("<td align=center class='yellow'>" + titleNames[lectureTitle[i][j]] + "</td>");
						else if (lectureType[i][j] == 1)
							out.print("<td align=center class='blue'>" + titleNames[lectureTitle[i][j]] + "</td>");
						else if (lectureType[i][j] == 2)
							out.print("<td align=center class='gray'>" + titleNames[lectureTitle[i][j]] + "</td>");
						else
							out.print("<td align=center>" + titleNames[lectureTitle[i][j]] + "</td>");
					}
				}
				else if (consecutive[i][j] > 0) {
					if (lectureType[i][j] == 0)
						out.print("<td align=center class='yellow' rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
					else if (lectureType[i][j] == 1)
						out.print("<td align=center class='blue' rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
					else if (lectureType[i][j] == 2)
						out.print("<td align=center class='gray' rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
					else
						out.print("<td align=center rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
				}
			}
			out.print("</tr>");
		}
		out.print("</table><br>");
		out.print("<hr><br>");
		
		for (LectureBean lb : lm.getLectureList()) {
			if (lb.getTime() != 0)
				out.println(lb.toString() + "<br>");
		}
	%>
	</form>
</div>
</body>
</html>