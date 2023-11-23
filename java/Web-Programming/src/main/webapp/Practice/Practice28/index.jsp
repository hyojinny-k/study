<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>index</title>
<style>
	td {
		padding-left: 50px;
	}
</style>
</head>
<body>
<div align="center">
	<h1 align="center">Alice in Wonderland</h1>
	<table>
		<tr>
			<td><jsp:include page="viewer.jsp" /></td>
			<td width="500px"><jsp:include page="login.jsp" /></td>
		</tr>
	</table>
</div>
</body>
</html>													
