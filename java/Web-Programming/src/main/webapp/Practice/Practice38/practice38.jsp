<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
pageEncoding="UTF-8" import="jspbook.pr38.*" %>
<!DOCTYPE html>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="login" class="jspbook.pr38.LoginBean" />
<jsp:setProperty name="login" property="*" />
<%@ taglib tagdir="/WEB-INF/tags" prefix="ddwutag" %>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 38</title>
</head>
<body>
<div align="center">
	<ddwutag:printTable brd = "2" color="pink"><h1>회원정보</h1></ddwutag:printTable>
</div>
</body>
</html>