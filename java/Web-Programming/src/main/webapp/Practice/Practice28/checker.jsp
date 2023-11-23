<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>checker</title>
</head>
<body>
<%
	request.setCharacterEncoding("UTF-8");
	if (request.getParameter("action").equals("login")) {
		String id = request.getParameter("id");
		String pw = request.getParameter("pw");
		if (id != null && pw.equals("hatter"))
			request.setAttribute("user", id);
		else
			session.setAttribute("user", id);
		pageContext.forward("index.jsp");
	}
	else if (request.getParameter("action").equals("logout")) {
		session.invalidate();
		response.sendRedirect("index.jsp");
	}
%>
</body>
</html>