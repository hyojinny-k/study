<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<div align="center">
	<%
		request.setCharacterEncoding("UTF-8");
		String name = request.getParameter("name");
		String phone = request.getParameter("phone");
		
		ArrayList<String> book = (ArrayList<String>)session.getAttribute("addrbook");
		
		if (book == null) {
			book = new ArrayList<String>();
			application.setAttribute("addrbook", book);
		}
		
		book.add(name + ", " + phone);
		session.setAttribute("addrbook", book);	 
	%>
	<h1 style="text-align: center">주소록</h1>
	<hr>
</div>
<div align="center">
	<%
		int i = 0;
		for (String b : book) {
			out.println(++i + ". " + b + "<br>");
		}
	%>
</div>
</body>
</html>