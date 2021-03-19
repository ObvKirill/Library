#include "SqlPart.h"

//Connect

	SqlPart::SqlPart()
	{
	} 


 	void SqlPart::ConnectToDB()
	{
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "PC";
		connStringBuilder->InitialCatalog = "Personal Library";
		connStringBuilder->IntegratedSecurity = true;

		conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
	}
	//Insert
	bool SqlPart::Check(String^ Check)
	{
		try
		{
			ConnectToDB();
			int summ = 0;
			String^ cmdText = "SELECT Title FROM dbo.Library";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			SqlPart^ n = gcnew SqlPart();
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				n->Title = (reader["Title"]->ToString());
				if (n->Title == Check)
				{
					summ++;
				}
			}
			if (summ == 0)
			{
				return true;
			}
			else
			{
				return false;
			}

		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	bool SqlPart::Checker1(String^ line)
	{
		if ((line == "1") || (line == "2") || (line == "3") || (line == "4") || (line == "5") || (line == "6") || (line == "7") || (line == "8") || (line == "9") || (line == "10"))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool SqlPart::Checker2(String^ line)
	{
		if ((line == "Yes") || (line == "No") )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void SqlPart::Insert(SqlPart^ n)
	{
		try
		{
			{
					ConnectToDB();
					ListBox^ list = gcnew ListBox();
					String^ cmdText = "INSERT INTO dbo.Library(Title,Author,Publisher,Year,Section,Rating,Aviable) VALUES (@Inserter,@In,@Ins,@Inse,@Inser,@Insert,@Inserte)";
					SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
					cmd->Parameters->AddWithValue("@Inserter", n->Title);
					cmd->Parameters->AddWithValue("@In", n->Author);
					cmd->Parameters->AddWithValue("@Ins", n->Publisher);
					cmd->Parameters->AddWithValue("@Inse", n->Year);
					cmd->Parameters->AddWithValue("@Inser", n->Section);
					cmd->Parameters->AddWithValue("@Insert", n->Rating);
					cmd->Parameters->AddWithValue("@Inserte", n->Aviable);
					conn->Open();
					cmd->ExecuteNonQuery();
				
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}
			
		}
	}

	bool SqlPart::Checker(SqlPart^ n)
	{
		if (!String::IsNullOrEmpty(n->Title) && !String::IsNullOrEmpty(n->Author) && !String::IsNullOrEmpty(n->Publisher) &&
			!String::IsNullOrEmpty(n->Year) && !String::IsNullOrEmpty(n->Section) && !String::IsNullOrEmpty(n->Rating) && !String::IsNullOrEmpty(n->Aviable)&&!String::IsNullOrWhiteSpace(n->Title)&& !String::IsNullOrWhiteSpace(n->Author) && !String::IsNullOrWhiteSpace(n->Publisher) &&
			!String::IsNullOrWhiteSpace(n->Year) && !String::IsNullOrWhiteSpace(n->Section) && !String::IsNullOrWhiteSpace(n->Rating) && !String::IsNullOrWhiteSpace(n->Aviable))
		{
			return 1;
		}
		else
		{
			return 0;
		}


	} 

//SELECT

	ListBox::ObjectCollection^ SqlPart::DB()
	{

		try
		{
			{
				ConnectToDB();
				ListBox^ list = gcnew ListBox();
				String^ cmdText = "SELECT * FROM dbo.Library";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				SqlPart^ n = gcnew SqlPart();
				conn->Open();
				SqlDataReader^ reader = cmd->ExecuteReader();

				while (reader->Read())
				{
					n->ID = Convert::ToInt32(reader["ID"]->ToString());
					n->Title = (reader["Title"]->ToString());
					n->Author = (reader["Author"]->ToString());
					n->Publisher = (reader["Publisher"]->ToString());
					n->Year = (reader["Year"]->ToString());
					n->Section = (reader["Section"]->ToString());
					n->Rating = (reader["Rating"]->ToString());
					n->Aviable = (reader["Aviable"]->ToString());
					list->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}",n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));
				}
				return list->Items;
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}


	//DELETE

	bool SqlPart::CheckDelete(String^ check)
	{
		try
		{
			ConnectToDB();
			String^ cmdText = "SELECT Title FROM dbo.Library";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			SqlPart^ n = gcnew SqlPart();
			conn->Open();
			int summ = 0;
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				n->Title = (reader["Title"]->ToString());
				if (n->Title == check)
				{
					summ++;
				}
			}
			if (summ == 0)
			{
				return false;
			}
			else
			{
				return true;
			}

		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}

	bool SqlPart::CheckDeletePublisher(String^ check)
	{
		try
		{
			ConnectToDB();
			String^ cmdText = "SELECT Publisher FROM dbo.Library";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			SqlPart^ n = gcnew SqlPart();
			conn->Open();
			int summ = 0;
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				n->Publisher = (reader["Publisher"]->ToString());
				if (n->Publisher == check)
				{
					summ++;
				}
			}
			if (summ == 0)
			{
				return false;
			}
			else
			{
				return true;
			}

		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	bool SqlPart::CheckDeleteYear(String^ check)
	{
		try
		{
			ConnectToDB();
			String^ cmdText = "SELECT Year FROM dbo.Library";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			SqlPart^ n = gcnew SqlPart();
			conn->Open();
			int summ = 0;
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				n->Year = (reader["Year"]->ToString());
				if (n->Year == check)
				{
					summ++;
				}
			}
			if (summ == 0)
			{
				return false;
			}
			else
			{
				return true;
			}

		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	bool SqlPart::CheckDeleteSection(String^ check)
	{
		try
		{
			ConnectToDB();
			String^ cmdText = "SELECT Section FROM dbo.Library";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			SqlPart^ n = gcnew SqlPart();
			conn->Open();
			int summ = 0;
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				n->Section = (reader["Section"]->ToString());
				if (n->Section == check)
				{
					summ++;
				}
			}
			if (summ == 0)
			{
				return false;
			}
			else
			{
				return true;
			}

		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	bool SqlPart::CheckDeleteRaing(String^ check)
	{
		try
		{
			ConnectToDB();
			String^ cmdText = "SELECT Rating FROM dbo.Library";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			SqlPart^ n = gcnew SqlPart();
			conn->Open();
			int summ = 0;
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				n->Rating = (reader["Rating"]->ToString());
				if (n->Rating == check)
				{
					summ++;
				}
			}
			if (summ == 0)
			{
				return false;
			}
			else
			{
				return true;
			}

		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	bool SqlPart::CheckDeleteAviable(String^ check)
	{
		try
		{
			ConnectToDB();
			String^ cmdText = "SELECT Aviable FROM dbo.Library";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			SqlPart^ n = gcnew SqlPart();
			conn->Open();
			int summ = 0;
			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				n->Aviable = (reader["Aviable"]->ToString());
				if (n->Aviable == check)
				{
					summ++;
				}
			}
			if (summ == 0)
			{
				return false;
			}
			else
			{
				return true;
			}

		}

		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	
	void SqlPart::Delete(SqlPart^ n)
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Library WHERE ID=@ID";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@ID", n->ID);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}
	void SqlPart::DeleteByTitle(SqlPart^ n)
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Library WHERE Title=@Title";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@Title", n->Title);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}

	void SqlPart::DeleteByPublisher(SqlPart^ n)
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Library WHERE Publisher=@Publisher";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@Publisher", n->Publisher);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}

	void SqlPart::DeleteByYear(SqlPart^ n)
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Library WHERE Year=@Year";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@Year", n->Year);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}

	void SqlPart::DeleteBySection(SqlPart^ n)
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Library WHERE Section=@Section";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@Section", n->Section);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}

	void SqlPart::DeleteByRating(SqlPart^ n)
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Library WHERE Rating=@Rating";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@Rating", n->Rating);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}

	void SqlPart::DeleteByAviable(SqlPart^ n)
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "DELETE FROM dbo.Library WHERE Aviable=@Aviable";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				cmd->Parameters->AddWithValue("@Aviable", n->Aviable);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}

	void SqlPart::DeleteAll()
	{
		try
		{
			{
				ConnectToDB();

				String^ cmdText = "TRUNCATE TABLE dbo.Library";
				SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
				conn->Open();
				cmd->ExecuteNonQuery();
			}
		}


		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}

	}

	bool SqlPart::CheckerD(String^ o)
	{
		if (!String::IsNullOrWhiteSpace(o)&&!String::IsNullOrEmpty(o))
		{
			return 1;
		}
		else
		{
			return 0;
		}


	}
	//Find
	ListBox::ObjectCollection^ SqlPart::FindByTitle(String^ Title)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();
			String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE Title=@Title";
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			cmd->Parameters->AddWithValue("@Title", Title);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}

	

	ListBox::ObjectCollection^ SqlPart::FindByAuthor(String^ Author)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();
			String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE Author=@Author";
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			cmd->Parameters->AddWithValue("@Author", Author);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}

	ListBox::ObjectCollection^ SqlPart::FindByPublisher(String^ Publisher)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();
			String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE Publisher=@Publisher";
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			cmd->Parameters->AddWithValue("@Publisher", Publisher);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}

	ListBox::ObjectCollection^ SqlPart::FindByYear(String^ Year)
	{
			try
			{
				ConnectToDB();
				ListBox^ FindList = gcnew ListBox();
				SqlPart^ n = gcnew SqlPart();
				String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE Year=@Year";
				SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
				cmd->Parameters->AddWithValue("@Year", Year);
				conn->Open();
				SqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					n->ID = Convert::ToInt32(reader["ID"]->ToString());
					n->Title = (reader["Title"]->ToString());
					n->Author = (reader["Author"]->ToString());
					n->Publisher = (reader["Publisher"]->ToString());
					n->Year = (reader["Year"]->ToString());
					n->Section = (reader["Section"]->ToString());
					n->Rating = (reader["Rating"]->ToString());
					n->Aviable = (reader["Aviable"]->ToString());
					FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

				}
				return FindList->Items;
			}
			finally
			{
				if (conn != nullptr)
				{
					conn->Close();
				}

			}
	}

	

	ListBox::ObjectCollection^ SqlPart::FindBySection(String^ Section)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();
			String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE Section=@Section";
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			cmd->Parameters->AddWithValue("@Section", Section);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}

	ListBox::ObjectCollection^ SqlPart::FindByRating(String^ Rating)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();
			String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE Rating=@Rating";
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			cmd->Parameters->AddWithValue("@Rating", Rating);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}


	
	ListBox::ObjectCollection^ SqlPart::FindByAviable(String^ Aviable)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();
			String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE Aviable=@Aviable";
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			cmd->Parameters->AddWithValue("@Aviable", Aviable);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}

	ListBox::ObjectCollection^ SqlPart::FindByID(String^ ID)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();
			String^ Text = "SELECT ID, Title, Author, Publisher, Year, Section, Rating, Aviable FROM dbo.Library WHERE ID=@ID";
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			cmd->Parameters->AddWithValue("@ID", ID);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	ListBox::ObjectCollection^ SqlPart::FindByAdv1(String^ Year1, String^ Year2)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();

			String^ Text = "SELECT * FROM dbo.Library WHERE Year BETWEEN "+ Year1+" AND "+ Year2;
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}

	ListBox::ObjectCollection^ SqlPart::FindByAdv2(String^ Year1, String^ Year2)
	{
		try
		{
			ConnectToDB();
			ListBox^ FindList = gcnew ListBox();
			SqlPart^ n = gcnew SqlPart();

			String^ Text = "SELECT * FROM dbo.Library WHERE Rating BETWEEN " + Year1 + " AND " + Year2;
			SqlCommand^ cmd = gcnew SqlCommand(Text, conn);
			conn->Open();
			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				n->ID = Convert::ToInt32(reader["ID"]->ToString());
				n->Title = (reader["Title"]->ToString());
				n->Author = (reader["Author"]->ToString());
				n->Publisher = (reader["Publisher"]->ToString());
				n->Year = (reader["Year"]->ToString());
				n->Section = (reader["Section"]->ToString());
				n->Rating = (reader["Rating"]->ToString());
				n->Aviable = (reader["Aviable"]->ToString());
				FindList->Items->Add(String::Format("ID: {0} TITLE: {1} AUTHOR: {2} PUBLISHER: {3} YEAR: {4} SECTION: {5} RATING: {6} AVIABLE: {7}", n->ID, n->Title, n->Author, n->Publisher, n->Year, n->Section, n->Rating, n->Aviable));

			}
			return FindList->Items;
		}
		finally
		{
			if (conn != nullptr)
			{
				conn->Close();
			}

		}
	}
	bool SqlPart::Defense(String^ line1, String^ line2)
	{
		int a;
		int b;
		a = Convert::ToInt32(line1);
		b = Convert::ToInt32(line2);
		if (b >= a)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	



	

