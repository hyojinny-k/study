<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화되어 있습니다. --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<%
	String task1 = request.getParameter("TASK1");
	String task2 = request.getParameter("TASK2");
	
	if (task1 == null)
		task1 = "일정 없음";
	if (task2 == null)
		task2 = "일정 없음";
	
	out.print("<h1>오늘의 일정</h1><hr>");
	out.print("1. " + task1 + "<br>");
	out.print("2. " + task2 + "<br>");

%>
</body>
</html>