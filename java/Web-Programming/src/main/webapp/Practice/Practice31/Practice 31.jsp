<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%!
	int[][] lectureType = {
		{0, 1, 1, 0, 1},
		{1, 0, 0, 0, 2},
		{0, 0, 2, 0, 4},
		{2, 3, 0, 3, 0},
		{0, 0, 0, 2, 0},
		{0, 0, 0, 0, 0}
	};

	int[][] consecutive = {
		{1, 2, 1, 1, 1},
		{2, 0, 1, 1, 1},
		{0, 1, 1, 1, 4},
		{2, 1, 1, 1, 0},
		{0, 1, 1, 2, 0},
		{1, 1, 1, 0, 0}
	};
	
	int[][] lectureTitle = {
		{-1, 4, 5, -1, 5},
		{3, -1, -1, -1, 1},
		{-1, -1, 1, -1, 7},
		{0, 6, -1, 6, -1},
		{-1, -1, -1, 2, -1},
		{-1, -1, -1, -1, -1}
	};
	
	String[] titleNames = {"웹프로그래밍", "운영체제", "소프트웨어프로그래밍", "데이터베이스개론", "자료구조", "네트워크", "창의와감성", "사회봉사" };
	
	
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 31</title>
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
<%
	out.print("<div align=center><h3>강의 시간표</h3>");
	out.print("<table border=2px solid black>");
	out.print("<tr>");
	out.print("<th width=100px height=60px>2학년</th>");
	out.print("<th width=100px>월</th>");
	out.print("<th width=100px>화</th>");
	out.print("<th width=100px>수</th>");
	out.print("<th width=100px>목</th>");
	out.print("<th width=100px>금</th>");
	out.print("</tr>");
	for (int i = 0; i < 6; i++) {
		out.print("<tr>");
		out.print("<th align=center height=60px>" + (i + 1) + "</th>");
		for (int j = 0; j < 5; j++) {
			if (consecutive[i][j] == 1) {
				if (lectureTitle[i][j] == -1)
					out.print("<td>&nbsp;</td>");
				else {
					if (lectureType[i][j] == 1)
						out.print("<td align=center class='yellow'>" + titleNames[lectureTitle[i][j]] + "</td>");
					else if (lectureType[i][j] == 2)
						out.print("<td align=center class='blue'>" + titleNames[lectureTitle[i][j]] + "</td>");
					else if (lectureType[i][j] == 3)
						out.print("<td align=center class='gray'>" + titleNames[lectureTitle[i][j]] + "</td>");
					else
						out.print("<td align=center>" + titleNames[lectureTitle[i][j]] + "</td>");
				}
			}
			else if (consecutive[i][j] > 0) {
				if (lectureType[i][j] == 1)
					out.print("<td align=center class='yellow' rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
				else if (lectureType[i][j] == 2)
					out.print("<td align=center class='blue' rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
				else if (lectureType[i][j] == 3)
					out.print("<td align=center class='gray' rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
				else
					out.print("<td align=center rowspan=" + consecutive[i][j] + ">" + titleNames[lectureTitle[i][j]] + "</td>");
			}
		}
		out.print("</tr>");
	}
%>
</body>
</html>