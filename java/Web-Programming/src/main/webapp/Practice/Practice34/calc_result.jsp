<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Enumeration" %>
<% request.setCharacterEncoding("UTF-8"); %>
<jsp:useBean id="calc" class="jspbook.pr34.Calculator" scope="page" />
<jsp:setProperty name="calc" property="*" />

<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>calc_result.jsp</title>
</head>
<body>
<%
calc.setOp1(Integer.parseInt(request.getParameter("num1")));
calc.setOp2(Integer.parseInt(request.getParameter("num2")));
calc.setOperator(request.getParameter("param"));
%>
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
			<td width=200px><input type="text" value=<%=calc.getOp1() %> readonly style="width: 100px; text-align: center"></td>
		</tr>
		<tr>
			<td><%=calc.getOperator() %></td>
		</tr>
		<tr>
			<td><input type="text" value=<%=calc.getOp2() %> readonly style="width: 100px; text-align: center"></td>
		</tr>
		<tr><td style="text-align: center">=</td></tr>
		<tr><td>
				<input type="text" value=<%=calc.calc() %> readonly style="width: 100px; text-align: center"></td></tr>
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