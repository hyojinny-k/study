<%-- ��ǻ���а� 20210777 ��ȿ�� --%>
<%-- ũ�� �������� ����ȭ�Ǿ� �ֽ��ϴ�. --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
</head>
<body>
<%
	String task1 = request.getParameter("TASK1");
	String task2 = request.getParameter("TASK2");
	
	if (task1 == null)
		task1 = "���� ����";
	if (task2 == null)
		task2 = "���� ����";
	
	out.print("<h1>������ ����</h1><hr>");
	out.print("1. " + task1 + "<br>");
	out.print("2. " + task2 + "<br>");

%>
</body>
</html>