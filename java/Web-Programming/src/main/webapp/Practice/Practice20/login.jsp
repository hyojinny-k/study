<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>login</title>
   <style>
       table { text-align: center; font-size:25px; font-weight:bold; width:100%; border-top:1px solid black }
       caption { font-weight:bold; font-size:30px; padding-bottom:30px; }
       input.logo { text-ailgn: center; vertical-align:top; width:530px; }
       input.button { font-size:25px; width:120px;  }
       tr { text-align:left; }
       form { text-align: center; }
   </style>
</head>
<body>
<form name="frm1" action="result.jsp" method="post">
    <input type=image src="image/eclass_title.jpg" style="width:90%">
    <table>
        <caption>로그인</caption>
        <tr>
            <th rowspan="5" align="center"><input type=image src="image/eclass_logo.png" class="logo"></th>
            <th colspan="2" style="vertical-align:top; padding-top:20px; width: 580px; height:50px;">회원님의 아이디와 비밀번호를 정확히 입력하세요.</th>
        </tr>
        <tr>
            <td></td>
            <td>
                <select name="type" style="font-size:25px; width:50xpx;">
                    <option value="학부생">학부생</option>
                    <option value="대학원생">대학원생</option>
                    <option value="교직원">교직원</option>
                </select>
            </td>
        </tr>
        <tr>
            <td style="width:140px;">아이디</td>
            <td><input type="text" name="strId" style="background-color:#ffff99; width:300px; height:30px;"></td>
        </tr>
        <tr>
            <td style="width:140px;">비밀번호</td>
            <td><input type="text" name="strPwd" style="background-color:#ffff99; width:300px; height:30px;"></td>
        </tr>
        <tr>
            <td colspan="2">
                <input type="submit" value="로그인" class="button"> 
                <input type="button" value="가입하기" class="button">
            </td>
        </tr>
    </table>
</form>
</body>