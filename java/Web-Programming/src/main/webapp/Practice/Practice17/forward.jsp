<%-- ��ǻ���а� 20210777 ��ȿ�� --%>
<%-- ũ�� �������� ����ȭ�� �����Դϴ� --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>forward action</title>
</head>
<body>
<jsp:include page="greeting.jsp">
	<jsp:param name="name" value="Dongduk University" />
	<jsp:param name="date" value="2011/04/05" />
</jsp:include>
</body>
</html>