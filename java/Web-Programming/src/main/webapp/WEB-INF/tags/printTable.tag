<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ tag language="java" pageEncoding="UTF-8"%>
<%@ tag body-content = "scriptless" %>

<%@ attribute name="brd"%>
<%@ attribute name="color"%>

<jsp:doBody var="content" scope="page" />
<jsp:useBean id="login" class="jspbook.pr38.LoginBean" />
<jsp:setProperty name="login" property="*" />

<style>
	table {
		text-align: center;
		cellspacing: 1;
		cellpadding: 5;
		width: 300px;
		height: 250px;
	}
</style>

<%= (String)jspContext.getAttribute("content")%>
<table border="${brd}" bgcolor="${color}">
	<tr>
		<td width="100px">이름 :</td>
		<td><%=login.getId() %></td>
	</tr>
	<tr>
		<td>패스워드 :</td>
		<td><%=login.getPw() %></td>
	</tr>
	<tr>
		<td>이메일 :</td>
		<td><%=login.getEmail() %></td>
	</tr>
	<tr>
		<td>성별 :</td>
		<td><%=login.getGender() %></td>
	</tr>
	<tr>
		<td>생일 :</td>
		<td><%=login.getBirth() %></td>
	</tr>
	<tr>
		<td colspan="2">
			<%=login.getId() %>씨는 
			<%
				if (login.getGender() == 1)
					out.print(" 여성이고, ");
				else
					out.print(" 남성이고, ");
				if (login.isGrouwnUp() == true)
					out.print("성인입니다.");
				else
					out.print("성인이 아닙니다.");
			%>
		</td>
	</tr>
</table>