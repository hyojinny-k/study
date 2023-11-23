package jspbook.pr43;

import java.util.ArrayList;
import java.util.List;

public class AddrManager {
	List<AddrBean> addrlist = new ArrayList<AddrBean>();
	List<AddrBean> addrlist2 = new ArrayList<AddrBean>();
	
	public void add(AddrBean ab) {
		addrlist.add(ab);
	}
	public void add2(AddrBean ab) {
		addrlist2.add(ab);
	}
	
	public List<AddrBean> getAddrList() {
		return addrlist;
	}
	
	public List<AddrBean> getAddrList2() {
		return addrlist2;
	}
	
	public void getGroupAddr() {
		addrlist2.clear();
		
		for (AddrBean ab : addrlist) {
			if (ab.getGroup().equals("가족"))
				add2(ab);
		}
		for (AddrBean ab : addrlist) {
			if (ab.getGroup().equals("친구"))
				add2(ab);
		}
		for (AddrBean ab : addrlist) {
			if (ab.getGroup().equals("직장"))
				add2(ab);
		}
	}
}