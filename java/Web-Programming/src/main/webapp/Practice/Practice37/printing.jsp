<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib tagdir="/WEB-INF/tags" prefix="ddwutag" %>    
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Custom Tags</title>
</head>
<body>
<%
	request.setCharacterEncoding("UTF-8");
	String name = request.getParameter("username");
	if (name != null) {
		session.setAttribute("username", name);
	}
	
	String n = (String)session.getAttribute("username");
%>
<ddwutag:greeting color="pink" name="<%=n %>"/>
<ddwutag:greeting color="green" name="<%=n %>"/>
</body>
</html>