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
    private: System::Windows::Forms::Button^  foro;
    private: System::Windows::Forms::Button^  gplp;
    private: System::Windows::Forms::Button^  wowhead;

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
            this->foro = (gcnew System::Windows::Forms::Button());
            this->gplp = (gcnew System::Windows::Forms::Button());
            this->wowhead = (gcnew System::Windows::Forms::Button());
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
            // foro
            // 
            this->foro->BackColor = System::Drawing::SystemColors::Control;
            this->foro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"foro.BackgroundImage")));
            this->foro->Cursor = System::Windows::Forms::Cursors::Hand;
            this->foro->Font = (gcnew System::Drawing::Font(L"High Tower Text", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->foro->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->foro->Location = System::Drawing::Point(617, 12);
            this->foro->Name = L"foro";
            this->foro->Size = System::Drawing::Size(131, 40);
            this->foro->TabIndex = 1;
            this->foro->Text = L"Foro";
            this->foro->UseVisualStyleBackColor = false;
            this->foro->Click += gcnew System::EventHandler(this, &Main::foro_click);
            // 
            // gplp
            // 
            this->gplp->BackColor = System::Drawing::SystemColors::Control;
            this->gplp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"gplp.BackgroundImage")));
            this->gplp->Cursor = System::Windows::Forms::Cursors::Hand;
            this->gplp->Font = (gcnew System::Drawing::Font(L"High Tower Text", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->gplp->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->gplp->Location = System::Drawing::Point(617, 69);
            this->gplp->Name = L"gplp";
            this->gplp->Size = System::Drawing::Size(131, 40);
            this->gplp->TabIndex = 2;
            this->gplp->Text = L"GPLP";
            this->gplp->UseVisualStyleBackColor = false;
            this->gplp->Click += gcnew System::EventHandler(this, &Main::gplp_click);
            // 
            // wowhead
            // 
            this->wowhead->BackColor = System::Drawing::SystemColors::Control;
            this->wowhead->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"wowhead.BackgroundImage")));
            this->wowhead->Cursor = System::Windows::Forms::Cursors::Hand;
            this->wowhead->Font = (gcnew System::Drawing::Font(L"High Tower Text", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->wowhead->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->wowhead->Location = System::Drawing::Point(617, 128);
            this->wowhead->Name = L"wowhead";
            this->wowhead->Size = System::Drawing::Size(131, 40);
            this->wowhead->TabIndex = 3;
            this->wowhead->Text = L"WowHead";
            this->wowhead->UseVisualStyleBackColor = false;
            this->wowhead->Click += gcnew System::EventHandler(this, &Main::wowhead_click);
            // 
            // Main
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(760, 354);
            this->Controls->Add(this->wowhead);
            this->Controls->Add(this->gplp);
            this->Controls->Add(this->foro);
            this->Controls->Add(this->realm1);
            this->Controls->Add(this->realm2);
            this->Controls->Add(this->realm3);
            this->Controls->Add(this->realm4);
            this->Controls->Add(this->jugar);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
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
private: System::Void foro_click(System::Object^  sender, System::EventArgs^  e) 
         {
         }
private: System::Void gplp_click(System::Object^  sender, System::EventArgs^  e) 
         {
         }
private: System::Void wowhead_click(System::Object^  sender, System::EventArgs^  e) 
         {
         }
};
}
