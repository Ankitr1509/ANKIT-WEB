package com.niit.training;

import com.niit.training.bean.Customer;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import com.niit.training.bean.Account;

public class Test {
	public static void displayAccountDetails(Account a){
		System.out.println(a.getId());
		System.out.println(a.getName());
		
	}
	
	public static void display(Customer c)
	{
		System.out.println(c.getId());
		System.out.println(c.getName());
		System.out.println(c.getPassword());
		
		List accounts= c.getMyAccounts();
		
		Iterator it= accounts.iterator();
		
		while(it.hasNext()){
			Account a=(Account)  it.next();
			displayAccountDetails(a);
		}
		
	}
	public static void main(String args[]){
		Customer c1= new Customer();
		c1.setId("101");
		c1.setName("Cust1");
		c1.setPassword("NIIT");
		
		Account ac= new Account();
		ac.setId(1001);
		ac.setName("SB");
		//c1.setMyAccount(ac);
		
		List accounts = new ArrayList();          //right click - source - fromat - (To allign)
		accounts.add(ac);  //1
		
		 ac= new Account();
		ac.setId(1002);
		ac.setName("CA");
		accounts.add(ac); //2
		
		c1.setMyAccounts(accounts);
		
		Test.display(c1);
		
		
		
		
		
		
	}

}
