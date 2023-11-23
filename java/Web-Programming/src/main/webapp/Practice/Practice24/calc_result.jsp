<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Enumeration" %>
<% request.setCharacterEncoding("UTF-8"); %>
<%!
	public int result(String n1, String param, String n2) {
		if (param.equals("+"))
			return Integer.parseInt(n1) + Integer.parseInt(n2);
		else if (param.equals("-"))
			return Integer.parseInt(n1) - Integer.parseInt(n2);
		else if (param.equals("*"))
			return Integer.parseInt(n1) * Integer.parseInt(n2);
		else if (param.equals("/") && !n2.equals("0"))
			return Integer.parseInt(n1) / Integer.parseInt(n2);
		else return 1;
	}
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Calculator</title>
</head>
<body>
<form>
	<table style="text-align: center; margin: auto;">
		<tr>
			<td colspan="2"
				style="height: 60px; font-size: 50px; font-weight: lighter; font-style: italic; font-family: 'Times New Roman', Times, serif; text-align: center; background-color: #32ccfe;">
				CalCuLaTor</td>
		</tr>
		<tr>
			<td rowspan="7"
				style="width: 280px; height: auto; border: 1px solid rgb(219, 219, 219)">
				<input type="image" src="img/cal.jpg" style="width: 300px">
			</td>
			<td>&nbsp;</td>
		</tr>
		<tr>
			<td width=200px><input type="text" value=<%=request.getParameter("num1") %> readonly style="width: 100px; text-align: center"></td>
		</tr>
		<tr>
			<td><%=request.getParameter("param") %></td>
		</tr>
		<tr>
			<td><input type="text" value=<%=request.getParameter("num2") %> readonly style="width: 100px; text-align: center"></td>
		</tr>
		<tr><td style="text-align: center">=</td></tr>
		<tr><td>
				<input type="text" value=<%=result(request.getParameter("num1"), request.getParameter("param"), request.getParameter("num2")) %> readonly style="width: 100px; text-align: center"></td></tr>
		<tr><td>&nbsp;</td></tr>
		<tr>
			<td colspan="2"
				style="height: 60px; font-size: 50px; font-weight: lighter; font-style: italic; font-family: 'Times New Roman', Times, serif; text-align: center; background-color: #32ccfe;">
			</td>
		</tr>
	</table>
</form>
</body>
</html>