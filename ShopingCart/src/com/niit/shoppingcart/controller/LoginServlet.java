package com.niit.shoppingcart.controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.niit.shoppingcart.dao.UserDAO;


@WebServlet("/LoginServlet")
public class LoginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	/*protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException 
	{
		
	}*/
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException 
	{
		String userID = request.getParameter("userID"); //Casting - changing types of data to another type [Implicit Casting]
		String password = request.getParameter("password");
		
		UserDAO userDAO = new UserDAO();
		if(userDAO.isValidCredentials(userID, password) == true) 
		{
			RequestDispatcher dispatcher = 	request.getRequestDispatcher("home.html");
			dispatcher.forward(request, response); //foward is for going to next page if the credentials are correct
		}
		else
		{
			PrintWriter out = response.getWriter();
			out.print("Invalid Credentials"); //to include both invalid credentials message and login.html contents we use include method
			
			RequestDispatcher dispatcher = 	request.getRequestDispatcher("login.html");
			
			dispatcher.include(request, response);
		}
	}

}
