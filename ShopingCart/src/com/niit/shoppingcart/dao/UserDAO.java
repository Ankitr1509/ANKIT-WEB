package com.niit.shoppingcart.dao;

public class UserDAO 
{

	public boolean isValidCredentials(String userID, String password) {
		// TODO Auto-generated method stub
		if(userID.equals("NIIT") && password.equals("NIIT@123")) 
		{
			return true;
		}
		else {
		return false;
		}
	}
	
}
