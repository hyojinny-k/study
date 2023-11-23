<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>include</title>
</head>
<body>
<div align="center">
<h2>include 지시어 연습</h2>
<hr>
<p>
<table style="width: 600px;">
	<tr>
		<td><font size=-1><%@ include file="calendar.jsp" %></font></td>
		<td>&nbsp;</td>
		<td style="width: 300px"><font size=-1><%@ include file="news.jsp" %></font></td>
	</tr>
</table>
</div>
</body>
</html>