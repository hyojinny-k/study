<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR" import="java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Practice 14</title>
</head>
<body style="font-family: '굴림'">
<% 
	Calendar cal = Calendar.getInstance();
	int year = cal.get(Calendar.YEAR);
	int month = cal.get(Calendar.MONTH) + 1;
	int date = cal.get(Calendar.DATE);
	int day = cal.get(Calendar.DAY_OF_WEEK);
	int start = cal.getMinimum(Calendar.DATE);
	int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
	char printDay = ' ';
	
	switch(day) {
	case 1 : 
		printDay = '일';
		break;
	case 2 :
		printDay= '월';
		break;
	case 3 :
		printDay= '화';
		break;
	case 4 :
		printDay= '수';
		break;
	case 5 :
		printDay= '목';
		break;
	case 6 :
		printDay= '금';
		break;
	case 7 :
		printDay= '토';
		break;
	}
	
	out.print("오늘은 " + year + "년 " + month + "월 " + date + "일 " + printDay + "요일입니다.<br><br>");
	out.print("이번 달은 " + start + "일부터 시작하여 " + end + "일에 끝납니다.<br><br>");
	
	cal.set(1998, Calendar.FEBRUARY, 14);
	year = cal.get(Calendar.YEAR);
	month = cal.get(Calendar.MONTH) + 1;
	date = cal.get(Calendar.DATE);
	day = cal.get(Calendar.DAY_OF_WEEK);
	
	switch(day) {
	case 1 : 
		printDay = '일';
		break;
	case 2 :
		printDay= '월';
		break;
	case 3 :
		printDay= '화';
		break;
	case 4 :
		printDay= '수';
		break;
	case 5 :
		printDay= '목';
		break;
	case 6 :
		printDay= '금';
		break;
	case 7 :
		printDay= '토';
		break;
	}
	
	out.print("내 생일 " + year + "년 " + month + "월 " + date + "일은 " + printDay + "요일입니다.</br>");
%>
</body>
</html>