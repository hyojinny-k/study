<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*" %>
<% request.setCharacterEncoding("UTF-8"); %>
<%!
	String[] mChoices = {"hobby"};
	String[] hobbyNames = {"뉴스", "맛집", "책", "영화", "여행"};
	String[] telCompany = {"010", "011", "017", "070"};
	String[] gNames = {"남", "여"};
	
	ArrayList<String> getParameterNames(HttpServletRequest request) {
		Enumeration<String> e = request.getParameterNames();
		ArrayList<String> s = new ArrayList<>();
		while (e.hasMoreElements())
			s.add(e.nextElement());
		return s;
	}

	boolean isMultipleChoice(String paramName) {
		for (int i = 0; i < mChoices.length; i++)
			if (paramName.equals(mChoices[i]))
				return true;
		return false;
	}
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
	Enumeration<String> e1 = request.getParameterNames();
	while (e1.hasMoreElements()) {
		String s = e1.nextElement();
		out.print(s + " : ");
		if (isMultipleChoice(s)) {
			String vs[] = request.getParameterValues(s);
			for (String v: vs)
				out.print(v + "/");
			out.print("<br>");
		}
		else
			out.print(request.getParameter(s) + "<br>");
	}
	out.print("<hr><br>");
	
	out.print("<h1>Processing Parameters</h1><br>");
	Enumeration<String> e2 = request.getParameterNames();
	while (e2.hasMoreElements()) {
		String s = e2.nextElement();
		out.print(s + " : ");
		if (isMultipleChoice(s)) {
			String vs[] = request.getParameterValues(s);
			for (String v: vs)
				out.print(hobbyNames[Integer.parseInt(v)] + "/");
			out.print("<br>");
		}
		else if (s.equals("gender")) {
			String vs[] = request.getParameterValues(s);
			for (String v: vs)
				out.print(gNames[Integer.parseInt(v)]);
			out.print("<br>");
		}
		else if (s.equals("phone1")) {
			String vs[] = request.getParameterValues(s);
			for (String v: vs)
				out.print(telCompany[Integer.parseInt(v)]);
			out.print("<br>");
		}
		else
			out.print(request.getParameter(s) + "<br>");
	}
%>
</body>
</html>