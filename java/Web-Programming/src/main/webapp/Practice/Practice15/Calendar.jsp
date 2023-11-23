<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR" import="java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Calendar</title>
</head>
<body>
	<% 
		int i, temp = 0;
		int year = 2022;
		int month = 10;
		int day;
		int end;

		Calendar cal = Calendar.getInstance();
		cal.set(year, month - 1, 1);
		day = cal.get(Calendar.DAY_OF_WEEK);
		end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);

		out.print("<h2>" + year + "년 " + month + "월</h2><hr>");
		
		for (i = 0; i < day - 1; i++) {
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