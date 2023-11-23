<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<% request.setCharacterEncoding("UTF-8"); %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	String[] hobbyNames = {"뉴스", "맛집", "책", "영화", "여행"};
	String[] telCompany = {"010", "011", "017", "070"};
	String[] gNames = {"남", "여"};
	pageContext.setAttribute("hobbyNames", hobbyNames);
	pageContext.setAttribute("telCompany", telCompany);
	pageContext.setAttribute("gNames", gNames);
%>
	
id : ${param.id}<br>
pw : ${param.pw}<br>
gender : ${param.gender}<br>
phone1 : ${param.phone1}<br>
phone2 : ${param.phone2}<br>
phone3 : ${param.phone3}<br>
email : ${param.email}<br>
birth : ${param.birth}<br>
hobby :
<c:forEach var="hobby" items="${paramValues.hobby}">
	<c:out value="${hobby}/"/>
</c:forEach>
<br>
memo : ${param.memo}<br>
<hr>

<h1>Processing Parameters</h1>
id : ${param.id}<br>
pw : ${param.pw}<br>
gender :
<c:set var="gender" value="${param.gender}" />
${gNames[gender]}<br>
phone1 :
<c:set var="phone1" value="${param.phone1}" />
${telCompany[phone1]}<br>
phone2 : ${param.phone2}<br>
phone3 : ${param.phone3}<br>
email : ${param.email}<br>
birth : ${param.birth}<br>
hobby : 
<c:forEach var="hobby" items="${paramValues.hobby}">
	<c:set var="h" value="${hobby}" />
	${hobbyNames[h]}/
</c:forEach>
<br>
memo : ${param.memo}<br>

</body>
</html>