///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "oplaydo1gui.h"

///////////////////////////////////////////////////////////////////////////

m_dialog::m_dialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 3, 3, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticTextLocation = new wxStaticText( this, wxID_ANY, wxT("Location"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLocation->Wrap( -1 );
	m_staticTextLocation->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 93, 92, false, wxEmptyString ) );
	
	fgSizer1->Add( m_staticTextLocation, 100, wxALL|wxEXPAND, 5 );
	
	m_staticTextLat = new wxStaticText( this, wxID_ANY, wxT("Latitude (N/S, Use +/-)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLat->Wrap( -1 );
	m_staticTextLat->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer1->Add( m_staticTextLat, 100, wxALL|wxEXPAND, 5 );
	
	m_staticTextLon = new wxStaticText( this, wxID_ANY, wxT("Longitude (E/W, Use +/-)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLon->Wrap( -1 );
	m_staticTextLon->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer1->Add( m_staticTextLon, 100, wxALL|wxEXPAND, 5 );
	
	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );
	
	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );
	
	m_staticline6 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );
	
	m_staticTextStart = new wxStaticText( this, wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextStart->Wrap( -1 );
	m_staticTextStart->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer1->Add( m_staticTextStart, 0, wxALL, 5 );
	
	m_textCtrlStartLat = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlStartLat, 0, wxALL, 5 );
	
	m_textCtrlStartLon = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlStartLon, 0, wxALL, 5 );
	
	m_staticTextFinish = new wxStaticText( this, wxID_ANY, wxT("Finish"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFinish->Wrap( -1 );
	m_staticTextFinish->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	
	fgSizer1->Add( m_staticTextFinish, 0, wxALL, 5 );
	
	m_textCtrlFinishLat = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlFinishLat, 0, wxALL, 5 );
	
	m_textCtrlFinishLon = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrlFinishLon, 0, wxALL, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	m_staticline3 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );
	
	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );
	
	m_buttonGenerate = new wxButton( this, wxID_ANY, wxT("Generate the GPX file"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_buttonGenerate, 0, wxALL, 5 );
	
	m_staticline8 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer1->Add( m_staticline8, 0, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( fgSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonGenerate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_dialog::OnGenerate ), NULL, this );
}

m_dialog::~m_dialog()
{
	// Disconnect Events
	m_buttonGenerate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_dialog::OnGenerate ), NULL, this );
	
}
