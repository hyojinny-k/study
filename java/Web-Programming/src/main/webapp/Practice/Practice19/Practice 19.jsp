<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화되어 있습니다. --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.Calendar" %>
<%!
	public String parseDay(int cnt, String day) {
		if (cnt % 7 == 6)
			return "<font color=blue>" + day + "</font>";
		else if (cnt % 7 == 0)
			return "<font color=red>" + day + "</font>";
		else
			return day;
	}
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Practice 19</title>
<style>
	h1 {
		text-align: right;
		margin-right: 120px;
		margin-bottom: 30px;
	}
	table {
		font-weight: bold;
		font-family: '굴림';
		font-size: 200%;
		text-align: center;
		border-collapse: collapse;
		width: 90%;
		height: 600px;
		margin: auto;
	}
</style>
</head>
<body>
<%
	Calendar today = Calendar.getInstance();
	int year = today.get(Calendar.YEAR);
	int month = today.get(Calendar.MONTH);
	int date = today.get(Calendar.DATE);
	
	out.print("<h1>" + year + "-" + (month + 1) + "-" + date + "</h1>");
	
	Calendar cal = Calendar.getInstance();
	cal.set(year, month, 1);
	int startDay = cal.get(Calendar.DAY_OF_WEEK);
	
	int i = 0, j = 1, cnt = 0;
 
	out.print("<table border=2;>");
	out.print("<tr>");
	out.print("<td>" + parseDay(cnt, "일") + "</td>");
	out.print("<td>" + parseDay(++cnt, "월") + "</td>");
	out.print("<td>" + parseDay(++cnt, "화") + "</td>");
	out.print("<td>" + parseDay(++cnt, "수") + "</td>");
	out.print("<td>" + parseDay(++cnt, "목") + "</td>");
	out.print("<td>" + parseDay(++cnt, "금") + "</td>");
	out.print("<td>" + parseDay(++cnt, "토") + "</td>");
	out.print("</tr>");
	out.print("<tr>");
 
	for (i = 0; i < startDay - 1; i++) {
		out.print("<td>&nbsp;</td>");
		cnt++;
	}
 
	while (j <= cal.getActualMaximum(Calendar.DAY_OF_MONTH)) {
		out.print("<td>" + parseDay(++cnt, Integer.toString(j++)) + "</td>");
		if (cnt % 7 == 6)
			out.print("</tr><tr>");
	}
	
	while (++cnt % 7 != 6)
		out.print("<td>&nbsp;</td>");
%>
</body>
</html>