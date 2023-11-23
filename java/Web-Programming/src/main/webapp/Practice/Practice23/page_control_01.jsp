<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<form method=post action=page_control_02.jsp>
	아이디: <input type="text" name=passwd style="width: 100px">
    비밀번호: <input type="text" name="username" style="width: 100px">
    <input type="submit" value="forward 전송">
</form>
<form method=post action=page_control_03.jsp>
    아이디: <input type="text" name="passwd" style="width: 100px">
    비밀번호: <input type="text" name="username" style="width: 100px">
    <input type="submit" value="sendRedirect 전송">
</form>	
</body>
</html>