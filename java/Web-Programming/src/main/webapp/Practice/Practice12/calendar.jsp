<%-- ��ǻ���а� 20210777 ��ȿ�� --%>
<%-- ũ�� �������� ����ȭ�� �����Դϴ� --%>
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
		font-family: '����';
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
<td><font color="red">��</font></td>
<td>��</td>
<td>ȭ</td>
<td>��</td>
<td>��</td>
<td>��</td>
<td><font color="blue">��</font></td>
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