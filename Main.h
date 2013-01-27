#pragma once

namespace Cambiadorderealmlist 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

        void CambiarRealm(int opcion);
        void Jugar();

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
    private: 

        System::Windows::Forms::Button^ realm2;
        System::Windows::Forms::Button^ realm3;
        System::Windows::Forms::Button^ realm4;
        System::Windows::Forms::Button^ jugar;
    private: System::Windows::Forms::Button^  realm1;
    private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
            this->realm2 = (gcnew System::Windows::Forms::Button());
            this->realm3 = (gcnew System::Windows::Forms::Button());
            this->realm4 = (gcnew System::Windows::Forms::Button());
            this->jugar = (gcnew System::Windows::Forms::Button());
            this->realm1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // realm2
            // 
            this->realm2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"realm2.BackgroundImage")));
            this->realm2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->realm2->Font = (gcnew System::Drawing::Font(L"High Tower Text", 18, System::Drawing::FontStyle::Italic));
            this->realm2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->realm2->Location = System::Drawing::Point(149, 266);
            this->realm2->Name = L"realm2";
            this->realm2->Size = System::Drawing::Size(131, 76);
            this->realm2->TabIndex = 0;
            this->realm2->Text = L"Configurar realmlist 2";
            this->realm2->UseVisualStyleBackColor = true;
            this->realm2->Click += gcnew System::EventHandler(this, &Main::realm2_Click);
            // 
            // realm3
            // 
            this->realm3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"realm3.BackgroundImage")));
            this->realm3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->realm3->Font = (gcnew System::Drawing::Font(L"High Tower Text", 18, System::Drawing::FontStyle::Italic));
            this->realm3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->realm3->Location = System::Drawing::Point(286, 266);
            this->realm3->Name = L"realm3";
            this->realm3->Size = System::Drawing::Size(131, 76);
            this->realm3->TabIndex = 0;
            this->realm3->Text = L"Configurar realmlist 3";
            this->realm3->UseVisualStyleBackColor = true;
            this->realm3->Click += gcnew System::EventHandler(this, &Main::realm3_Click);
            // 
            // realm4
            // 
            this->realm4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"realm4.BackgroundImage")));
            this->realm4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->realm4->Font = (gcnew System::Drawing::Font(L"High Tower Text", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->realm4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->realm4->Location = System::Drawing::Point(423, 266);
            this->realm4->Name = L"realm4";
            this->realm4->Size = System::Drawing::Size(131, 76);
            this->realm4->TabIndex = 0;
            this->realm4->Text = L"Configurar realmlist 4";
            this->realm4->UseVisualStyleBackColor = true;
            this->realm4->Click += gcnew System::EventHandler(this, &Main::realm4_Click);
            // 
            // jugar
            // 
            this->jugar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"jugar.BackgroundImage")));
            this->jugar->Cursor = System::Windows::Forms::Cursors::Hand;
            this->jugar->Font = (gcnew System::Drawing::Font(L"High Tower Text", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->jugar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->jugar->Location = System::Drawing::Point(583, 237);
            this->jugar->Name = L"jugar";
            this->jugar->Size = System::Drawing::Size(165, 105);
            this->jugar->TabIndex = 0;
            this->jugar->Text = L"Jugar";
            this->jugar->UseVisualStyleBackColor = true;
            this->jugar->Click += gcnew System::EventHandler(this, &Main::jugar_click);
            // 
            // realm1
            // 
            this->realm1->BackColor = System::Drawing::SystemColors::Control;
            this->realm1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"realm1.BackgroundImage")));
            this->realm1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->realm1->Font = (gcnew System::Drawing::Font(L"High Tower Text", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->realm1->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->realm1->Location = System::Drawing::Point(12, 266);
            this->realm1->Name = L"realm1";
            this->realm1->Size = System::Drawing::Size(131, 76);
            this->realm1->TabIndex = 0;
            this->realm1->Text = L"Configurar realmlist 1";
            this->realm1->UseVisualStyleBackColor = false;
            this->realm1->Click += gcnew System::EventHandler(this, &Main::realm1_Click);
            // 
            // Main
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(760, 354);
            this->Controls->Add(this->realm1);
            this->Controls->Add(this->realm2);
            this->Controls->Add(this->realm3);
            this->Controls->Add(this->realm4);
            this->Controls->Add(this->jugar);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
            this->Name = L"Main";
            this->Text = L"Cambiador de realmlist";
            this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: 
        System::Void Main_Load(System::Object^  sender, System::EventArgs^  e)
        {
        }
        System::Void realm1_Click(System::Object^  sender, System::EventArgs^  e)
        {
            CambiarRealm(1);
        }
        System::Void realm2_Click(System::Object^  sender, System::EventArgs^  e)
        {
            CambiarRealm(2);
        }
private: System::Void realm3_Click(System::Object^  sender, System::EventArgs^  e) 
         {
             CambiarRealm(3);
         }
private: System::Void realm4_Click(System::Object^  sender, System::EventArgs^  e) 
         {
             CambiarRealm(4);
         }
private: System::Void jugar_click(System::Object^  sender, System::EventArgs^  e) 
         {
             Jugar();
         }
};
}
