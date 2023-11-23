<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ tag language="java" pageEncoding="UTF-8"%>

<style>
	font {
		font-size: 25px;
		font-family: '굴림';
		font-weight: bold;
		margin-top: 20px;
	}
	hr {
		margin-top: 20px;
	}
	table {
		width: 500px;
		height: 450px;
	}
	td {
		padding-left: 15px;
	}
</style>

<font>구구단 출력</font>
<hr>
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