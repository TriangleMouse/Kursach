#pragma once
#using <System.Data.SQLite.dll>

namespace Kursach {

    using namespace System;
    using namespace System::IO;
    using namespace System::IO::Compression;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SQLite;
    /// <summary>
    /// ������ ��� General
    /// </summary>
    public ref class General : public System::Windows::Forms::Form
    {
    public:
        General(void)
        {
            InitializeComponent();

        }

    protected:
        /// <summary>
        /// ���������� ��� ������������ �������.
        /// </summary>
        ~General()
        {
            if (components)
            {
                delete components;
            }
        }

    private: Bunifu::Framework::UI::BunifuDragControl^ bunifuDragControl1;




    private: System::Windows::Forms::Panel^ panel2;
















    public: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
    private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
    private: Bunifu::Framework::UI::BunifuImageButton^ Exit;
    private: Bunifu::Framework::UI::BunifuDragControl^ bunifuDragControl2;
    private: Bunifu::Framework::UI::BunifuDragControl^ bunifuDragControl3;
    private: System::Windows::Forms::Panel^ panel1;


































    private: System::Windows::Forms::Button^ button5;

    private: System::Windows::Forms::Panel^ panelDel;

    private: System::Windows::Forms::Button^ Bt_search_delete;
    private: Guna::UI2::WinForms::Guna2TextBox^ SearchDelete;
    private: System::Windows::Forms::Button^ Del;
    private: System::Windows::Forms::DataGridView^ DelTable;
    public: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
    private: System::Windows::Forms::Panel^ panelEdit;
    public:
    private:

    public:
    public: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel4;
    private:
    private: System::Windows::Forms::Button^ EditSearch;
    public:
    private: Guna::UI2::WinForms::Guna2TextBox^ Search;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::DataGridView^ EditTable;
    private: System::Windows::Forms::Label^ Deltxt;

    private: System::Windows::Forms::Label^ Addtxt;
    private: System::Windows::Forms::Label^ TxtEdit;


    private: System::Windows::Forms::Panel^ panelView;

    private: System::Windows::Forms::DataGridView^ Dat;
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::Panel^ panel4;

    private: Guna::UI2::WinForms::Guna2TextBox^ ��������_����������1;
    private: Guna::UI2::WinForms::Guna2TextBox^ ���_�������������1;
    private: Guna::UI2::WinForms::Guna2TextBox^ ��������_����������_�������������1;






    private: Guna::UI2::WinForms::Guna2TextBox^ �����_����������_�������������1;

    private: Guna::UI2::WinForms::Guna2TextBox^ ���������_�����1;
    private: Guna::UI2::WinForms::Guna2TextBox^ �����_����_���������1;





    private: Guna::UI2::WinForms::Guna2TextBox^ �����_����������_���������1;


    private: Guna::UI2::WinForms::Guna2TextBox^ ���_���������1;
    private: Guna::UI2::WinForms::Guna2TextBox^ ��������������_���1;








    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: Guna::UI2::WinForms::Guna2TextBox^ ������������1;


    private: System::Windows::Forms::DataGridView^ TestTable;

    private: Guna::UI2::WinForms::Guna2TextBox^ �����_�����1;
    private: Guna::UI2::WinForms::Guna2TextBox^ ���������_����������_���1;
    private: Guna::UI2::WinForms::Guna2TextBox^ ��������_�����1;
    private: Guna::UI2::WinForms::Guna2TextBox^ ��������������_�����1;
    private: Guna::UI2::WinForms::Guna2TextBox^ ���_����������1;





    private: Guna::UI2::WinForms::Guna2TextBox^ ���������_�����1;



private:


private: Guna::UI2::WinForms::Guna2TextBox^ ����������_�����������_���_������������2;
private: Guna::UI2::WinForms::Guna2TextBox^ ����������_�����������_���_��������1;

private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;

public:



















    protected:
    private: System::ComponentModel::IContainer^ components;

    private:
        /// <summary>
        /// ������������ ���������� ������������.
        /// </summary>


#pragma region Windows Form Designer generated code
        /// <summary>
        /// ��������� ����� ��� ��������� ������������ � �� ��������� 
        /// ���������� ����� ������ � ������� ��������� ����.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(General::typeid));
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
            this->bunifuDragControl1 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->Exit = (gcnew Bunifu::Framework::UI::BunifuImageButton());
            this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
            this->panelDel = (gcnew System::Windows::Forms::Panel());
            this->Deltxt = (gcnew System::Windows::Forms::Label());
            this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
            this->Bt_search_delete = (gcnew System::Windows::Forms::Button());
            this->SearchDelete = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->Del = (gcnew System::Windows::Forms::Button());
            this->DelTable = (gcnew System::Windows::Forms::DataGridView());
            this->bunifuDragControl2 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
            this->bunifuDragControl3 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
            this->Addtxt = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->panelEdit = (gcnew System::Windows::Forms::Panel());
            this->TxtEdit = (gcnew System::Windows::Forms::Label());
            this->bunifuCustomLabel4 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
            this->EditSearch = (gcnew System::Windows::Forms::Button());
            this->Search = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->EditTable = (gcnew System::Windows::Forms::DataGridView());
            this->panelView = (gcnew System::Windows::Forms::Panel());
            this->Dat = (gcnew System::Windows::Forms::DataGridView());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->����������_�����������_���_������������2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->����������_�����������_���_��������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->�����_�����1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->���������_����������_���1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->��������_�����1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->��������������_�����1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->���_����������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->���������_�����1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->������������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->��������_����������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->���_�������������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->��������_����������_�������������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->�����_����������_�������������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->���������_�����1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->�����_����_���������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->�����_����������_���������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->���_���������1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->��������������_���1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->TestTable = (gcnew System::Windows::Forms::DataGridView());
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->BeginInit();
            this->panelDel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DelTable))->BeginInit();
            this->panelEdit->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditTable))->BeginInit();
            this->panelView->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dat))->BeginInit();
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->panel4->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tabPage4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TestTable))->BeginInit();
            this->SuspendLayout();
            // 
            // bunifuCustomLabel1
            // 
            this->bunifuCustomLabel1->AutoSize = true;
            this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuCustomLabel1->Location = System::Drawing::Point(449, 11);
            this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
            this->bunifuCustomLabel1->Size = System::Drawing::Size(218, 24);
            this->bunifuCustomLabel1->TabIndex = 6;
            this->bunifuCustomLabel1->Text = L"����� ����������!";
            this->bunifuCustomLabel1->Click += gcnew System::EventHandler(this, &General::bunifuCustomLabel1_Click);
            // 
            // bunifuDragControl1
            // 
            this->bunifuDragControl1->Fixed = true;
            this->bunifuDragControl1->Horizontal = true;
            this->bunifuDragControl1->TargetControl = this->panel2;
            this->bunifuDragControl1->Vertical = true;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->panel2->Controls->Add(this->panel1);
            this->panel2->Controls->Add(this->Exit);
            this->panel2->Controls->Add(this->bunifuCustomLabel1);
            this->panel2->Controls->Add(this->bunifuCustomLabel3);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(756, 55);
            this->panel2->TabIndex = 1;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &General::panel2_Paint);
            // 
            // panel1
            // 
            this->panel1->Location = System::Drawing::Point(0, 56);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(678, 314);
            this->panel1->TabIndex = 2;
            // 
            // Exit
            // 
            this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
            this->Exit->ImageActive = nullptr;
            this->Exit->Location = System::Drawing::Point(700, 2);
            this->Exit->Name = L"Exit";
            this->Exit->Size = System::Drawing::Size(51, 50);
            this->Exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->Exit->TabIndex = 2;
            this->Exit->TabStop = false;
            this->Exit->Zoom = 15;
            this->Exit->Click += gcnew System::EventHandler(this, &General::Exit_Click);
            // 
            // bunifuCustomLabel3
            // 
            this->bunifuCustomLabel3->AutoSize = true;
            this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
                static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(220)));
            this->bunifuCustomLabel3->Location = System::Drawing::Point(12, 11);
            this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
            this->bunifuCustomLabel3->Size = System::Drawing::Size(250, 30);
            this->bunifuCustomLabel3->TabIndex = 7;
            this->bunifuCustomLabel3->Text = L"���������� � ���";
            this->bunifuCustomLabel3->Click += gcnew System::EventHandler(this, &General::bunifuCustomLabel3_Click);
            // 
            // panelDel
            // 
            this->panelDel->Controls->Add(this->Deltxt);
            this->panelDel->Controls->Add(this->bunifuCustomLabel2);
            this->panelDel->Controls->Add(this->Bt_search_delete);
            this->panelDel->Controls->Add(this->SearchDelete);
            this->panelDel->Controls->Add(this->Del);
            this->panelDel->Controls->Add(this->DelTable);
            this->panelDel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panelDel->Location = System::Drawing::Point(3, 3);
            this->panelDel->Name = L"panelDel";
            this->panelDel->Size = System::Drawing::Size(742, 386);
            this->panelDel->TabIndex = 7;
            // 
            // Deltxt
            // 
            this->Deltxt->AutoSize = true;
            this->Deltxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->Deltxt->Location = System::Drawing::Point(106, 322);
            this->Deltxt->Name = L"Deltxt";
            this->Deltxt->Size = System::Drawing::Size(0, 17);
            this->Deltxt->TabIndex = 9;
            // 
            // bunifuCustomLabel2
            // 
            this->bunifuCustomLabel2->AutoSize = true;
            this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuCustomLabel2->Location = System::Drawing::Point(263, 9);
            this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
            this->bunifuCustomLabel2->Size = System::Drawing::Size(199, 24);
            this->bunifuCustomLabel2->TabIndex = 7;
            this->bunifuCustomLabel2->Text = L"�������� ������";
            // 
            // Bt_search_delete
            // 
            this->Bt_search_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Bt_search_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Bt_search_delete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Bt_search_delete->Location = System::Drawing::Point(230, 61);
            this->Bt_search_delete->Name = L"Bt_search_delete";
            this->Bt_search_delete->Size = System::Drawing::Size(115, 51);
            this->Bt_search_delete->TabIndex = 3;
            this->Bt_search_delete->Text = L"����� ������";
            this->Bt_search_delete->UseVisualStyleBackColor = false;
            this->Bt_search_delete->Click += gcnew System::EventHandler(this, &General::Bt_search_delete_Click);
            // 
            // SearchDelete
            // 
            this->SearchDelete->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->SearchDelete->BorderThickness = 3;
            this->SearchDelete->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->SearchDelete->DefaultText = L"";
            this->SearchDelete->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->SearchDelete->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->SearchDelete->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->SearchDelete->DisabledState->Parent = this->SearchDelete;
            this->SearchDelete->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->SearchDelete->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->SearchDelete->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->SearchDelete->FocusedState->Parent = this->SearchDelete;
            this->SearchDelete->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->SearchDelete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->SearchDelete->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->SearchDelete->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->SearchDelete->HoverState->Parent = this->SearchDelete;
            this->SearchDelete->Location = System::Drawing::Point(50, 61);
            this->SearchDelete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->SearchDelete->Name = L"SearchDelete";
            this->SearchDelete->PasswordChar = '\0';
            this->SearchDelete->PlaceholderForeColor = System::Drawing::Color::White;
            this->SearchDelete->PlaceholderText = L"ID";
            this->SearchDelete->SelectedText = L"";
            this->SearchDelete->ShadowDecoration->Parent = this->SearchDelete;
            this->SearchDelete->Size = System::Drawing::Size(132, 38);
            this->SearchDelete->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->SearchDelete->TabIndex = 2;
            this->SearchDelete->TextChanged += gcnew System::EventHandler(this, &General::SearchDelete_TextChanged);
            this->SearchDelete->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &General::SearchDelete_KeyPress);
            // 
            // Del
            // 
            this->Del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Del->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Del->Location = System::Drawing::Point(556, 305);
            this->Del->Name = L"Del";
            this->Del->Size = System::Drawing::Size(115, 51);
            this->Del->TabIndex = 1;
            this->Del->Text = L"�������";
            this->Del->UseVisualStyleBackColor = false;
            this->Del->Click += gcnew System::EventHandler(this, &General::Del_Click);
            // 
            // DelTable
            // 
            this->DelTable->AllowUserToAddRows = false;
            this->DelTable->AllowUserToDeleteRows = false;
            dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->DelTable->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this->DelTable->BackgroundColor = System::Drawing::Color::White;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->DelTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this->DelTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->DelTable->DefaultCellStyle = dataGridViewCellStyle3;
            this->DelTable->GridColor = System::Drawing::Color::White;
            this->DelTable->Location = System::Drawing::Point(9, 144);
            this->DelTable->Name = L"DelTable";
            this->DelTable->ReadOnly = true;
            dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->DelTable->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
            dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->DelTable->RowsDefaultCellStyle = dataGridViewCellStyle5;
            this->DelTable->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->DelTable->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->DelTable->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->DelTable->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->DelTable->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->DelTable->Size = System::Drawing::Size(709, 95);
            this->DelTable->TabIndex = 0;
            // 
            // bunifuDragControl2
            // 
            this->bunifuDragControl2->Fixed = true;
            this->bunifuDragControl2->Horizontal = true;
            this->bunifuDragControl2->TargetControl = this->bunifuCustomLabel3;
            this->bunifuDragControl2->Vertical = true;
            // 
            // bunifuDragControl3
            // 
            this->bunifuDragControl3->Fixed = true;
            this->bunifuDragControl3->Horizontal = true;
            this->bunifuDragControl3->TargetControl = this->bunifuCustomLabel1;
            this->bunifuDragControl3->Vertical = true;
            // 
            // Addtxt
            // 
            this->Addtxt->AutoSize = true;
            this->Addtxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->Addtxt->Location = System::Drawing::Point(28, 318);
            this->Addtxt->Name = L"Addtxt";
            this->Addtxt->Size = System::Drawing::Size(0, 17);
            this->Addtxt->TabIndex = 39;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(533, 309);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(127, 53);
            this->button5->TabIndex = 37;
            this->button5->Text = L"�������� ������";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &General::button5_Click);
            // 
            // panelEdit
            // 
            this->panelEdit->Controls->Add(this->TxtEdit);
            this->panelEdit->Controls->Add(this->bunifuCustomLabel4);
            this->panelEdit->Controls->Add(this->EditSearch);
            this->panelEdit->Controls->Add(this->Search);
            this->panelEdit->Controls->Add(this->button7);
            this->panelEdit->Controls->Add(this->EditTable);
            this->panelEdit->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panelEdit->Location = System::Drawing::Point(3, 3);
            this->panelEdit->Name = L"panelEdit";
            this->panelEdit->Size = System::Drawing::Size(742, 386);
            this->panelEdit->TabIndex = 8;
            // 
            // TxtEdit
            // 
            this->TxtEdit->AutoSize = true;
            this->TxtEdit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->TxtEdit->Location = System::Drawing::Point(106, 322);
            this->TxtEdit->Name = L"TxtEdit";
            this->TxtEdit->Size = System::Drawing::Size(0, 17);
            this->TxtEdit->TabIndex = 8;
            // 
            // bunifuCustomLabel4
            // 
            this->bunifuCustomLabel4->AutoSize = true;
            this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuCustomLabel4->Location = System::Drawing::Point(263, 9);
            this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
            this->bunifuCustomLabel4->Size = System::Drawing::Size(216, 24);
            this->bunifuCustomLabel4->TabIndex = 7;
            this->bunifuCustomLabel4->Text = L"��������� ������";
            // 
            // EditSearch
            // 
            this->EditSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->EditSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->EditSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->EditSearch->Location = System::Drawing::Point(230, 61);
            this->EditSearch->Name = L"EditSearch";
            this->EditSearch->Size = System::Drawing::Size(115, 51);
            this->EditSearch->TabIndex = 3;
            this->EditSearch->Text = L"����� ������";
            this->EditSearch->UseVisualStyleBackColor = false;
            this->EditSearch->Click += gcnew System::EventHandler(this, &General::EditSearch_Click);
            // 
            // Search
            // 
            this->Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(8)));
            this->Search->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Search->BorderThickness = 3;
            this->Search->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->Search->DefaultText = L"";
            this->Search->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->Search->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->Search->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->Search->DisabledState->Parent = this->Search;
            this->Search->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->Search->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Search->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Search->FocusedState->Parent = this->Search;
            this->Search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Search->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Search->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Search->HoverState->Parent = this->Search;
            this->Search->Location = System::Drawing::Point(50, 61);
            this->Search->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Search->Name = L"Search";
            this->Search->PasswordChar = '\0';
            this->Search->PlaceholderForeColor = System::Drawing::Color::White;
            this->Search->PlaceholderText = L"ID";
            this->Search->SelectedText = L"";
            this->Search->ShadowDecoration->Parent = this->Search;
            this->Search->Size = System::Drawing::Size(132, 38);
            this->Search->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->Search->TabIndex = 2;
            this->Search->TextChanged += gcnew System::EventHandler(this, &General::Search_TextChanged);
            this->Search->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &General::Search_KeyPress);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(556, 305);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(115, 51);
            this->button7->TabIndex = 1;
            this->button7->Text = L"��������";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &General::button7_Click);
            // 
            // EditTable
            // 
            this->EditTable->AllowUserToAddRows = false;
            this->EditTable->AllowUserToDeleteRows = false;
            dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->EditTable->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
            this->EditTable->BackgroundColor = System::Drawing::Color::White;
            dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->EditTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
            this->EditTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->EditTable->DefaultCellStyle = dataGridViewCellStyle8;
            this->EditTable->GridColor = System::Drawing::Color::White;
            this->EditTable->Location = System::Drawing::Point(9, 144);
            this->EditTable->Name = L"EditTable";
            dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->EditTable->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
            dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->EditTable->RowsDefaultCellStyle = dataGridViewCellStyle10;
            this->EditTable->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->EditTable->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->EditTable->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->EditTable->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->EditTable->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->EditTable->Size = System::Drawing::Size(709, 95);
            this->EditTable->TabIndex = 0;
            // 
            // panelView
            // 
            this->panelView->Controls->Add(this->Dat);
            this->panelView->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panelView->Location = System::Drawing::Point(3, 3);
            this->panelView->Name = L"panelView";
            this->panelView->Size = System::Drawing::Size(742, 386);
            this->panelView->TabIndex = 40;
            // 
            // Dat
            // 
            this->Dat->AllowUserToAddRows = false;
            this->Dat->AllowUserToDeleteRows = false;
            dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            dataGridViewCellStyle11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::White;
            this->Dat->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle11;
            this->Dat->BackgroundColor = System::Drawing::Color::White;
            dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle12->SelectionForeColor = System::Drawing::Color::White;
            dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->Dat->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
            this->Dat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle13->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle13->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->Dat->DefaultCellStyle = dataGridViewCellStyle13;
            this->Dat->GridColor = System::Drawing::Color::White;
            this->Dat->Location = System::Drawing::Point(5, 3);
            this->Dat->Name = L"Dat";
            this->Dat->ReadOnly = true;
            dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle14->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle14->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->Dat->RowHeadersDefaultCellStyle = dataGridViewCellStyle14;
            dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            dataGridViewCellStyle15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle15->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            dataGridViewCellStyle15->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Dat->RowsDefaultCellStyle = dataGridViewCellStyle15;
            this->Dat->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Dat->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->Dat->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Dat->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Dat->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Dat->Size = System::Drawing::Size(732, 378);
            this->Dat->TabIndex = 1;
            this->Dat->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &General::Dat_CellContentClick);
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Location = System::Drawing::Point(0, 55);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(756, 418);
            this->tabControl1->TabIndex = 9;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->panelView);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(748, 392);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"�����������";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->panel4);
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(748, 392);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"�������� ������";
            this->tabPage2->UseVisualStyleBackColor = true;
            this->tabPage2->Click += gcnew System::EventHandler(this, &General::tabPage2_Click);
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->guna2TextBox1);
            this->panel4->Controls->Add(this->����������_�����������_���_������������2);
            this->panel4->Controls->Add(this->����������_�����������_���_��������1);
            this->panel4->Controls->Add(this->�����_�����1);
            this->panel4->Controls->Add(this->���������_����������_���1);
            this->panel4->Controls->Add(this->��������_�����1);
            this->panel4->Controls->Add(this->��������������_�����1);
            this->panel4->Controls->Add(this->���_����������1);
            this->panel4->Controls->Add(this->���������_�����1);
            this->panel4->Controls->Add(this->������������1);
            this->panel4->Controls->Add(this->��������_����������1);
            this->panel4->Controls->Add(this->���_�������������1);
            this->panel4->Controls->Add(this->��������_����������_�������������1);
            this->panel4->Controls->Add(this->�����_����������_�������������1);
            this->panel4->Controls->Add(this->���������_�����1);
            this->panel4->Controls->Add(this->�����_����_���������1);
            this->panel4->Controls->Add(this->�����_����������_���������1);
            this->panel4->Controls->Add(this->���_���������1);
            this->panel4->Controls->Add(this->��������������_���1);
            this->panel4->Controls->Add(this->Addtxt);
            this->panel4->Controls->Add(this->button5);
            this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel4->Location = System::Drawing::Point(3, 3);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(742, 386);
            this->panel4->TabIndex = 0;
            // 
            // guna2TextBox1
            // 
            this->guna2TextBox1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->guna2TextBox1->BorderThickness = 3;
            this->guna2TextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->guna2TextBox1->DefaultText = L"";
            this->guna2TextBox1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->guna2TextBox1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->guna2TextBox1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox1->DisabledState->Parent = this->guna2TextBox1;
            this->guna2TextBox1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->guna2TextBox1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->guna2TextBox1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->guna2TextBox1->FocusedState->Parent = this->guna2TextBox1;
            this->guna2TextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->guna2TextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->guna2TextBox1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->guna2TextBox1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->guna2TextBox1->HoverState->Parent = this->guna2TextBox1;
            this->guna2TextBox1->Location = System::Drawing::Point(264, 268);
            this->guna2TextBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->guna2TextBox1->Name = L"guna2TextBox1";
            this->guna2TextBox1->PasswordChar = '\0';
            this->guna2TextBox1->PlaceholderForeColor = System::Drawing::Color::White;
            this->guna2TextBox1->PlaceholderText = L"���� ���";
            this->guna2TextBox1->SelectedText = L"";
            this->guna2TextBox1->ShadowDecoration->Parent = this->guna2TextBox1;
            this->guna2TextBox1->Size = System::Drawing::Size(176, 38);
            this->guna2TextBox1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->guna2TextBox1->TabIndex = 62;
            this->guna2TextBox1->TextChanged += gcnew System::EventHandler(this, &General::guna2TextBox1_TextChanged);
            this->guna2TextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &General::guna2TextBox1_KeyPress);
            // 
            // ����������_�����������_���_������������2
            // 
            this->����������_�����������_���_������������2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->����������_�����������_���_������������2->BorderThickness = 3;
            this->����������_�����������_���_������������2->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->����������_�����������_���_������������2->DefaultText = L"";
            this->����������_�����������_���_������������2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->����������_�����������_���_������������2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->����������_�����������_���_������������2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->����������_�����������_���_������������2->DisabledState->Parent = this->����������_�����������_���_������������2;
            this->����������_�����������_���_������������2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->����������_�����������_���_������������2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->����������_�����������_���_������������2->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->����������_�����������_���_������������2->FocusedState->Parent = this->����������_�����������_���_������������2;
            this->����������_�����������_���_������������2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->����������_�����������_���_������������2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->����������_�����������_���_������������2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->����������_�����������_���_������������2->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->����������_�����������_���_������������2->HoverState->Parent = this->����������_�����������_���_������������2;
            this->����������_�����������_���_������������2->Location = System::Drawing::Point(519, 60);
            this->����������_�����������_���_������������2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->����������_�����������_���_������������2->Name = L"����������_�����������_���_������������2";
            this->����������_�����������_���_������������2->PasswordChar = '\0';
            this->����������_�����������_���_������������2->PlaceholderForeColor = System::Drawing::Color::White;
            this->����������_�����������_���_������������2->PlaceholderText = L"���������� ����������� ��� ������������";
            this->����������_�����������_���_������������2->SelectedText = L"";
            this->����������_�����������_���_������������2->ShadowDecoration->Parent = this->����������_�����������_���_������������2;
            this->����������_�����������_���_������������2->Size = System::Drawing::Size(176, 38);
            this->����������_�����������_���_������������2->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->����������_�����������_���_������������2->TabIndex = 61;
            this->����������_�����������_���_������������2->TextChanged += gcnew System::EventHandler(this, &General::����������_�����������_���_������������2_TextChanged);
            this->����������_�����������_���_������������2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &General::guna2TextBox4_KeyPress);
            // 
            // ����������_�����������_���_��������1
            // 
            this->����������_�����������_���_��������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->����������_�����������_���_��������1->BorderThickness = 3;
            this->����������_�����������_���_��������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->����������_�����������_���_��������1->DefaultText = L"";
            this->����������_�����������_���_��������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->����������_�����������_���_��������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->����������_�����������_���_��������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->����������_�����������_���_��������1->DisabledState->Parent = this->����������_�����������_���_��������1;
            this->����������_�����������_���_��������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->����������_�����������_���_��������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->����������_�����������_���_��������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->����������_�����������_���_��������1->FocusedState->Parent = this->����������_�����������_���_��������1;
            this->����������_�����������_���_��������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->����������_�����������_���_��������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->����������_�����������_���_��������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->����������_�����������_���_��������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->����������_�����������_���_��������1->HoverState->Parent = this->����������_�����������_���_��������1;
            this->����������_�����������_���_��������1->Location = System::Drawing::Point(264, 60);
            this->����������_�����������_���_��������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->����������_�����������_���_��������1->Name = L"����������_�����������_���_��������1";
            this->����������_�����������_���_��������1->PasswordChar = '\0';
            this->����������_�����������_���_��������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->����������_�����������_���_��������1->PlaceholderText = L"���������� ����������� ��� ��������";
            this->����������_�����������_���_��������1->SelectedText = L"";
            this->����������_�����������_���_��������1->ShadowDecoration->Parent = this->����������_�����������_���_��������1;
            this->����������_�����������_���_��������1->Size = System::Drawing::Size(176, 38);
            this->����������_�����������_���_��������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->����������_�����������_���_��������1->TabIndex = 60;
            this->����������_�����������_���_��������1->TextChanged += gcnew System::EventHandler(this, &General::����������_�����������_���_��������1_TextChanged);
            this->����������_�����������_���_��������1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &General::guna2TextBox4_KeyPress);
            // 
            // �����_�����1
            // 
            this->�����_�����1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_�����1->BorderThickness = 3;
            this->�����_�����1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->�����_�����1->DefaultText = L"";
            this->�����_�����1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->�����_�����1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->�����_�����1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_�����1->DisabledState->Parent = this->�����_�����1;
            this->�����_�����1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_�����1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_�����1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_�����1->FocusedState->Parent = this->�����_�����1;
            this->�����_�����1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->�����_�����1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_�����1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_�����1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_�����1->HoverState->Parent = this->�����_�����1;
            this->�����_�����1->Location = System::Drawing::Point(264, 220);
            this->�����_�����1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->�����_�����1->Name = L"�����_�����1";
            this->�����_�����1->PasswordChar = '\0';
            this->�����_�����1->PlaceholderForeColor = System::Drawing::Color::White;
            this->�����_�����1->PlaceholderText = L"����� ���������� �������������";
            this->�����_�����1->SelectedText = L"";
            this->�����_�����1->ShadowDecoration->Parent = this->�����_�����1;
            this->�����_�����1->Size = System::Drawing::Size(176, 38);
            this->�����_�����1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->�����_�����1->TabIndex = 59;
            this->�����_�����1->TextChanged += gcnew System::EventHandler(this, &General::�����_�����1_TextChanged);
            // 
            // ���������_����������_���1
            // 
            this->���������_����������_���1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_����������_���1->BorderThickness = 3;
            this->���������_����������_���1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->���������_����������_���1->DefaultText = L"";
            this->���������_����������_���1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->���������_����������_���1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->���������_����������_���1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���������_����������_���1->DisabledState->Parent = this->���������_����������_���1;
            this->���������_����������_���1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���������_����������_���1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_����������_���1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_����������_���1->FocusedState->Parent = this->���������_����������_���1;
            this->���������_����������_���1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->���������_����������_���1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_����������_���1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_����������_���1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_����������_���1->HoverState->Parent = this->���������_����������_���1;
            this->���������_����������_���1->Location = System::Drawing::Point(519, 100);
            this->���������_����������_���1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->���������_����������_���1->Name = L"���������_����������_���1";
            this->���������_����������_���1->PasswordChar = '\0';
            this->���������_����������_���1->PlaceholderForeColor = System::Drawing::Color::White;
            this->���������_����������_���1->PlaceholderText = L"��������� �������� ���������� ���";
            this->���������_����������_���1->SelectedText = L"";
            this->���������_����������_���1->ShadowDecoration->Parent = this->���������_����������_���1;
            this->���������_����������_���1->Size = System::Drawing::Size(176, 38);
            this->���������_����������_���1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->���������_����������_���1->TabIndex = 58;
            this->���������_����������_���1->TextChanged += gcnew System::EventHandler(this, &General::���������_����������_���1_TextChanged);
            // 
            // ��������_�����1
            // 
            this->��������_�����1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_�����1->BorderThickness = 3;
            this->��������_�����1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->��������_�����1->DefaultText = L"";
            this->��������_�����1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->��������_�����1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->��������_�����1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������_�����1->DisabledState->Parent = this->��������_�����1;
            this->��������_�����1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������_�����1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_�����1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_�����1->FocusedState->Parent = this->��������_�����1;
            this->��������_�����1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->��������_�����1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_�����1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_�����1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_�����1->HoverState->Parent = this->��������_�����1;
            this->��������_�����1->Location = System::Drawing::Point(519, 138);
            this->��������_�����1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->��������_�����1->Name = L"��������_�����1";
            this->��������_�����1->PasswordChar = '\0';
            this->��������_�����1->PlaceholderForeColor = System::Drawing::Color::White;
            this->��������_�����1->PlaceholderText = L"�������� �����";
            this->��������_�����1->SelectedText = L"";
            this->��������_�����1->ShadowDecoration->Parent = this->��������_�����1;
            this->��������_�����1->Size = System::Drawing::Size(176, 38);
            this->��������_�����1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->��������_�����1->TabIndex = 57;
            this->��������_�����1->TextChanged += gcnew System::EventHandler(this, &General::��������_�����1_TextChanged);
            // 
            // ��������������_�����1
            // 
            this->��������������_�����1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������������_�����1->BorderThickness = 3;
            this->��������������_�����1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->��������������_�����1->DefaultText = L"";
            this->��������������_�����1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->��������������_�����1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->��������������_�����1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������������_�����1->DisabledState->Parent = this->��������������_�����1;
            this->��������������_�����1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������������_�����1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������������_�����1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������������_�����1->FocusedState->Parent = this->��������������_�����1;
            this->��������������_�����1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->��������������_�����1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������������_�����1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������������_�����1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������������_�����1->HoverState->Parent = this->��������������_�����1;
            this->��������������_�����1->Location = System::Drawing::Point(519, 178);
            this->��������������_�����1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->��������������_�����1->Name = L"��������������_�����1";
            this->��������������_�����1->PasswordChar = '\0';
            this->��������������_�����1->PlaceholderForeColor = System::Drawing::Color::White;
            this->��������������_�����1->PlaceholderText = L"�������������� �����";
            this->��������������_�����1->SelectedText = L"";
            this->��������������_�����1->ShadowDecoration->Parent = this->��������������_�����1;
            this->��������������_�����1->Size = System::Drawing::Size(176, 38);
            this->��������������_�����1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->��������������_�����1->TabIndex = 56;
            this->��������������_�����1->TextChanged += gcnew System::EventHandler(this, &General::��������������_�����1_TextChanged);
            // 
            // ���_����������1
            // 
            this->���_����������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_����������1->BorderThickness = 3;
            this->���_����������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->���_����������1->DefaultText = L"";
            this->���_����������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->���_����������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->���_����������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���_����������1->DisabledState->Parent = this->���_����������1;
            this->���_����������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���_����������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_����������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_����������1->FocusedState->Parent = this->���_����������1;
            this->���_����������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->���_����������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_����������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_����������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_����������1->HoverState->Parent = this->���_����������1;
            this->���_����������1->Location = System::Drawing::Point(519, 217);
            this->���_����������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->���_����������1->Name = L"���_����������1";
            this->���_����������1->PasswordChar = '\0';
            this->���_����������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->���_����������1->PlaceholderText = L"��� ����������";
            this->���_����������1->SelectedText = L"";
            this->���_����������1->ShadowDecoration->Parent = this->���_����������1;
            this->���_����������1->Size = System::Drawing::Size(176, 38);
            this->���_����������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->���_����������1->TabIndex = 55;
            this->���_����������1->TextChanged += gcnew System::EventHandler(this, &General::���_����������1_TextChanged);
            // 
            // ���������_�����1
            // 
            this->���������_�����1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_�����1->BorderThickness = 3;
            this->���������_�����1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->���������_�����1->DefaultText = L"";
            this->���������_�����1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->���������_�����1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->���������_�����1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���������_�����1->DisabledState->Parent = this->���������_�����1;
            this->���������_�����1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���������_�����1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_�����1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_�����1->FocusedState->Parent = this->���������_�����1;
            this->���������_�����1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->���������_�����1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_�����1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_�����1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_�����1->HoverState->Parent = this->���������_�����1;
            this->���������_�����1->Location = System::Drawing::Point(264, 179);
            this->���������_�����1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->���������_�����1->Name = L"���������_�����1";
            this->���������_�����1->PasswordChar = '\0';
            this->���������_�����1->PlaceholderForeColor = System::Drawing::Color::White;
            this->���������_�����1->PlaceholderText = L"��������� �������������";
            this->���������_�����1->SelectedText = L"";
            this->���������_�����1->ShadowDecoration->Parent = this->���������_�����1;
            this->���������_�����1->Size = System::Drawing::Size(176, 38);
            this->���������_�����1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->���������_�����1->TabIndex = 54;
            this->���������_�����1->TextChanged += gcnew System::EventHandler(this, &General::���������_�����1_TextChanged);
            // 
            // ������������1
            // 
            this->������������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->������������1->BorderThickness = 3;
            this->������������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->������������1->DefaultText = L"";
            this->������������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->������������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->������������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->������������1->DisabledState->Parent = this->������������1;
            this->������������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->������������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->������������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->������������1->FocusedState->Parent = this->������������1;
            this->������������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->������������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->������������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->������������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->������������1->HoverState->Parent = this->������������1;
            this->������������1->Location = System::Drawing::Point(31, 22);
            this->������������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->������������1->Name = L"������������1";
            this->������������1->PasswordChar = '\0';
            this->������������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->������������1->PlaceholderText = L"������������";
            this->������������1->SelectedText = L"";
            this->������������1->ShadowDecoration->Parent = this->������������1;
            this->������������1->Size = System::Drawing::Size(176, 38);
            this->������������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->������������1->TabIndex = 53;
            this->������������1->TextChanged += gcnew System::EventHandler(this, &General::������������1_TextChanged);
            // 
            // ��������_����������1
            // 
            this->��������_����������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_����������1->BorderThickness = 3;
            this->��������_����������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->��������_����������1->DefaultText = L"";
            this->��������_����������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->��������_����������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->��������_����������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������_����������1->DisabledState->Parent = this->��������_����������1;
            this->��������_����������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������_����������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_����������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_����������1->FocusedState->Parent = this->��������_����������1;
            this->��������_����������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->��������_����������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_����������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_����������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_����������1->HoverState->Parent = this->��������_����������1;
            this->��������_����������1->Location = System::Drawing::Point(264, 22);
            this->��������_����������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->��������_����������1->Name = L"��������_����������1";
            this->��������_����������1->PasswordChar = '\0';
            this->��������_����������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->��������_����������1->PlaceholderText = L"�������� ���������� ���������";
            this->��������_����������1->SelectedText = L"";
            this->��������_����������1->ShadowDecoration->Parent = this->��������_����������1;
            this->��������_����������1->Size = System::Drawing::Size(176, 38);
            this->��������_����������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->��������_����������1->TabIndex = 51;
            this->��������_����������1->TextChanged += gcnew System::EventHandler(this, &General::��������_����������1_TextChanged_1);
            // 
            // ���_�������������1
            // 
            this->���_�������������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_�������������1->BorderThickness = 3;
            this->���_�������������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->���_�������������1->DefaultText = L"";
            this->���_�������������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->���_�������������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->���_�������������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���_�������������1->DisabledState->Parent = this->���_�������������1;
            this->���_�������������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���_�������������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_�������������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_�������������1->FocusedState->Parent = this->���_�������������1;
            this->���_�������������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->���_�������������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_�������������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_�������������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_�������������1->HoverState->Parent = this->���_�������������1;
            this->���_�������������1->Location = System::Drawing::Point(264, 100);
            this->���_�������������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->���_�������������1->Name = L"���_�������������1";
            this->���_�������������1->PasswordChar = '\0';
            this->���_�������������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->���_�������������1->PlaceholderText = L"��� �������������";
            this->���_�������������1->SelectedText = L"";
            this->���_�������������1->ShadowDecoration->Parent = this->���_�������������1;
            this->���_�������������1->Size = System::Drawing::Size(176, 38);
            this->���_�������������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->���_�������������1->TabIndex = 50;
            this->���_�������������1->TextChanged += gcnew System::EventHandler(this, &General::���_�������������1_TextChanged);
            // 
            // ��������_����������_�������������1
            // 
            this->��������_����������_�������������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_����������_�������������1->BorderThickness = 3;
            this->��������_����������_�������������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->��������_����������_�������������1->DefaultText = L"";
            this->��������_����������_�������������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->��������_����������_�������������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->��������_����������_�������������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������_����������_�������������1->DisabledState->Parent = this->��������_����������_�������������1;
            this->��������_����������_�������������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������_����������_�������������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_����������_�������������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_����������_�������������1->FocusedState->Parent = this->��������_����������_�������������1;
            this->��������_����������_�������������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->��������_����������_�������������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_����������_�������������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������_����������_�������������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������_����������_�������������1->HoverState->Parent = this->��������_����������_�������������1;
            this->��������_����������_�������������1->Location = System::Drawing::Point(519, 22);
            this->��������_����������_�������������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->��������_����������_�������������1->Name = L"��������_����������_�������������1";
            this->��������_����������_�������������1->PasswordChar = '\0';
            this->��������_����������_�������������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->��������_����������_�������������1->PlaceholderText = L"�������� ���������� �������������";
            this->��������_����������_�������������1->SelectedText = L"";
            this->��������_����������_�������������1->ShadowDecoration->Parent = this->��������_����������_�������������1;
            this->��������_����������_�������������1->Size = System::Drawing::Size(176, 38);
            this->��������_����������_�������������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->��������_����������_�������������1->TabIndex = 49;
            this->��������_����������_�������������1->TextChanged += gcnew System::EventHandler(this, &General::��������_����������_�������������1_TextChanged);
            // 
            // �����_����������_�������������1
            // 
            this->�����_����������_�������������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����������_�������������1->BorderThickness = 3;
            this->�����_����������_�������������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->�����_����������_�������������1->DefaultText = L"";
            this->�����_����������_�������������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->�����_����������_�������������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->�����_����������_�������������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_����������_�������������1->DisabledState->Parent = this->�����_����������_�������������1;
            this->�����_����������_�������������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_����������_�������������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����������_�������������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����������_�������������1->FocusedState->Parent = this->�����_����������_�������������1;
            this->�����_����������_�������������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->�����_����������_�������������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����������_�������������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����������_�������������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����������_�������������1->HoverState->Parent = this->�����_����������_�������������1;
            this->�����_����������_�������������1->Location = System::Drawing::Point(264, 140);
            this->�����_����������_�������������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->�����_����������_�������������1->Name = L"�����_����������_�������������1";
            this->�����_����������_�������������1->PasswordChar = '\0';
            this->�����_����������_�������������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->�����_����������_�������������1->PlaceholderText = L"����� ���������� �������������";
            this->�����_����������_�������������1->SelectedText = L"";
            this->�����_����������_�������������1->ShadowDecoration->Parent = this->�����_����������_�������������1;
            this->�����_����������_�������������1->Size = System::Drawing::Size(176, 38);
            this->�����_����������_�������������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->�����_����������_�������������1->TabIndex = 48;
            this->�����_����������_�������������1->TextChanged += gcnew System::EventHandler(this, &General::�����_����������_�������������1_TextChanged);
            // 
            // ���������_�����1
            // 
            this->���������_�����1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_�����1->BorderThickness = 3;
            this->���������_�����1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->���������_�����1->DefaultText = L"";
            this->���������_�����1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->���������_�����1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->���������_�����1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���������_�����1->DisabledState->Parent = this->���������_�����1;
            this->���������_�����1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���������_�����1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_�����1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_�����1->FocusedState->Parent = this->���������_�����1;
            this->���������_�����1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->���������_�����1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_�����1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���������_�����1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���������_�����1->HoverState->Parent = this->���������_�����1;
            this->���������_�����1->Location = System::Drawing::Point(31, 180);
            this->���������_�����1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->���������_�����1->Name = L"���������_�����1";
            this->���������_�����1->PasswordChar = '\0';
            this->���������_�����1->PlaceholderForeColor = System::Drawing::Color::White;
            this->���������_�����1->PlaceholderText = L"��������� ���������";
            this->���������_�����1->SelectedText = L"";
            this->���������_�����1->ShadowDecoration->Parent = this->���������_�����1;
            this->���������_�����1->Size = System::Drawing::Size(176, 38);
            this->���������_�����1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->���������_�����1->TabIndex = 47;
            this->���������_�����1->TextChanged += gcnew System::EventHandler(this, &General::���������_�����1_TextChanged);
            // 
            // �����_����_���������1
            // 
            this->�����_����_���������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����_���������1->BorderThickness = 3;
            this->�����_����_���������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->�����_����_���������1->DefaultText = L"";
            this->�����_����_���������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->�����_����_���������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->�����_����_���������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_����_���������1->DisabledState->Parent = this->�����_����_���������1;
            this->�����_����_���������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_����_���������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����_���������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����_���������1->FocusedState->Parent = this->�����_����_���������1;
            this->�����_����_���������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->�����_����_���������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����_���������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����_���������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����_���������1->HoverState->Parent = this->�����_����_���������1;
            this->�����_����_���������1->Location = System::Drawing::Point(31, 222);
            this->�����_����_���������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->�����_����_���������1->Name = L"�����_����_���������1";
            this->�����_����_���������1->PasswordChar = '\0';
            this->�����_����_���������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->�����_����_���������1->PlaceholderText = L"����� ���������� ���������";
            this->�����_����_���������1->SelectedText = L"";
            this->�����_����_���������1->ShadowDecoration->Parent = this->�����_����_���������1;
            this->�����_����_���������1->Size = System::Drawing::Size(176, 38);
            this->�����_����_���������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->�����_����_���������1->TabIndex = 46;
            this->�����_����_���������1->TextChanged += gcnew System::EventHandler(this, &General::�����_����_���������1_TextChanged);
            // 
            // �����_����������_���������1
            // 
            this->�����_����������_���������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����������_���������1->BorderThickness = 3;
            this->�����_����������_���������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->�����_����������_���������1->DefaultText = L"";
            this->�����_����������_���������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->�����_����������_���������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->�����_����������_���������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_����������_���������1->DisabledState->Parent = this->�����_����������_���������1;
            this->�����_����������_���������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->�����_����������_���������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����������_���������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����������_���������1->FocusedState->Parent = this->�����_����������_���������1;
            this->�����_����������_���������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->�����_����������_���������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����������_���������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->�����_����������_���������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->�����_����������_���������1->HoverState->Parent = this->�����_����������_���������1;
            this->�����_����������_���������1->Location = System::Drawing::Point(31, 139);
            this->�����_����������_���������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->�����_����������_���������1->Name = L"�����_����������_���������1";
            this->�����_����������_���������1->PasswordChar = '\0';
            this->�����_����������_���������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->�����_����������_���������1->PlaceholderText = L"����� ���������� ���������";
            this->�����_����������_���������1->SelectedText = L"";
            this->�����_����������_���������1->ShadowDecoration->Parent = this->�����_����������_���������1;
            this->�����_����������_���������1->Size = System::Drawing::Size(176, 38);
            this->�����_����������_���������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->�����_����������_���������1->TabIndex = 45;
            this->�����_����������_���������1->TextChanged += gcnew System::EventHandler(this, &General::�����_����������_���������1_TextChanged);
            // 
            // ���_���������1
            // 
            this->���_���������1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_���������1->BorderThickness = 3;
            this->���_���������1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->���_���������1->DefaultText = L"";
            this->���_���������1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->���_���������1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->���_���������1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���_���������1->DisabledState->Parent = this->���_���������1;
            this->���_���������1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->���_���������1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_���������1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_���������1->FocusedState->Parent = this->���_���������1;
            this->���_���������1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->���_���������1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_���������1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->���_���������1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->���_���������1->HoverState->Parent = this->���_���������1;
            this->���_���������1->Location = System::Drawing::Point(31, 100);
            this->���_���������1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->���_���������1->Name = L"���_���������1";
            this->���_���������1->PasswordChar = '\0';
            this->���_���������1->PlaceholderForeColor = System::Drawing::Color::White;
            this->���_���������1->PlaceholderText = L"��� ���������";
            this->���_���������1->SelectedText = L"";
            this->���_���������1->ShadowDecoration->Parent = this->���_���������1;
            this->���_���������1->Size = System::Drawing::Size(176, 38);
            this->���_���������1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->���_���������1->TabIndex = 44;
            this->���_���������1->TextChanged += gcnew System::EventHandler(this, &General::���_���������1_TextChanged);
            // 
            // ��������������_���1
            // 
            this->��������������_���1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������������_���1->BorderThickness = 3;
            this->��������������_���1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->��������������_���1->DefaultText = L"";
            this->��������������_���1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
                static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
            this->��������������_���1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
                static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
            this->��������������_���1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������������_���1->DisabledState->Parent = this->��������������_���1;
            this->��������������_���1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->��������������_���1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������������_���1->FocusedState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������������_���1->FocusedState->Parent = this->��������������_���1;
            this->��������������_���1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->��������������_���1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������������_���1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
                static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->��������������_���1->HoverState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->��������������_���1->HoverState->Parent = this->��������������_���1;
            this->��������������_���1->Location = System::Drawing::Point(31, 60);
            this->��������������_���1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->��������������_���1->Name = L"��������������_���1";
            this->��������������_���1->PasswordChar = '\0';
            this->��������������_���1->PlaceholderForeColor = System::Drawing::Color::White;
            this->��������������_���1->PlaceholderText = L"�������������� ���";
            this->��������������_���1->SelectedText = L"";
            this->��������������_���1->ShadowDecoration->Parent = this->��������������_���1;
            this->��������������_���1->Size = System::Drawing::Size(176, 38);
            this->��������������_���1->Style = Guna::UI2::WinForms::Enums::TextBoxStyle::Material;
            this->��������������_���1->TabIndex = 43;
            this->��������������_���1->TextChanged += gcnew System::EventHandler(this, &General::��������������_���1_TextChanged);
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->panelEdit);
            this->tabPage3->Location = System::Drawing::Point(4, 22);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(748, 392);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"�������� ������";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->panelDel);
            this->tabPage4->Location = System::Drawing::Point(4, 22);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(748, 392);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"������� ������";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // TestTable
            // 
            this->TestTable->AllowUserToAddRows = false;
            this->TestTable->AllowUserToDeleteRows = false;
            this->TestTable->BackgroundColor = System::Drawing::Color::White;
            this->TestTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->TestTable->GridColor = System::Drawing::Color::White;
            this->TestTable->Location = System::Drawing::Point(848, 356);
            this->TestTable->Name = L"TestTable";
            this->TestTable->ReadOnly = true;
            this->TestTable->Size = System::Drawing::Size(15, 14);
            this->TestTable->TabIndex = 54;
            // 
            // General
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(756, 473);
            this->Controls->Add(this->TestTable);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->panel2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"General";
            this->Text = L"General";
            this->Load += gcnew System::EventHandler(this, &General::General_Load);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit))->EndInit();
            this->panelDel->ResumeLayout(false);
            this->panelDel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DelTable))->EndInit();
            this->panelEdit->ResumeLayout(false);
            this->panelEdit->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EditTable))->EndInit();
            this->panelView->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dat))->EndInit();
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage2->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->tabPage3->ResumeLayout(false);
            this->tabPage4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TestTable))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion




    private:
        System::Void bunifuFlatButton1_Click(System::Object^ sender, System::EventArgs^ e) {
        }
        int n = 1;
    private:
        System::Void General_Load(System::Object^ sender, System::EventArgs^ e) {
            String^ path = "DTP.db"; //���� � ����� ��

            String^ ConnectionString = "Data Source=" + path + ";Version=3;New=True;Compress=True;";
            DataSet^ ds = gcnew DataSet();
        
            sql = " Select g.ID, d.������������, d.��������������_���, d.����_���, v.���_���������, v.�����_����������_���������, v.���������_���������, v.�����_����������_���������, v.��������_����������_���������,v.����������_�����������_���_��������,  p.���_�������������, p.�����_����������_�������������, p.���������_�������������, p.�����_����������_�������������, p.��������_����������_�������������,p.����������_�����������_���_������������ , d.���������_����������_���, j.��������_�����, j.��������������_�����, j.���_���������� FROM General g INNER JOIN ��� d ON g.ID_��� = d.ID_��� INNER JOIN ����� j ON g.ID_����� = j.ID_����� INNER JOIN �������� v ON d.ID_��������� = v.ID_��������� INNER JOIN ������������ p ON d.ID_������������� = p.ID_������������� where d.��������������_��� like '%" + Search->Text + "%' or d.����_��� like '%" + Search->Text + "%'";


            SQLiteConnection^ conn = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da = gcnew SQLiteDataAdapter(sql, conn);

            da->Fill(ds);
            Dat->DataSource = ds->Tables[0]->DefaultView;
            conn->Close();
        }
   
        System::Void bunifuFlatButton2_Click(System::Object^ sender, System::EventArgs^ e) {

        }
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }



    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void view_Load(System::Object^ sender, System::EventArgs^ e) {

    }





    public: System::Void metroComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    public: System::Void bunifuCustomLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void bunifuCustomLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }

           String^ ������������2;
           String^ ��������������_���2;
           String^ ���_���������2;
           String^ �����_����������_���������2;
           String^ ���������_�����2;
           String^ �����_����_���������2;
           String^ ��������_����������_���������2;
           String^ ���_�������������2;
           String^ �����_����������_�������������2;
           String^ ���������_�������������2;
           String^ �����_�����2;
           String^ ��������_����������_�������������2;
           String^ ���������_����������_���2;
           String^ ��������_�����2;
           String^ ��������������_�����2;
           String^ ���_����������2;

           String^ ����������_�����������_���_��������2;
           String^ ����������_�����������_���_�������������3;
           String^ ����_���2;
           


           String^ sql;
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

        if (������������1->Text == "" || ��������������_���1->Text == "" || ���_���������1->Text == "" || �����_����������_���������1->Text == "" || ���������_�����1->Text == "" || �����_����_���������1->Text == "" || ��������_����������1->Text == "" || ���_�������������1->Text == "" || �����_����������_�������������1->Text == "" || ���������_�����1->Text == "" || �����_�����1->Text == "" || ��������_����������_�������������1->Text == "" || ���������_����������_���1->Text == "" || ��������_�����1->Text == "" || ��������������_�����1->Text == "" || ���_����������1->Text == "" || ����������_�����������_���_��������1->Text == "" || ����������_�����������_���_������������2->Text == "") {
            Addtxt->Text = "������!";

            Addtxt->ForeColor = Color::Red;
        }
        else {
            String^ path = "DTP.db"; //���� � ����� ��

            String^ ConnectionString = "Data Source=" + path + ";Version=3;New=True;Compress=True;";
            DataSet^ ds = gcnew DataSet();
            sql = "SELECT MAX(ID)  FROM  General";
            SQLiteConnection^ conn = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da = gcnew SQLiteDataAdapter(sql, conn);

            da->Fill(ds);
            TestTable->DataSource = ds->Tables[0]->DefaultView;
            conn->Close();
            String^ ID = TestTable["MAX(ID)", TestTable->CurrentRow->Index]->Value->ToString();
            int id = Convert::ToInt32(ID);
            id = id + 1;
            ID = Convert::ToString(id);


          
            DataSet^ ds1 = gcnew DataSet();
            sql = "INSERT INTO General ('ID','ID_���','ID_�����') VALUES ('" + ID + "', '" + ID + "','" + ID + "')";
            SQLiteConnection^ conn1 = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da1 = gcnew SQLiteDataAdapter(sql, conn1);

            da1->Fill(ds1);

            conn1->Close();

            DataSet^ ds2 = gcnew DataSet();
            sql = "INSERT INTO ��� ('ID_���','��������������_���','������������','���������_����������_���','ID_�������������','ID_���������','����_���') VALUES  ('" + ID + "', '" + ��������������_���2 + "','" + ������������2 + "', '" + ���������_����������_���2 + "', '" + ID + "', '" + ID + "', '" + ����_���2 + "')";
            SQLiteConnection^ conn2 = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da2 = gcnew SQLiteDataAdapter(sql, conn2);

            da2->Fill(ds2);

            conn2->Close();

            DataSet^ ds3 = gcnew DataSet();
            sql = "INSERT INTO ������������ ('ID_�������������','���_�������������','�����_����������_�������������','���������_�������������','�����_����������_�������������','��������_����������_�������������','����������_�����������_���_������������') VALUES  ('" + ID + "', '" + ���_�������������2 + "','" + �����_����������_�������������2 + "', '" + ���������_�������������2 + "', '" + �����_�����2 + "', '" + ��������_����������_�������������2 + "', '" + ����������_�����������_���_�������������3 + "')";
            SQLiteConnection^ conn3 = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da3 = gcnew SQLiteDataAdapter(sql, conn3);

            da3->Fill(ds3);

            conn3->Close();

            DataSet^ ds4 = gcnew DataSet();
            sql = "INSERT INTO �������� ('ID_���������','���_���������','�����_����������_���������','���������_���������','�����_����������_���������','��������_����������_���������','����������_�����������_���_��������') VALUES  ('" + ID + "', '" + ���_���������2 + "','" + �����_����������_���������2 + "', '" + ���������_�����2 + "', '" + �����_����_���������2 + "', '" + ��������_����������_���������2 + "', '" + ����������_�����������_���_��������2 + "')";
            SQLiteConnection^ conn4 = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da4 = gcnew SQLiteDataAdapter(sql, conn4);

            da4->Fill(ds4);

            conn4->Close();
            
            DataSet^ ds5 = gcnew DataSet();
            sql = "INSERT INTO ����� ('ID_�����','��������_�����','��������������_�����','���_����������') VALUES  ('" + ID + "', '" + ��������_�����2 + "','" + ��������������_�����2 + "','" + ���_����������2 + "')";
            SQLiteConnection^ conn5 = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da5 = gcnew SQLiteDataAdapter(sql, conn5);

            da5->Fill(ds5);

            conn5->Close();

            ������������1->Text = "";
            ��������������_���1->Text = "";
            ���_���������1->Text = "";
            �����_����������_���������1->Text = "";
            ���������_�����1->Text = "";
            �����_����_���������1->Text = "";
            ��������_����������1->Text = "";
            ���_�������������1->Text = "";
            �����_����������_�������������1->Text = "";
            ���������_�����1->Text = "";
            �����_�����1->Text = "";
            ��������_����������_�������������1->Text = "";
            ���������_����������_���1->Text = "";
            ��������_�����1->Text = "";
            ��������������_�����1->Text = "";
            ���_����������1->Text = "";
            ����������_�����������_���_������������2->Text = "";
            ����������_�����������_���_��������1->Text="";
            guna2TextBox1->Text = "";
            Addtxt->Text = "������ ���������!";
            Addtxt->ForeColor = Color::Green;
            General_Load(nullptr, nullptr);
        }




    }
    public:String^ searchDelete;
    private: System::Void SearchDelete_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        searchDelete = SearchDelete->Text;
        Deltxt->Text = "";
    }

    private: System::Void Bt_search_delete_Click(System::Object^ sender, System::EventArgs^ e) {
        if (SearchDelete->Text == "")
        {


            Deltxt->ForeColor = Color::Red;
            Deltxt->Text = "������!";
        }
        else
        {
            String^ path = "DTP.db"; //���� � ����� ��

            String^ ConnectionString = "Data Source=" + path + ";Version=3;New=True;Compress=True;";
            DataSet^ ds = gcnew DataSet();
            sql = " Select g.ID, d.������������, d.��������������_���, d.����_���, v.���_���������, v.�����_����������_���������, v.���������_���������, v.�����_����������_���������, v.��������_����������_���������,v.����������_�����������_���_��������,  p.���_�������������, p.�����_����������_�������������, p.���������_�������������, p.�����_����������_�������������, p.��������_����������_�������������,p.����������_�����������_���_������������ , d.���������_����������_���, j.��������_�����, j.��������������_�����, j.���_���������� FROM General g INNER JOIN ��� d ON g.ID_��� = d.ID_��� INNER JOIN ����� j ON g.ID_����� = j.ID_����� INNER JOIN �������� v ON d.ID_��������� = v.ID_��������� INNER JOIN ������������ p ON d.ID_������������� = p.ID_������������� where g.ID = '" + searchDelete + "'";;
            SQLiteConnection^ conn = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da = gcnew SQLiteDataAdapter(sql, conn);

            da->Fill(ds);
            DelTable->DataSource = ds->Tables[0]->DefaultView;
            conn->Close();
            DelTable->Columns[0]->ReadOnly = true;
        }
    }


    private: System::Void Del_Click(System::Object^ sender, System::EventArgs^ e) {
        if (SearchDelete->Text == "")
        {


            Deltxt->ForeColor = Color::Red;
            Deltxt->Text = "������!";
        }
        else
        {


            if (DelTable->Rows->Count == 0)
            {


                Deltxt->ForeColor = Color::Red;
                Deltxt->Text = "������!";
            }

            if (DelTable->Rows->Count != 0)
            {

                String^ path = "DTP.db"; //���� � ����� ��

                String^ ConnectionString = "Data Source=" + path + ";Version=3;New=True;Compress=True;";
                DataSet^ ds1 = gcnew DataSet();
                sql = "Delete From General where ID='" + searchDelete + "'";
                SQLiteConnection^ conn1 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da1 = gcnew SQLiteDataAdapter(sql, conn1);

                da1->Fill(ds1);
                conn1->Close();

                DataSet^ ds2 = gcnew DataSet();
                sql = "Delete From �������� where ID_���������='" + searchDelete + "'";
                SQLiteConnection^ conn2 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da2 = gcnew SQLiteDataAdapter(sql, conn2);

                da2->Fill(ds2);
                conn2->Close();

                DataSet^ ds3 = gcnew DataSet();
                sql = "Delete From ����� where ID_�����='" + searchDelete + "'";
                SQLiteConnection^ conn3 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da3 = gcnew SQLiteDataAdapter(sql, conn3);

                da3->Fill(ds3);
                conn3->Close();

                DataSet^ ds4 = gcnew DataSet();
                sql = "Delete From ��� where ID_���='" + searchDelete + "'";
                SQLiteConnection^ conn4 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da4 = gcnew SQLiteDataAdapter(sql, conn4);

                da4->Fill(ds4);
                conn4->Close();

                DataSet^ ds5 = gcnew DataSet();
                sql = "Delete From ������������ where ID_�������������='" + searchDelete + "'";
                SQLiteConnection^ conn5 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da5 = gcnew SQLiteDataAdapter(sql, conn5);

                da5->Fill(ds5);
                conn5->Close();
                Deltxt->ForeColor = Color::Green;
                Deltxt->Text = "������ �������!"; General_Load(nullptr, nullptr);
            }
        }

    }
    public:String^ searchEdit;
    private: System::Void Search_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        searchEdit = Search->Text;
        TxtEdit->Text = "";
    }
    private: System::Void EditSearch_Click(System::Object^ sender, System::EventArgs^ e) {
        if (Search->Text == "")
        {


            TxtEdit->ForeColor = Color::Red;
            TxtEdit->Text = "������!";
        }
        else
        {
            String^ path = "DTP.db"; //���� � ����� ��

            String^ ConnectionString = "Data Source=" + path + ";Version=3;New=True;Compress=True;";
            DataSet^ ds = gcnew DataSet();
            sql = " Select g.ID, d.������������, d.��������������_���, d.����_���, v.���_���������, v.�����_����������_���������, v.���������_���������, v.�����_����������_���������, v.��������_����������_���������,v.����������_�����������_���_��������,  p.���_�������������, p.�����_����������_�������������, p.���������_�������������, p.�����_����������_�������������, p.��������_����������_�������������,p.����������_�����������_���_������������ , d.���������_����������_���, j.��������_�����, j.��������������_�����, j.���_����������  FROM General g INNER JOIN ��� d ON g.ID_��� = d.ID_��� INNER JOIN ����� j ON g.ID_����� = j.ID_����� INNER JOIN �������� v ON d.ID_��������� = v.ID_��������� INNER JOIN ������������ p ON d.ID_������������� = p.ID_������������� where g.ID='" + searchEdit + "'";

            SQLiteConnection^ conn = gcnew SQLiteConnection(ConnectionString);

            SQLiteDataAdapter^ da = gcnew SQLiteDataAdapter(sql, conn);

            da->Fill(ds);
            EditTable->DataSource = ds->Tables[0]->DefaultView;
            conn->Close();
            EditTable->Columns[0]->ReadOnly = true;
        }
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        if (Search->Text == "")
        {


            TxtEdit->ForeColor = Color::Red;
            TxtEdit->Text = "������!";
        }
        else
        {


            if (EditTable->Rows->Count == 0)
            {


                TxtEdit->ForeColor = Color::Red;
                TxtEdit->Text = "������!";
            }

            if (EditTable->Rows->Count != 0)
            {
                String^ path = "DTP.db"; //���� � ����� ��

                String^ ConnectionString = "Data Source=" + path + ";Version=3;New=True;Compress=True;";
                 
                String^ ������������ = EditTable["������������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ����_��� = EditTable["����_���", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ����������_�����������_���_�������� = EditTable["����������_�����������_���_��������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ����������_�����������_���_������������� = EditTable["����������_�����������_���_������������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ��������������_��� = EditTable["��������������_���", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ���_��������� = EditTable["���_���������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ �����_����������_��������� = EditTable["�����_����������_���������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ���������_��������� = EditTable["���������_���������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ �����_����������_��������� = EditTable["�����_����������_���������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ��������_����������_��������� = EditTable["��������_����������_���������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ���_������������� = EditTable["���_�������������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ �����_����������_������������� = EditTable["�����_����������_�������������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ���������_������������� = EditTable["���������_�������������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ �����_����������_������������� = EditTable["�����_����������_�������������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ��������_����������_������������� = EditTable["��������_����������_�������������", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ���������_����������_��� = EditTable["���������_����������_���", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ��������_����� = EditTable["��������_�����", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ��������������_����� = EditTable["��������������_�����", EditTable->CurrentRow->Index]->Value->ToString();
                String^ ���_���������� = EditTable["���_����������", EditTable->CurrentRow->Index]->Value->ToString();
                DataSet^ ds1 = gcnew DataSet();
                sql = "UPDATE ��� SET  	��������������_���='" + ��������������_��� + "',������������='" + ������������ + "',����_���='" + ����_��� + "',���������_����������_���='" + ���������_����������_��� + "' where ID_���='" + searchEdit + "'";
                SQLiteConnection^ conn1 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da1 = gcnew SQLiteDataAdapter(sql, conn1);

                da1->Fill(ds1);

                conn1->Close();

                DataSet^ ds2 = gcnew DataSet();
                sql = "UPDATE �������� SET  	���_���������='" + ���_��������� + "',�����_����������_���������='" + �����_����������_��������� + "',�����_����������_���������='" + �����_����������_��������� + "' ,��������_����������_���������='" + ��������_����������_��������� + "' ,���������_���������='" + ���������_��������� + "',����������_�����������_���_��������='" + ����������_�����������_���_�������� + "' where ID_���������='" + searchEdit + "'";

                SQLiteConnection^ conn2 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da2 = gcnew SQLiteDataAdapter(sql, conn2);

                da2->Fill(ds2);

                conn2->Close();

                DataSet^ ds4 = gcnew DataSet();
                sql = "UPDATE ������������ SET  	���_�������������='" + ���_������������� + "' ,�����_����������_�������������='" + �����_����������_������������� + "' ,���������_�������������='" + ���������_������������� + "',�����_����������_�������������='" + �����_����������_������������� + "'  ,��������_����������_�������������='" + ��������_����������_������������� + "',����������_�����������_���_������������='" + ����������_�����������_���_������������� + "' where ID_�������������='" + searchEdit + "'";
                SQLiteConnection^ conn4 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da4 = gcnew SQLiteDataAdapter(sql, conn4);

                da4->Fill(ds4);

                conn4->Close();

                DataSet^ ds5 = gcnew DataSet();
                sql = "UPDATE ����� SET  	��������_�����='" + ��������_����� + "',��������������_�����='" + ��������������_����� + "', ���_����������='" + ���_���������� + "' where ID_�����='"+ searchEdit +"'";
                SQLiteConnection^ conn5 = gcnew SQLiteConnection(ConnectionString);

                SQLiteDataAdapter^ da5 = gcnew SQLiteDataAdapter(sql, conn5);

                da5->Fill(ds5);

                conn5->Close();
                TxtEdit->ForeColor = Color::Green;
                TxtEdit->Text = "������ ��������!"; General_Load(nullptr, nullptr);
            }
        }
    }




    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        General_Load(nullptr, nullptr);
    }
    private: System::Void guna2TextBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
            e->Handled = true;
    }
    private: System::Void guna2TextBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
            e->Handled = true;
    }
    private: System::Void guna2TextBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
            e->Handled = true;
    }
    private: System::Void guna2TextBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
            e->Handled = true;
    }
    private: System::Void guna2TextBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
            e->Handled = true;
    }
    private: System::Void Search_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
            e->Handled = true;
    }
    private: System::Void SearchDelete_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
        if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
            e->Handled = true;
    }
    private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void Dat_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }


    private: System::Void ������������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ������������2 = ������������1->Text;
    }
    private: System::Void ��������������_���1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ��������������_���2 = ��������������_���1->Text;
    }
    private: System::Void ���_���������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ���_���������2 = ���_���������1->Text;
    }
    private: System::Void �����_����������_���������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        �����_����������_���������2 = �����_����������_���������1->Text;
    }

    private: System::Void ���������_�����1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ���������_�����2 = ���������_�����1->Text;
    }
    private: System::Void �����_����_���������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        �����_����_���������2 = �����_����_���������1->Text;
    }
    private: System::Void ��������_����������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ��������_����������_���������2 = ��������_����������1->Text;
    }
    private: System::Void ���_�������������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ���_�������������2 = ���_�������������1->Text;
    }
    private: System::Void �����_����������_�������������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        �����_����������_�������������2 = �����_����������_�������������1->Text;
    }
    private: System::Void ���������_�����1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ���������_�������������2 = ���������_�����1->Text;
    }
    private: System::Void �����_�����1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        �����_�����2 = �����_�����1->Text;
    }
    private: System::Void ��������_����������_�������������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ��������_����������_�������������2 = ��������_����������_�������������1->Text;
    }
    private: System::Void ���������_����������_���1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ���������_����������_���2 = ���������_����������_���1->Text;
    }
    private: System::Void ��������_�����1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ��������_�����2 = ��������_�����1->Text;
    }
    private: System::Void ��������������_�����1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ��������������_�����2 = ��������������_�����1->Text;
    }
    private: System::Void ���_����������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        ���_����������2 = ���_����������1->Text;
    }
    private: System::Void ����_���1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
        
    }
private: System::Void ����������_�����������_���_������������2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    ����������_�����������_���_�������������3 = ����������_�����������_���_������������2->Text;
}
private: System::Void ����������_�����������_���_��������1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    ����������_�����������_���_��������2 = ����������_�����������_���_��������1->Text;
}
       String^ search = "";

private: System::Void Searcher_TextChanged(System::Object^ sender, System::EventArgs^ e) {
 
    
}
private: System::Void guna2TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    ����_���2 = guna2TextBox1->Text;
}
private: System::Void guna2TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (((e->KeyChar <= 47 || e->KeyChar >= 58) && (e->KeyChar>= 47 || e->KeyChar <= 45)) && e->KeyChar != 8)
        e->Handled = true;

}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
    General_Load(nullptr, nullptr);
}
private: System::Void ��������_����������1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    ��������_����������_���������2=��������_����������1->Text;
}
};
}
