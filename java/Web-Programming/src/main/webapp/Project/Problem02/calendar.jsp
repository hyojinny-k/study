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
	.t1 {
		font-weight: bold;
		font-family: '굴림';
		font-size: 150%;
		width: 1500px;
		height: 100px;
		margin: auto;
	}
	.t2 {
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
	String sYear = request.getParameter("YEAR");
	
	int year, month, date;
	Calendar today = Calendar.getInstance();
	date = today.get(Calendar.DATE);
	
	if (sYear == null) {
		year = today.get(Calendar.YEAR);
		month = today.get(Calendar.MONTH);
	}
	else {
		year = Integer.parseInt(sYear);
		String sMonth = request.getParameter("MONTH");
		month = Integer.parseInt(sMonth);
	}

	Calendar cal = Calendar.getInstance();
	cal.set(year, month, 1);
	int startDay = cal.get(Calendar.DAY_OF_WEEK);
	
	int i = 0, j = 1, cnt = 0;
 
	out.print("<table class='t1'><tr>");
	
	out.print("<td align=left width=500px>");
	out.print("<a href=\"calendar.jsp?YEAR=" + (year - 1));
	out.println("&MONTH=" + month + "\">" + "◀</a>");
	out.print(year + "년 ");
	out.print("<a href=\"calendar.jsp?YEAR=" + (year + 1));
	out.println("&MONTH=" + month + "\">" + "▶</a></td>");
	
	out.print("<td align=center width=500px>");
	if ((month + 1) != 1) {
		out.print("<a href=\"calendar.jsp?YEAR=" + year);
		out.println("&MONTH=" + (month - 1) + "\">" + "◀</a>");
	}
	else
		out.print("◀ ");
	out.print((month + 1) + "월 ");
	if ((month + 1) != 12) {
		out.print("<a href=\"calendar.jsp?YEAR=" + year);
		out.println("&MONTH=" + (month + 1) + "\">" + "▶</a></td>");
	}
	else
		out.print("▶");
	
	out.print("<td align=right width=500px>" + today.get(Calendar.YEAR) + "-" + (today.get(Calendar.MONTH) + 1) + "-" + date + "</td></tr></table>");
	
	out.print("<table class='t2'; border=2;>");
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