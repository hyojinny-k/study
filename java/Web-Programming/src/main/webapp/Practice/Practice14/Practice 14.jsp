<%-- ��ǻ���а� 20210777 ��ȿ�� --%>
<%-- ũ�� �������� ����ȭ�� �����Դϴ� --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR" import="java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Practice 14</title>
</head>
<body style="font-family: '����'">
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
		printDay = '��';
		break;
	case 2 :
		printDay= '��';
		break;
	case 3 :
		printDay= 'ȭ';
		break;
	case 4 :
		printDay= '��';
		break;
	case 5 :
		printDay= '��';
		break;
	case 6 :
		printDay= '��';
		break;
	case 7 :
		printDay= '��';
		break;
	}
	
	out.print("������ " + year + "�� " + month + "�� " + date + "�� " + printDay + "�����Դϴ�.<br><br>");
	out.print("�̹� ���� " + start + "�Ϻ��� �����Ͽ� " + end + "�Ͽ� �����ϴ�.<br><br>");
	
	cal.set(1998, Calendar.FEBRUARY, 14);
	year = cal.get(Calendar.YEAR);
	month = cal.get(Calendar.MONTH) + 1;
	date = cal.get(Calendar.DATE);
	day = cal.get(Calendar.DAY_OF_WEEK);
	
	switch(day) {
	case 1 : 
		printDay = '��';
		break;
	case 2 :
		printDay= '��';
		break;
	case 3 :
		printDay= 'ȭ';
		break;
	case 4 :
		printDay= '��';
		break;
	case 5 :
		printDay= '��';
		break;
	case 6 :
		printDay= '��';
		break;
	case 7 :
		printDay= '��';
		break;
	}
	
	out.print("�� ���� " + year + "�� " + month + "�� " + date + "���� " + printDay + "�����Դϴ�.</br>");
%>
</body>
</html>