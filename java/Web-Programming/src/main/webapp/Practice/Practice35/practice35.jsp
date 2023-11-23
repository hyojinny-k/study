<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*" import="jspbook.pr35.*" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/tml4/loose.dtd">
<% request.setCharacterEncoding("UTF-8"); %>

<jsp:useBean id="lec" class="jspbook.pr35.LectureBean" />
<jsp:setProperty name="lec" property="*" />
<jsp:useBean id="lm" class="jspbook.pr35.LectureManager" scope="application" />

<%
	lm.add(lec);
%>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>시간표 작성</title>
</head>
<body>
<% 
	String[] typeNames = {"전공필수", "전공선택", "교양", "자유선택"};
	String[] titleNames = {"웹프로그래밍", "운영체제", "소프트웨어프로그래밍", "데이터베이스개론", "자료구조", "네트워크", "창의와감성", "사회봉사" };
	String[] days = {"월", "화", "수", "목", "금"};
%>
<div align="center">
	<form name="frm1" action="practice35.jsp" method="POST">
		과목타입 : 
		<select name="lectureType">
			<%
				for (int i = 0; i < 4; i++)
					out.print("<option value=" + i + ">" + typeNames[i] + "</option>");
			%>
		</select>
		과목명 : 
		<select name="lectureTitle">
			<%
				for (int i = 0; i < 8; i++)
					out.print("<option value=" + i + ">" + titleNames[i] + "</option>");
			%>
		</select>
		요일 :
		<select name="days">
			<%
				for (int i = 0; i < 5; i++)
					out.print("<option value=" + i + ">" + days[i] + "</option>");
			%>
		</select>
		시간 :
		<select name="time">
			<%
				for (int i = 1; i <= 6; i++)
					out.print("<option value=" + i + ">" + i + "</option>");
			%>
		</select>
		연강여부 :
		<select name="consecutive">
			<%
				for (int i = 1; i <= 6; i++)
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
		
		if (!(type == null || title == null || day == null)) {
			lec.setType(Integer.parseInt(type));
			lec.setTitle(Integer.parseInt(title));
			lec.setDay(Integer.parseInt(day));
		}
		
		for (LectureBean lb : lm.getLectureList()) {
			if (lb.getTime() != 0)
				out.println(lb.toString() + "<br>");
		}
		%>
	</form>
</div>
</body>
</html>