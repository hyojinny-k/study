<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
<title>Calculator</title>
</head>
<body>
<form name="frm1" action="calc_result.jsp" method="post">
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
			<td width="200px"><input type="text" value="0" name="num1" style="width: 100px; text-align: center"></td>
		</tr>
		<tr>
			<td>
			<select name="param">
				<option value="+">+</option>
				<option value="-">-</option>
				<option value="*">*</option>
				<option value="/">/</option>
			</select>
			</td>
		</tr>
		<tr>
			<td><input type="text" value="0" name="num2" 
			style="width: 100px; text-align: center"></td>
		</tr>
		<tr><td><input type="submit" value="=" class="button"></td></tr>
		<tr><td><input type="text" value=&nbsp; disabled style="width: 100px"></td></tr>
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