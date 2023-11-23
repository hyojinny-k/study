<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr33.*" %>
<!DOCTYPE html>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="login" class="jspbook.pr33.LoginBeam" scope="page" />
<jsp:setProperty name="login" property="*" />

<html>
<head>
<meta charset="UTF-8">
<title>등록내용</title>
</head>
<body>
<div align=center>
<h2>등록내용</h2>
이름 : <jsp:getProperty property="id" name="login" /><p>
패스워드 : <%=login.getPw() %><p>
이메일 : <%=login.getEmail() %><p>
성별 : <%=login.getGender() %><p>
생일 : <%=login.getBirth() %>
<hr>
김동덕씨는
<%
if (login.getGender() == 1)
	out.print(" 여성이고, ");
else
	out.print(" 남성이고, ");
if (login.isGrouwnUp() == true)
	out.print("성인입니다.");
else
	out.print("성인이 아닙니다.");
%>
</div>
</body>
</html>