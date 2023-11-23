<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr42.*" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="login" class="jspbook.pr42.StudentBean" scope="page" />
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
패스워드 : <c:out value="${login.getPw()}" /><p>
이메일 : <c:out value="${login.getEmail()}" /><p>
성별 : <c:out value="${login.getGender()}" /><p>
생일 : <c:out value="${login.getBirth()}" />
<hr>
김동덕씨는
<c:if test="${login.getGender() == 1}">
	<c:out value="여성이고, " />
</c:if>
<c:if test="${login.getGender() == 0}">
	<c:out value=" 남성이고, " />
</c:if>
<c:set var="dArray" value="${login.getBirth().split('-')}" />
<c:if test="${2022 - dArray[0] >= 19}">
	<c:out value="성인입니다." />
</c:if>
<c:if test="${2022 - dArray[0] < 19}">
	<c:out value="성인이 아닙니다." />
</c:if>
</div>
</body>
</html>