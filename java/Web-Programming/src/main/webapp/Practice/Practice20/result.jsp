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
<%
	out.print("<h1>전달된 파라미터 이름들</h1><br>");

	Enumeration<String> e = request.getParameterNames();
	while (e.hasMoreElements()) {
		String s = e.nextElement();
		out.println(s + "<br>");
	}
	out.print("<hr>");
	out.print("타입 : " + request.getParameter("type") + "<br>");
	out.print("아이디 : " + request.getParameter("strId") + "<br>");
	out.print("패스워드 : " + request.getParameter("strPwd") + "<br>");	
%>
	</body>
</html>