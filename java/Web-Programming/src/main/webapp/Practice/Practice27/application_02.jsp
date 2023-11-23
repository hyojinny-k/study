<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Application Object: 02</title>
</head>
<%
	request.setCharacterEncoding("UTF-8");

	String user = request.getParameter("username");
	if (user != null) {
		session.setAttribute("username", user);
	}
%>
<body>
<% 
	session.setMaxInactiveInterval(Integer.parseInt(request.getParameter("time")));
%>
<%= session.getAttribute("username") %>님 환영합니다.<br><br>
세션 ID : <%= session.getId() %><br>
세션 지속시간 : <%= session.getMaxInactiveInterval() %>초<br><br>
<%
	Integer count = (Integer) application.getAttribute("count");
	if (count == null) {
		Integer cnt = 0;
		count = cnt;
	}
	count++;
	application.setAttribute("count", count);
	
	out.println("오늘의 접속자수 : " + count);
%>
</body>
</html>