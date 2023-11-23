<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>login</title>
</head>
<body>
<%
	request.setCharacterEncoding("UTF-8");
	String id = (String)session.getAttribute("user");
	if (id == null) {
		out.print("<div align=left>");
			out.print("<form name='frm1' method='POST' action='checker.jsp'>");
				out.println("아이디 : <input type='text' name='id'><br><br>");
				out.println("패스워드 : <input type='text' name='pw'><br><br>");
				out.println("<input type='submit' value='로그인'>");
				out.println("<input type='hidden' name='action' value='login'>");
			out.print("</form>");
		out.print("</div>");
	}
	else {
		out.println(id + "님 환영합니다.<br><br>");
		out.println("<form name='frm2' method='POST' action='checker.jsp'>");
		out.println("<input type='submit' value='로그아웃'>");
		out.println("<input type='hidden' name='action' value='logout'>");
	}
%>
</body>
</html>