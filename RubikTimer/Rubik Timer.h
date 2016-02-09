#pragma once
#include <ctime>
#include<time.h>
#include <Windows.h>
#include<stdlib.h>

namespace RubikTimer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RubikTimer
	/// </summary>
	public ref class RubikTimer : public System::Windows::Forms::Form
	{
	public:
		RubikTimer(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RubikTimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  scrambleButton;
	private: System::Windows::Forms::Label^  scrambleLabel;
	protected:

	protected:


	private: System::Windows::Forms::Label^  timeLabel;


	private: System::Windows::Forms::Label^  times;

	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Button^  foco;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		
		int state = 1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ComboBox^  cubePicker;


			 clock_t t;
			 String^ scramble;
			 
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->scrambleButton = (gcnew System::Windows::Forms::Button());
			this->scrambleLabel = (gcnew System::Windows::Forms::Label());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->times = (gcnew System::Windows::Forms::Label());
			this->foco = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->cubePicker = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// scrambleButton
			// 
			this->scrambleButton->Location = System::Drawing::Point(12, 583);
			this->scrambleButton->Name = L"scrambleButton";
			this->scrambleButton->Size = System::Drawing::Size(94, 36);
			this->scrambleButton->TabIndex = 2;
			this->scrambleButton->Text = L"New Scramble";
			this->scrambleButton->UseVisualStyleBackColor = true;
			this->scrambleButton->Click += gcnew System::EventHandler(this, &RubikTimer::scrambleButton_Click);
			// 
			// scrambleLabel
			// 
			this->scrambleLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scrambleLabel->Location = System::Drawing::Point(112, 583);
			this->scrambleLabel->Name = L"scrambleLabel";
			this->scrambleLabel->Size = System::Drawing::Size(799, 35);
			this->scrambleLabel->TabIndex = 1;
			this->scrambleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timeLabel
			// 
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeLabel->Location = System::Drawing::Point(166, 194);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(562, 229);
			this->timeLabel->TabIndex = 2;
			this->timeLabel->Text = L"00:00:00";
			this->timeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// times
			// 
			this->times->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->times->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->times->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->times->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->times->Location = System::Drawing::Point(917, 9);
			this->times->Name = L"times";
			this->times->Size = System::Drawing::Size(264, 610);
			this->times->TabIndex = 3;
			// 
			// foco
			// 
			this->foco->Location = System::Drawing::Point(876, 423);
			this->foco->Name = L"foco";
			this->foco->Size = System::Drawing::Size(0, 0);
			this->foco->TabIndex = 0;
			this->foco->UseVisualStyleBackColor = true;
			this->foco->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &RubikTimer::foco_KeyUp);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &RubikTimer::timer1_Tick);
			// 
			// cubePicker
			// 
			this->cubePicker->FormattingEnabled = true;
			this->cubePicker->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"3x3x3", L"2x2x2" });
			this->cubePicker->Location = System::Drawing::Point(13, 13);
			this->cubePicker->Name = L"cubePicker";
			this->cubePicker->Size = System::Drawing::Size(232, 21);
			this->cubePicker->TabIndex = 4;
			this->cubePicker->SelectedIndexChanged += gcnew System::EventHandler(this, &RubikTimer::cubePicker_SelectedIndexChanged);
			// 
			// RubikTimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1193, 631);
			this->Controls->Add(this->cubePicker);
			this->Controls->Add(this->foco);
			this->Controls->Add(this->times);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->scrambleLabel);
			this->Controls->Add(this->scrambleButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"RubikTimer";
			this->Text = L"RubikTimer";
			this->Load += gcnew System::EventHandler(this, &RubikTimer::RubikTimer_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

			private: System::Void RubikTimer_Load(System::Object^  sender, System::EventArgs^  e) {
				foco->Focus(); 
				cubePicker->SelectedIndex = 0;
				generateScramble3x3();
			}


			private: System::Void cubePicker_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				if (cubePicker->SelectedIndex == 0) {
					generateScramble3x3();
				}
				else if (cubePicker->SelectedIndex == 1) {
					generateScramble2x2();
				}
				foco->Focus();
			}

			private: System::Void foco_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				startTimer(e);
			}
			
			private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				printTime();
			}

			private: System::Void scrambleButton_Click(System::Object^  sender, System::EventArgs^  e) {
				foco->Focus();
				if (cubePicker->SelectedIndex == 0) {
					generateScramble3x3();
				}
				else if (cubePicker->SelectedIndex == 1) {
					generateScramble2x2();
				}
				
			}


			//custom methods
			void generateScramble3x3() {
				scramble = "";
				srand(time(NULL));
				int n = 20, i = 1;
				int randomMove, randomDirection, lastRandom = 0;
				while (i <= n) {	
					randomMove = 1 + rand() % 6;
					randomDirection = 1 + rand() % 3;

					if (lastRandom != randomMove) {
						switch (randomMove)
						{
						case 1:
							scramble += "  R";
							break;
						case 2:
							scramble += "  L";
							break;
						case 3:
							scramble += "  F";
							break;
						case 4:
							scramble += "  B";
							break;
						case 5:
							scramble += "  D";
							break;
						case 6:
							scramble += "  U";
							break;
						}
						switch (randomMove)
						{
						case 1:
							scramble += "";
							break;
						case 2:
							scramble += "'";
							break;
						case 3:
							scramble += "2";
							break;
						}
						i++;
						lastRandom = randomMove;
					}
				}
				scrambleLabel->Text = scramble;
			}

			void generateScramble2x2() {
				scramble = "";
				srand(time(NULL));
				int n = 10, i = 1;
				int randomMove, randomDirection, lastRandom = 0;
				while (i <= n) {
					randomMove = 1 + rand() % 3;
					randomDirection = 1 + rand() % 3;

					if (lastRandom != randomMove) {
						switch (randomMove)
						{
						case 1:
							scramble += "  R";
							break;
						case 2:
							scramble += "  U";
							break;
						case 3:
							scramble += "  F";
							break;
						}
						switch (randomMove)
						{
						case 1:
							scramble += "";
							break;
						case 2:
							scramble += "'";
							break;
						case 3:
							scramble += "2";
							break;
						}
						i++;
						lastRandom = randomMove;
					}
				}
				scrambleLabel->Text = scramble;
			}

			void startTimer(System::Windows::Forms::KeyEventArgs^  e) {
				e->Handled;
				String^ key = "" + e->KeyValue;
				if (key->Equals("32") && state == 1) {
					state = 2;
					timeLabel->Text = "00:00:00";
					timer1->Enabled = true;
					t = clock();
				}
				else if (key->Equals("32") && state == 2) {
					state = 3;
					timer1->Enabled = false;
				}

				else if (key->Equals("32") && state == 3) {
					timeLabel->Text = "00:00:00";
					state = 1;
				}

			}

			void printTime() {
				int ms = 0, m = 0, s = 0;
				String^ MS, ^M, ^S;
				clock_t tempClock;
				tempClock = clock() - t;
				if (tempClock < 1000) {
					ms = tempClock / 10;
				}
				else {
					ms = (tempClock % 1000) / 10;
				}

				m = Convert::ToInt32(timeLabel->Text->Substring(0, 2));

				if (ms < 10) MS = "0" + ms;
				else MS = "" + ms;

				s = tempClock / 1000;
				if (s < 10) S = "0" + s;
				else S = "" + s;

				if (s >= 60) {
					m++;
					t = clock();
				}
				if (m < 10) M = "0" + m;
				else M = "" + m;
				timeLabel->Text = M + ":" + S + ":" + MS;
			}

};
}
