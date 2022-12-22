#pragma once
#include <cmath>



namespace jija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(291, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::Black;
			series1->MarkerBorderWidth = 0;
			series1->MarkerColor = System::Drawing::Color::Black;
			series1->MarkerSize = 4;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Diamond;
			series1->Name = L"Без ветра";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->MarkerBorderColor = System::Drawing::Color::Black;
			series2->MarkerBorderWidth = 0;
			series2->MarkerColor = System::Drawing::Color::Red;
			series2->MarkerSize = 4;
			series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Cross;
			series2->Name = L"Ветер";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->MarkerBorderColor = System::Drawing::Color::Black;
			series3->MarkerBorderWidth = 0;
			series3->MarkerColor = System::Drawing::Color::Blue;
			series3->MarkerSize = 4;
			series3->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Triangle;
			series3->Name = L"Сильный ветер";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Палка";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(605, 494);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(248, 494);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 403);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"L";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"t";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"k";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"ugol";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"skoros";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"massa";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(109, 400);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(122, 22);
			this->textBox6->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(109, 340);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(122, 22);
			this->textBox5->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(109, 221);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 22);
			this->textBox4->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(109, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 22);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(109, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(248, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 520);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"lab1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
		   double dt = 0.01;
		   double g = 9.8;
		   double xt(double x, double v0x) {
			   return (x + v0x * dt);
		   }

		   double yt(double y, double v0y) {
			   return (y + v0y * dt);
		   }

		   double vxNext(double v0x, double k, double m, double v0y) {
			   return (v0x - k * dt / m * v0x * sqrt(v0x * v0x + v0y * v0y));
		   }

		   double vyNext(double v0x, double k, double m, double v0y) {
			   return (v0y - dt * (g + k / m * v0y * sqrt(v0x * v0x + v0y * v0y)));
		   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double pi = 3.1415926535;
	//double dt = 0.01;
	//double g = 9.8;

	double  x, y, L, t, v0x, v0y;
	chart1->Series["Без ветра"]->Points->Clear();
	chart1->Series["Ветер"]->Points->Clear();
	chart1->Series["Сильный ветер"]->Points->Clear();
	chart1->Series["Палка"]->Points->Clear();

	chart1->Series["Палка"]->Points->AddXY(2.2, 0);
	chart1->Series["Палка"]->Points->AddXY(2.2, 1.5);


	double m = Convert::ToDouble(textBox1->Text);
	double	V = Convert::ToDouble(textBox2->Text);
	double	a = Convert::ToDouble(textBox3->Text);
	double	k = Convert::ToDouble(textBox4->Text);

	x = y = t = 0;

	double t0 = (2 * V * sin(a * pi / 180)) / g;
	textBox5->Text = Convert::ToString(t0);
	L = (V * V * sin(2 * a * pi / 180)) / g;
	textBox6->Text = Convert::ToString(L);

	v0x = V * cos(a * pi / 180);
	v0y = V * sin(a * pi / 180);

	do {
		x = v0x * t;
		y = (v0y * t) - (g * t * t / 2);
		if (x >= 1.9 && x <= 2.2 && y <= 1.5)
		{
			break;
		}
		else{
		chart1->Series["Без ветра"]->Points->AddXY(x, y);
		t += dt; }
	} while (t <= t0);

	x = y = t = 0;

	do {
		if (x >= 1.9 && x <= 2.2 && y <= 1.5)
		{
			break;
		}
		else {
			x = (v0x * m / k) * (1 - exp(-1 * k * t / m));
			y = (m / k) * (((v0y + (m * g / k)) * (1 - exp(-1 * k * t / m))) - (g * t));
			if (y < 0)
			{
				break;
			}
			else {
				chart1->Series["Ветер"]->Points->AddXY(x, y);
				t += dt;
			}
		}
	} while (t<=t0);

	x = y = t = 0;



	do {
		if (x >= 1.9 && x <= 2.2 && y <= 1.5)
		{
			break;
		}
		else {
			x = xt(x, v0x);
			y = yt(y, v0y);
			if (y < 0)
			{
				break;
			}
			else {
				chart1->Series["Сильный ветер"]->Points->AddXY(x, y);
				t += dt;
				v0x = vxNext(v0x, k, m, v0y);
				v0y = vyNext(v0x, k, m, v0y);
			}
		}
	} while (t<=t0);

}
};
}
