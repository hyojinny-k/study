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
<div align="CENTER">
<h2>Include Action Practice</h2>
<hr>
<table>
	<tr>
		<td>
			<jsp:include page="calendar.jsp">
				<jsp:param name="YEAR" value="2022" />
			</jsp:include>
		</td>
		<td width="20px"></td>
		<td style="font-family: ����">
			<jsp:include page="news.jsp">
				<jsp:param name="TASK2" value="exam" />
			</jsp:include>
		</td>
	</tr>
</table>
</div>
</body>
</html>