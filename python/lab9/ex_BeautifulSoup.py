#!/usr/bin/python3
import urllib.request, urllib.parse, urllib.error, requests
from bs4 import BeautifulSoup

url = input('Enter - ') #http://www.dr-chuck.com/page1.htm
page = requests.get(url)
soup = BeautifulSoup(page.content, 'html.parser', from_encoding='utf-8')

tags = soup('a')
for tag in tags:
    print(tag.get('href', None)) #http://www.dr-chuck.com/page2.htm