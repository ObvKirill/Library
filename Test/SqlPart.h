#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;



ref class SqlPart

{
public:
	//Connect
	SqlPart();
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStringBuilder;
	void ConnectToDB();
	//Insert
	bool Check(String^ Check);
	void Insert(SqlPart^ n);
	bool Checker(SqlPart^ n);
	bool Checker1(String^ line);
	bool Checker2(String^ line);
	//Select
	static int^ ID;
	static String^ Title;
	static String^ Author;
	static String^ Publisher;
	static String^ Year;
	static String^ Section;
	static String^ Rating;
	static String^ Aviable;
	ListBox::ObjectCollection^ DB();
	
	//DELETE
	void Delete(SqlPart^ n);
	bool CheckerD(String^ o);
	void DeleteAll();
	void DeleteByTitle(SqlPart^ n);
	void DeleteByPublisher(SqlPart^ n);
	void DeleteByYear(SqlPart^ n);
	void DeleteBySection(SqlPart^ n);
	void DeleteByRating(SqlPart^ n);
	void DeleteByAviable(SqlPart^ n);
	bool CheckDelete(String^ check);
	bool CheckDeletePublisher(String^ check);
	bool CheckDeleteYear(String^ check);
	bool CheckDeleteSection(String^ check);
	bool CheckDeleteRaing(String^ check);
	bool CheckDeleteAviable(String^ check);
	
	



	//Find
	ListBox::ObjectCollection^ FindByTitle(String^ Title);
	ListBox::ObjectCollection^ FindByAuthor(String^ Author);
	ListBox::ObjectCollection^ FindByPublisher(String^ Publisher);
	ListBox::ObjectCollection^ FindByYear(String^ Year);
	ListBox::ObjectCollection^ FindBySection(String^ Section);
	ListBox::ObjectCollection^ FindByRating(String^ Rating);
	ListBox::ObjectCollection^ FindByAviable(String^ Aviable);
	ListBox::ObjectCollection^ FindByID(String^ ID);
	ListBox::ObjectCollection^ FindByAdv1(String^ Year1, String^ Year2);
	ListBox::ObjectCollection^ FindByAdv2(String^ Year1, String^ Year2);
	bool Defense(String^ line1, String^ line2);

	
	

	


























	static property String^ Title1
	{
		String^ get()
		{
			return Title;
		}
		void set(String^ value)
		{
			Title = value;
		}
	}  

	static property String^ Author1
	{
		String^ get()
		{
			return Author;
		}
		void set(String^ value)
		{
			Author = value;
		}
	}
	static property String^ Publisher1
	{
		String^ get()
		{
			return Publisher;
		}
		void set(String^ value)
		{
			Publisher = value;
		}
	}
	static property String^ Year1
	{
		String^ get()
		{
			return Year;
		}
		void set(String^ value)
		{
			Year = value;
		}
	}
	static property String^ Section1
	{
		String^ get()
		{
			return Section;
		}
		void set(String^ value)
		{
			Section = value;
		}
	}
	static property String^ Rating1
	{
		String^ get()
		{
			return Rating;
		}
		void set(String^ value)
		{
			Rating = value;
		}
	}
	static property String^ Aviable1
	{
		String^ get()
		{
			return Aviable;
		}
		void set(String^ value)
		{
			Aviable = value;
		}
	}

	static property int^ ID1
	{
		int^ get()
		{
			return ID;
		}
		void set(int^ value)
		{
			ID = value;
		}
	}


	



	


	
};

