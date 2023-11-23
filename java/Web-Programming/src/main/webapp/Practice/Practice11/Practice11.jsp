<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화되어 있습니다. --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 11</title>
</head>
<style>
	font {
		font-size: 30px;
		font-family: '굴림';
		font-weight: bold;
	}
	.div1 {
		border-bottom: 1px solid black;
		padding-top: 30px;
		padding-bottom: 30px;
	}
	.div2 {
		padding-top: 10px;
		
	}
	table {
		width: 500px;
		height: 450px;
	}
	td {
		padding-left: 15px;
	}
</style>
<body>
<div align="center" class="div1">
	<font>구구단 출력</font>
</div>
<div align="center" class="div2">
<table border="1">
<%
	for (int i = 0; i < 2; i++) {
		out.println("<tr>");
		for (int j = 0; j < 4; j++) {
			out.println("<td>");
			for (int k = 1; k <= 9; k++)
				out.println((i * 4 + j + 2) + " * " + k + " = " + (i * 4 + j + 2)*k + "</br>");
			out.println("</td>");
		}
		out.println("</tr>");
	}
%>
</table>
</div>
</body>
</html>