<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화되어 있습니다. --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR" import="java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<%
	Calendar cal = Calendar.getInstance();

	int i, year_int, month_int, temp = 0;
	String year_str = request.getParameter("YEAR");
	String month_str = request.getParameter("MONTH");
	
	if (year_str == null || month_str == null) {
		year_int = cal.get(Calendar.YEAR);
		month_int = cal.get(Calendar.MONTH);
		cal.set(year_int, month_int, 1);
	}
	else {
		year_int = Integer.parseInt(year_str);
		month_int = Integer.parseInt(month_str) - 1;
		cal.set(year_int, month_int, 1);
	}
	
	int startDay = cal.get(Calendar.DAY_OF_WEEK);
	int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
	
	out.print("<h2>" + year_int + "년 " + (month_int + 1) + "월</h2><hr>");
	
	for (i = 0; i < startDay - 1; i++) {
		out.print("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;");
		temp++;
	}
	
	for (i = 1; i <= end; i++) {
		out.print(i + "&nbsp;&nbsp;&nbsp;&nbsp;");
		if (++temp % 7 == 0)
			out.print("<br>");
	}
%>
</body>
</html>