<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Enumeration" %>
<% request.setCharacterEncoding("UTF-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%= 
	request.getParameter("src") + "에서 전달된 내용입니다.<br>page_control_04.jsp에서 출력합니다.<br><hr>" 
%>
<%
	out.println("넘겨받은 파라미터들<br>");	
	Enumeration<String> e = request.getParameterNames();
	while (e.hasMoreElements()) {
	String s = e.nextElement();
	out.println(s + " : " + request.getParameter(s) + "<br>");
	}
	out.println("<hr>안녕하세요, " + request.getParameter("username") + "님. 반갑습니다.<hr>");
%>
</body>
</html>