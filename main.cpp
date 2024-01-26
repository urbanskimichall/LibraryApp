#include <wx/wx.h>



class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
            : wxFrame(NULL, wxID_ANY, title, pos, size) {
        wxPanel* panel = new wxPanel(this, wxID_ANY);

        wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, wxT("Aplikacja!"),
                                                    wxPoint(10, 10));

        wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
        sizer->Add(staticText, 0, wxALL, 10);

        panel->SetSizer(sizer);

        Centre();
    }
};

class MyApp : public wxApp {
public:
    virtual bool OnInit() {
        MyFrame* frame = new MyFrame(wxT("Aplikacja"), wxPoint(50, 50), wxSize(450, 340));
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);

