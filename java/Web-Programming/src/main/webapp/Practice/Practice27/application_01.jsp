<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Application Object: 01</title>
</head>
<body>
<form name="form1" method="post" action="application_02.jsp">
	<table>
	<tr>
		<td align=left>아이디 : </td>
		<td></td>
		<td><input type="text" name="username" /></td>
	</tr>
	<tr>
		<td colspan=2>원하는 세션 지속시간 (분) : </td><td><input type="text" name="time" /></td>
	</tr>
	<tr>
		<td colspan=3>&nbsp;</td>
	</tr>
	<tr>
		<td><input type="submit" value="로그인" /></td>
		<td style="padding-right:100px"><input type="reset" value="취소" /></td>
		<td></td>
	</tr>
	</table>
</form>
</body>
</html>