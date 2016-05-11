#pragma once

namespace Project3TT_POINTERS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Creating an Integer variable
	int firstVariable = 10;
	int secondVariable = 20;

	//Creating a Pointer to the Variables
	int *firstPointer, *secondPointer;


	//WHAT NOT TO DO!!
	//////////////////////////////////////////////////////////////
	//
	//int *firstPointer, secondPointer;			//
	//*int pointer1;							//
	//
	//////////////////////////////////////////////////////////////

	public ref class PointersForm : public System::Windows::Forms::Form
	{
	public:
		
		PointersForm(void)
		{
			InitializeComponent();
			
			//POINT THE POINTERS TO THE VARIABLES
			//The First Pointer
			firstPointer = &firstVariable;

			//The Second Pointer
			secondPointer = &secondVariable;

			//ADD THESE VALUES TO THE FORM

				//The First Variable
			firstVariableValueBox->Text += firstVariable;

			//ADD THESE VALUES TO THE FORM
				
				//The Second Pointer
			secondPointerValueBox->Text += *secondPointer;

				//Welcoming message
			outputTextBox->Text = "\r\nLet's view what goes on under the hood!";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PointersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  firstVariableValueBox;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  firstPointerAddressBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  firstPointerValueBox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  firstVariableAddressBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  outputTextBox;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  secondPointerAddressBox;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  secondPointerValueBox;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  secondVariableAddressBox;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  secondVariableValueBox;















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PointersForm::typeid));
			this->firstVariableValueBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->firstPointerAddressBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->firstPointerValueBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->firstVariableAddressBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->secondPointerAddressBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->secondPointerValueBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->secondVariableAddressBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->secondVariableValueBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// firstVariableValueBox
			// 
			this->firstVariableValueBox->Location = System::Drawing::Point(111, 49);
			this->firstVariableValueBox->Name = L"firstVariableValueBox";
			this->firstVariableValueBox->Size = System::Drawing::Size(102, 20);
			this->firstVariableValueBox->TabIndex = 0;
			this->firstVariableValueBox->TextChanged += gcnew System::EventHandler(this, &PointersForm::firstVariableValueBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(63, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"First Variable";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->firstPointerAddressBox);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->firstPointerValueBox);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->firstVariableAddressBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->firstVariableValueBox);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(233, 258);
			this->panel1->TabIndex = 2;
			// 
			// firstPointerAddressBox
			// 
			this->firstPointerAddressBox->Location = System::Drawing::Point(111, 201);
			this->firstPointerAddressBox->Name = L"firstPointerAddressBox";
			this->firstPointerAddressBox->ReadOnly = true;
			this->firstPointerAddressBox->Size = System::Drawing::Size(102, 20);
			this->firstPointerAddressBox->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Address";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 164);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Value";
			// 
			// firstPointerValueBox
			// 
			this->firstPointerValueBox->Location = System::Drawing::Point(111, 164);
			this->firstPointerValueBox->Name = L"firstPointerValueBox";
			this->firstPointerValueBox->ReadOnly = true;
			this->firstPointerValueBox->Size = System::Drawing::Size(102, 20);
			this->firstPointerValueBox->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(63, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"First Pointer";
			// 
			// firstVariableAddressBox
			// 
			this->firstVariableAddressBox->Location = System::Drawing::Point(111, 86);
			this->firstVariableAddressBox->Name = L"firstVariableAddressBox";
			this->firstVariableAddressBox->ReadOnly = true;
			this->firstVariableAddressBox->Size = System::Drawing::Size(102, 20);
			this->firstVariableAddressBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Value";
			// 
			// outputTextBox
			// 
			this->outputTextBox->Location = System::Drawing::Point(12, 317);
			this->outputTextBox->Multiline = true;
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->Size = System::Drawing::Size(648, 96);
			this->outputTextBox->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Output Screen";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Thistle;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->secondPointerAddressBox);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->secondPointerValueBox);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->secondVariableAddressBox);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->secondVariableValueBox);
			this->panel2->Location = System::Drawing::Point(404, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(233, 258);
			this->panel2->TabIndex = 6;
			// 
			// secondPointerAddressBox
			// 
			this->secondPointerAddressBox->Location = System::Drawing::Point(111, 201);
			this->secondPointerAddressBox->Name = L"secondPointerAddressBox";
			this->secondPointerAddressBox->ReadOnly = true;
			this->secondPointerAddressBox->Size = System::Drawing::Size(102, 20);
			this->secondPointerAddressBox->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(14, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Address";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(14, 164);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Value";
			// 
			// secondPointerValueBox
			// 
			this->secondPointerValueBox->Location = System::Drawing::Point(111, 164);
			this->secondPointerValueBox->Name = L"secondPointerValueBox";
			this->secondPointerValueBox->Size = System::Drawing::Size(102, 20);
			this->secondPointerValueBox->TabIndex = 6;
			this->secondPointerValueBox->TextChanged += gcnew System::EventHandler(this, &PointersForm::secondPointerValueBox_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(63, 127);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(118, 20);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Second Pointer";
			// 
			// secondVariableAddressBox
			// 
			this->secondVariableAddressBox->Location = System::Drawing::Point(111, 86);
			this->secondVariableAddressBox->Name = L"secondVariableAddressBox";
			this->secondVariableAddressBox->ReadOnly = true;
			this->secondVariableAddressBox->Size = System::Drawing::Size(102, 20);
			this->secondVariableAddressBox->TabIndex = 4;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(14, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 20);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Address";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(14, 49);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 20);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Value";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(63, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(126, 20);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Second Variable";
			// 
			// secondVariableValueBox
			// 
			this->secondVariableValueBox->Location = System::Drawing::Point(111, 49);
			this->secondVariableValueBox->Name = L"secondVariableValueBox";
			this->secondVariableValueBox->ReadOnly = true;
			this->secondVariableValueBox->Size = System::Drawing::Size(102, 20);
			this->secondVariableValueBox->TabIndex = 0;
			// 
			// PointersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(669, 425);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->outputTextBox);
			this->Controls->Add(this->panel1);
			this->Name = L"PointersForm";
			this->Text = L"PointersForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		String^ convertAddressToString(int *pointer)
		{
			//Create a stringstream variable
			std::stringstream ss;

			//force feed the address of the pointer into the stream
			ss << pointer;

			//create a std::string variable
			std::string temp;

			//spit out whats in the stringstream, into the std::string variable
			ss >> temp;

			//return the handle of a new System::String containing the value of the std::string
			return gcnew String(temp.c_str());
			
		}


	private: System::Void firstVariableValueBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		//Take the user typed value and place it into the first variable
		int::TryParse(firstVariableValueBox->Text, firstVariable);

		//Display the address of the first Variable (this should not change)
		firstVariableAddressBox->Text = convertAddressToString(&firstVariable);

		//Show the VALUE stored for the firstPointer (this should be changing)
		firstPointerValueBox->Text = "" + *firstPointer;

		//Show the address of the firstPointer, to show that it is still the same as
		//the firstVariable (this should not be changing)
		firstPointerAddressBox->Text = convertAddressToString(firstPointer);

		//Echo to the user what just happened.
		outputTextBox->Text = "\r\n" + "You changed the First Variable's value and now "
			"the First Pointer's value is: " + *firstPointer
			+ outputTextBox->Text;
	}
private: System::Void secondPointerValueBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
	//Take the user typed value and place it into the second Pointer's value
	int::TryParse(secondPointerValueBox->Text, *secondPointer);

	//Show the VALUE stored for the secondVariable (this should be changing)
	secondVariableValueBox->Text = "" + secondVariable;

	//Display the address of the second Variable (this should not change)
	secondVariableAddressBox->Text = convertAddressToString(&secondVariable);

	//Show the address of the secondPointer, to show that it is still the same as
	//the secondVariable (this should not be changing)
	secondPointerAddressBox->Text = convertAddressToString(secondPointer);

	//Echo to the user what just happened.
	outputTextBox->Text = "\r\n" + "You changed the Second Pointer's value and now "
		"the Second Variables's value is: " + secondVariable
		+outputTextBox->Text;
}

};


}
