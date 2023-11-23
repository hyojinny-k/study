<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>greeting message</title>
</head>
<body>
<h3>greeting.jsp에서 출력한 메시지입니다.</h3>
<p></p>
<%
	out.println(request.getParameter("name") + "님 환영합니다.<br>");
	out.println("오늘은 " + request.getParameter("date") + "입니다.");
%>
</body>
</html>