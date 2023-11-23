<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>calendar</title>
<style>
	table {
		text-align: center;
		font-family: '굴림';
		font-weight: bold;
		width: 250px;
		height: 180px;
		border-collapse: collapse;
	}
</style>
</head>
<body>
<div align="center" >
<table border="1">
<tr>
<td><font color="red">일</font></td>
<td>월</td>
<td>화</td>
<td>수</td>
<td>목</td>
<td>금</td>
<td><font color="blue">토</font></td>
</tr>
<%
	for (int i = 0; i < 4; i++) {
		out.println("<tr>");
		for (int j = 0; j < 7; j++)
			out.println("<td>" + "&nbsp;"  + "</td>");
		out.println("</tr>");
	}
%>
</table>
</div> 
</body>
</html>