<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="ch07. *"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/tml4/loose.dtd">
<jsp:useBean id="am" class="ch07.AddrManager" scope="application" />

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
<%
	for (AddrBean ab : am.getAddrList()) {
		if (ab.getGroup().equals("가족")) {
%>
		<tr>
		<td><%=ab.getUsername() %></td>
		<td><%=ab.getTel() %></td>
		<td><%=ab.getEmail() %></td>
		<td><%=ab.getGender() %></td>
		<td><%=ab.getGroup() %></td>
		</tr>	
<%
		}
	}
%>
<%
	for (AddrBean ab : am.getAddrList()) {
		if (ab.getGroup().equals("친구")) {
%>
		<tr>
		<td><%=ab.getUsername() %></td>
		<td><%=ab.getTel() %></td>
		<td><%=ab.getEmail() %></td>
		<td><%=ab.getGender() %></td>
		<td><%=ab.getGroup() %></td>
		</tr>	
<%
		}
	}
%>
<%
	for (AddrBean ab : am.getAddrList()) {
		if (ab.getGroup().equals("직장")) {
%>
		<tr>
		<td><%=ab.getUsername() %></td>
		<td><%=ab.getTel() %></td>
		<td><%=ab.getEmail() %></td>
		<td><%=ab.getGender() %></td>
		<td><%=ab.getGroup() %></td>
		</tr>	
<%
		}
	}
%>
</table>
</div>
</body>
</html>