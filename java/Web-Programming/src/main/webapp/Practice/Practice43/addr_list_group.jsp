<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="jspbook.pr43. *"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/tml4/loose.dtd">
<jsp:useBean id="am" class="jspbook.pr43.AddrManager" scope="application" />

<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>주소록 목록(그룹별)</title>
<style>
	table {
		text-align: center;
	}
</style>
</head>
<body>
<div align="center">
<h2>주소록 (그룹별 보기)</h2>
<hr>
<a href="addr_form.jsp">주소추가</a>
<p></p>
<table border=1 width=500>
<tr><td>이름</td><td>전화번호</td><td>이메일</td><td>성별</td><td>그룹</td></tr>

<c:set var="i" value="0" />
<c:set var="rpp" value="2" />
<c:set var="sindex" /><c:set var="allpage" /><c:set var="currentPage" />
<c:set var="startIndex" /><c:set var="lastIndex" />

<c:if test="${am.getAddrList2().size() == 1}">
	<c:set var="allpage" value="1" />
</c:if>
<c:if test="${am.getAddrList2().size() != 1}">	
	<c:set var="allpage" value="${am.getAddrList2().size() + 1}" />
	<c:set var="allpage" value="${allpage / rpp}" />		
</c:if>
<c:if test="${param.sindex == null}" >
	<c:set var="currentPage" value="1" />
</c:if>
<c:if test="${param.sindex != null}" >
	<c:set var="currentPage" value="${param.sindex}" />
</c:if>

<c:set var="startIndex" value="${currentPage - 1}" />
<c:set var="startIndex" value="${startIndex * rpp}" />
<c:set var="lastIndex" value="${startIndex + rpp - 1}" />

<c:forEach var="ab" varStatus="i" items="${am.getAddrList2()}">
	<c:if test="${i.count-1 >= startIndex && i.count-1 <= lastIndex}">
		<tr>
		<td>${ab.getUsername()}</td>
		<td>${ab.getTel()}</td>
		<td>${ab.getEmail()}</td>
		<td>${ab.getGender()}</td>
		<td>${ab.getGroup()}</td>
		</tr>
	</c:if>
</c:forEach>
</table>

<c:forEach var="i" begin="1" end="${allpage}">
	<c:if test="${i != currentPage}">
		<a href="addr_list_group.jsp?sindex=${i}">${i}</a>&nbsp;
</c:if>
	<c:if test="${i == currentPage}">
		${i}&nbsp;
	</c:if>
</c:forEach>
</div>
</body>
</html>