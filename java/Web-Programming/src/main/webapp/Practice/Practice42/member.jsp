<%-- 컴퓨터학과 20210777 김효진 --%>
<%-- 크롬 브라우저에 최적화된 문서입니다 --%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <style>
       table { margin:auto; border-collapse: collapse; border:1px solid #808080; }
       td { border-collapse: collapse; border:1px solid #808080; text-align:left; }
       th { border-collapse: collapse; border:1px solid #808080; text-align:center; }
       input { border:1px solid #a9a9a9; border-radius:0; height:18px; }
       input.imageAlign { vertical-align:middle; border:0px; height:22px; }
       form { text-align:center; }
    </style>
</head>
<body>
    <form action="register.jsp" method="post">
    	<input type=image src="image/eclass_title.jpg" style="border:0; width:90%; height:auto;">
        <table>
        <tr>
        	<th align="center" colspan="2" style="background-color:#ececec; text-align:center"><strong>회원 가입</strong></th>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec; width:65px"><strong>아이디</strong></th>
            <td><input type="text" name="id" style="width: 115px"> <input type=image src="image/check.gif" class="imageAlign"></td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>패스워드</strong></th>
            <td><input type="text" name="pw" style="width: 115px"></td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>성별</strong></th>
            <td>
                <input type="radio" name="gender" value=0>남
                <input type="radio" name="gender" value=1 checked>여
            </td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>국적</strong></th>
            <td><input type="text" readonly value="대한민국" style="width: 170px"> <input type="text" disabled value="국적변경" style="width:60px; text-align:center; background-color:#ececec"></td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>휴대폰</strong></th>
            <td>
                <select name="phone1">
                    <option value=0 selected>010</option>
                    <option value=1>011</option>
                    <option value=2>017</option>
                    <option value=3>070</option>
                    <option value=4>080</option>
                </select>
                -
            <input type="text" name="phone2" maxlength="4" style="width: 55px">
            -
            <input type="text" name="phone3" maxlength="4" style="width: 55px">
            </td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>이메일</strong></th>
            <td><input type="text" name="email" style="width: 310px"></td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>생일</strong></th>
            <td><input type="date" name="birth" style="width: 130px"></td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>관심분야</strong></th>
            <td>
                <input type="checkbox" name="hobby" value=0>뉴스
                <input type="checkbox" name="hobby" value=1 checked>맛집
                <input type="checkbox" name="hobby" value=2>책
                <input type="checkbox" name="hobby" value=3>영화
                <input type="checkbox" name="hobby" value=4>여행
            </td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec"><strong>가입인사</strong></th>
            <td>
                <textarea cols="55" rows="5" name="memo" style="border-radius:0; border-color:#a9a9a9">회원들에게 간단한 가입인사를 남겨주세요</textarea>
            </td>
        </tr>
        <tr>
            <th align="center" style="background-color:#ececec;"><strong>증명사진</strong></th>
            <td><input type="file" value="파일 선택" style="border:0; height:24px"></td>
        </tr>
        <tr>
            <th colspan="2" align="center" style="background-color:#ececec;">
                <input type="submit" value="가입하기" style="height:23px;">
                <input type="reset" value="다시작성" style="height:23px;">
            </th>
        </tr>
        </table>
    </form>
</body>
</html>